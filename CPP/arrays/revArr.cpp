#include <bits/stdc++.h>

using namespace std;

// 1,2,3,4,5.       5,4,3,2,1

vector<int> Reverse(vector<int>&arr){

	int start = 0;
	int end = arr.size() - 1;

	while(start <= end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
	return arr;
}

int main(){

	vector<int>arr = {1,2,3,4,5};

	reverse(arr, arr+d);
	reverse(arr+d, arr+n);
	reverse(arr, arr+n);

	for(auto it: arr){
		cout << it << " ";
	}
	return 0;
}