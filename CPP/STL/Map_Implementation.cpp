#include <iostream>
#include <vector>
#include <list>
#include <utility>
 
template <typename K, typename V>
class Map {
private:
	std::vector<std::list<std::pair<K, V>>> table;
	int capacity;
	int size;
	float loadFactorThreshold;

	// Hash function to map a key to an index
	int hash(const K& key) const {
		return std::hash<K>{}(key) % capacity;
	}

	void resize() {
		int oldCapacity = capacity;
		capacity *= 2;
		std::vector<std::list<std::pair<K, V>>> newTable(capacity);

		// move elements to new table with updated capacity

		for (int i = 0; i < oldCapacity; ++i) {
			for (const auto& pair : table[i]) {
				int newIndex = hash(pair.first);
				newTable[newIndex].push_back(pair);
			}
		}
		table = std::move(newTable);
	}
public:
	Map(int initialCapacity = 16, float loadFactorThreshold = 0.75) : capacity(initialCapacity), size(0), loadFactorThreshold(loadFactorThreshold) {
		table.resize(capacity);
	}

	// Insert or update the key-value pair
	void put(const K& key, const V& value) {
		int index = hash(key);
		for (auto& pair : table[index]) {
			if (pair.first == key) {
				pair.second = value; // update value if key exists
				return;
			}
		}

		table[index].emplace_back(key, value);
		size++;

		if ((float)size / capacity > loadFactorThreshold) {
			resize();
		}
	}

	// Retrieve the value associated with the key
	V get(const K& key) const {
		int index = hash(key);
		for (const auto& pair : table[index]) {
			if (pair.first == key) {
				return pair.second;
			}
		}
		throw std::runtime_error("Key not found");
	}

	// Remove the key - value pair associated with the key
	bool remove(const K& key) {
		int index = hash(key);
		auto& bucket = table[index];

		for (auto it = bucket.begin(); it != bucket.end(); ++it) {
			if (it->first == key) {
				bucket.erase(it);
				size--;
				return true;
			}
		}
		return false; // Key not found
	}

	// Check if a key exists in the map
	bool containsKey(const K& key) const {
		int index = hash(key);
		for (const auto& pair : table[index]) {
			if (pair.first == key) {
				return true;
			}
		}
		return false;
	}

	// Get the number of key-value pairs in the map
	int getSize() const {
		return size;
	}

	// Print all elements in the map for debugging
	void print() const {
		for (int i = 0; i < capacity; ++i) {
			std::cout << "Bucket " << i << ": ";
			for (const auto& pair : table[i]) {
				std::cout << "{" << pair.first << ": " << pair.second << "} ";
			}
			std::cout << std::endl;
		}
	}
};

int main()
{
	Map<std::string, int> myMap;

	myMap.put("apple", 10);
	myMap.put("banana", 20);
	std::cout << "apple: " << myMap.get("apple") << std::endl;  // Output: 10
	std::cout << "banana: " << myMap.get("banana") << std::endl;  // Output: 20

	myMap.put("apple", 15); // Update value for "apple"
	std::cout << "apple (updated): " << myMap.get("apple") << std::endl;  // Output: 15

	myMap.remove("banana");
	std::cout << "Contains 'banana'? " << (myMap.containsKey("banana") ? "Yes" : "No") << std::endl;  // Output: No

	std::cout << "Final Map contents:\n";
	myMap.print();

	return 0;
}