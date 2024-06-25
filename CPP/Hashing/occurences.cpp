#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    cout << "Enter the no of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to be checked: ";

    int ele;
    cin >> ele;

    for(int i=0; i<n; i++){
        if(arr[i] == ele){
            cout << "Element found at index: " << i << endl;
        }
    }

    // check the number of occurances in the array

    int count = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == ele){
            count++;
        }
    }

    if(count == 1){
        cout << "The element " << ele << " occurs " << count << " time in the array." << endl;
    }
    else{
        cout << "The element " << ele << " occurs " << count << " times in the array." << endl;
    }

    // but what if you wan to count the number of occurances of all the elememnts in thaat particular array, for this we can use a hashmap as seen below;
    // there are two ways by which we can achieve this, one is by creating another array with a big size (more space complexity)

    int hasharr[10] = {0};

    map<int, int> hashmap;

    for(int i=0; i<n; i++){
        hasharr[arr[i]]++;
    }

    for(int i=0; i<n; i++){
        hashmap[arr[i]]++;
    }
    cout << "Using a hasharray"<<endl;

    for(int i=0; i<10; i++){
        cout << arr[i] << "->";
        cout << hasharr[arr[i]] << endl;
    }

    cout << endl;

    cout << "Using a hashmap" << endl;

    for(auto i: hashmap){
        cout << i.first << "->" << i.second << endl;
    }
    
    // so basically by using the map datastructure we are not making multiple instances of the same value, this ensures that we reduce the space complexity by a bit;

    // lets try to do the same with strings
    // lets try to count the number of occurances of each character in a string

    string s;
    cout << "Enter a string: ";
    cin >> s;

    // using map datastructure to count the number of occurances of each character in a string

    map<char, int> charmap;

    for(int i=0; i<s.length(); i++){
        charmap[s[i]]++;
    }
    
    cout << "Using a map" << endl;

    for(auto it: charmap){
        cout << it.first << "->" << it.second << endl;
    }

    // doing the same but with the help of an array
    
    cout << "Using an array" << endl;

    int chararr[256] = {0};

    for(int i=0; i<s.length(); i++){
        chararr[s[i]]++;
    }

    for(int i=0; i<s.length(); i++){
        cout << s[i] << "->" << chararr[s[i]] << endl;
    }

    return 0;
}
