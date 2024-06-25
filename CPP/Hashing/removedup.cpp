#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){

    // using STL
    
    int arr[] = {1,2,3,4,5,6,6,7,8,8};

    int n = sizeof(arr)/sizeof(arr[0]);

    map<int, int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    vector<int> v;
    for(auto i: mp){
        v.push_back(i.first);
    }

    // without using STL

    for(int i=0; i<n; i++){
        int j;
        for(j=0; j=i; j++){
            if(arr[i] == arr[j]){
                break;
            }
        }
        if(i == j){
            cout << arr[i] << " ";
        }
    }
}