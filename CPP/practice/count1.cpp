#include<bits/stdc++.h>
using namespace std;

int revNum(int num){
	int dup_num = num; // 7456

	int revnum = 0;

	int last_digit = 0;

	while(dup_num > 0){
		last_digit = dup_num%10;
		dup_num/=10;
		revnum = revnum*10 + last_digit;
	}

	return revnum;
}

// Brute: hashmap using array
// Better: Hashmap using map/unordered_map. TC: 
// Optimal: XOR, TC: O(N), SC: O(1);

int getSingleElement(vector<int>&arr){
	int size = arr.size();

	int xorr = 0;

	for(int i=0; i<size; i++){
		xorr = xorr ^ arr[i];
	}
	return xorr;
}

int main(){
	vector<int>arr={1,5,5,6,6,7,7};
	unordered_map<int, int>mpp;
	int n = arr.size();
	for(int i=0; i<n; i++){
		mpp[arr[i]]++;
	}
	cout << "Better approach: ";
	for(auto it: mpp){
		if(it.second == 1){
			cout << it.first;
		}
	}
	cout << endl;

	cout << "Optimal approach: ";
	int ans = getSingleElement(arr);

	cout << ans;

	return 0;
}