#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {-1,2,3,3,4,5,-1};
    int k = 4;

    int sum = 0;
    int max_sum = INT_MIN;

    int left = 0;
    int right = k-1;

    while(right<arr.size()-1){
        for(int i=left; i<=right; i++){
            sum += arr[i];
        }
    }
}