// selection sort
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Bubble sort 

void bubbleSort(vector<int>& arr){ // compare adjacent elements and swap if they are not in order
    for(int i = 0; i < arr.size(); i++){
        bool didswap = false; 
        for(int j = 0; j < arr.size() - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                didswap = true;
            } 
        }
        if(!didswap) break;
    }
}

// insertion sort   

void insertionSort(vector<int>& arr){ // place it at its correct position
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

void selectionSort(vector<int>& arr){ // get the minimum and swap it
    for(int i = 0; i < arr.size()-1; i++){
        int min = i;
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main(){
    vector<int> arr = {5, 2, 8, 1, 9, 3};
    selectionSort(arr);
    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;
    insertionSort(arr);
    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;
    bubbleSort(arr);
    for(auto it: arr){
        cout << it << " ";
    }

    return 0;
}