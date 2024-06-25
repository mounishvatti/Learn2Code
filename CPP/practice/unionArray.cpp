#include<iostream>
#include<set.h>
#include<vector.h>
using namespace std;
vector<int> unionArr(vector<int>&arr){
	int n = arr.size();
	set<int>s;
	for(int i=0; i<n; i++){
		set.insert(arr[i]);
	}
}
int main(){
	/*
		your code goes here
	*/
}

// Optimal solution

vector<int> unionArr(vector<int>&arr){
	// arr1 = 1,1,2,3,4,5
	// arr2 = 2,3,4,5,6,7,8
	
	// unionArray = 1,2,3,4,5,6,7,8
	
	int n1 = arr1.size();
	int n2 = arr2.size();
	vector<int>uA;
	int i = 0;
	int j = 0;
	while(i<n1 && j<n2){
		if(arr1[i]<=arr2[j]){
			if(uA.size == 0 || uA.back()!=arr1[i]){
				uA.push_back(arr1[i]);
			}
			i++;
		}else if(arr2[j]<arr1[i]){
			if(uA.size == 0 || uA.back()!=arr2[i]){
				uA.push_back(arr2[i]);
			}
			j++;
		}
	}
	while(i<n1){
		if(arr1[i]<=arr2[j]){
			if(uA.size == 0 || uA.back()!=arr1[i]){
				uA.push_back(arr1[i]);
			}
			i++;
		}
	}
	while(j<n2){
		if(arr2[j]<arr1[i]){
			if(uA.size == 0 || uA.back()!=arr2[i]){
				uA.push_back(arr2[i]);
			}
			j++;
		}
	}
	return uA;
}