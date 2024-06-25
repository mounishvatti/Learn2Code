// longest subarray with sum "k"

#include<bits/stdc++.h>
using namespace std;

int subArraywithSumK(vector<int>&arr, int k){
	int n = arr.size();
	int len = 0;
	for(int i=0; i<n; i++){
		int total_sum = 0 ; 
		for(int j=i; j<n; j++){
			total_sum += arr[j];
			if(total_sum == k){
				len = max(len, j-i+1);
			}
		}
	}
	return len;
}

int main(){

	vector<int>arr = {2,3,5,1,9};

	int k = 10;

	int result = subArraywithSumK(arr,k);

	cout << result;

	return 0;
}

