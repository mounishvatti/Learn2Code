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

// using recursion

void rev(int l, int r, vector<int>&arr){
    if(l >= r)
        return;
    
    swap(arr[l], arr[r]);
    // int temp = arr[l];
    // arr[l] = arr[r];
    // arr[r] = temp;

    rev(l+1, r-1, arr);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    rev(0, arr.size()-1,arr);

    for(auto it: arr){
        cout<<it<<" ";
    }
}