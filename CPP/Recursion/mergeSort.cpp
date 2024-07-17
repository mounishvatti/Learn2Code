#include<iostream>
#include<vector>
using namespace std;

// divide and merge
void merge(vector<int>& arr, int l, int mid, int r){
    vector<int> temp;
    int i = l, j = mid + 1;
    while(i <= mid && j <= r){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= r){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i = l; i <= r; i++){
        arr[i] = temp[i - l];
    }
}

void mergeSort(vector<int>& arr, int l, int r){
    if(l == r) return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main(){
    vector<int> arr = {9, 1, 2, 7, 6};
    mergeSort(arr, 0, arr.size() - 1);
    cout << "Sorted array: ";
    for(auto it: arr){
        cout << it << " ";
    }
    return 0;
}