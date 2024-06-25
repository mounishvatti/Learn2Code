#include <iostream>
#include<vector>
using namespace std;

// array is sorted 

// we reduce the search space by introducing a new variable called mid so that we can update the values of low_limit & upper_limit according the target value

int search(vector<int>arr, int low, int high, int target){
	int size = arr.size();
	int low = 0;
	int high = size;

	if(low>high) return -1;

	int mid = (low+high)/2;

	if(arr[mid]==target) return mid;

	else if(target>arr[mid]){
		return search(arr, mid+1, high, target);
	}
	else return search(arr, low, mid-1, target);
}

int BinarySearch(vector<int>&arr, int target){
	int size = arr.size();

	int low = 0;
	int high = size - 1;

	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid] == target) return mid;
		else if(target>arr[mid]) low = mid+1;
		else high = mid-1;
	}
	return -1;
}

int main(){
	vector<int>arr = {1,2,3,4,5,6,7,8,9};
	int low = 0;
	int high = arr.size()-1;
	int value;
	cout << "Enter an integer to be searched: ";
	cin >> value;

	int result = BinarySearch(arr, value);

	int result1 = search(arr, low, high, value);

	cout << "The result is: " << result << endl;

	return 0;
}