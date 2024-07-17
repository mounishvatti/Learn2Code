#include<iostream>
#include<vector>
using namespace std;

void subseqSum(int i, vector<int>& temp, vector<int>& arr, int sum, int s){
    if(i == arr.size()){
        if(s==sum){
            for(auto it: temp){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    temp.push_back(arr[i]);
    s+=arr[i];
    subseqSum(i + 1, temp, arr, sum, s);

    temp.pop_back();
    s-=arr[i];
    subseqSum(i + 1, temp, arr, sum, s);
}

bool subseqSum1(int i, vector<int>& temp, vector<int>& arr, int sum, int s){
    if(i == arr.size()){
        if(s==sum){
            for(auto it: temp){
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }

    temp.push_back(arr[i]);
    s+=arr[i];

    if(subseqSum1(i + 1, temp, arr, sum, s) == true){
        return true;
    }

    temp.pop_back();
    s-=arr[i];

    if(subseqSum1(i + 1, temp, arr, sum, s) == true){
        return true;
    }

    return false;
}

int main(){
    vector<int> arr = {1, 2, 1};
    vector<int> temp;
    
    int sum = 2;

    subseqSum(0, temp, arr, sum, 0);
    cout << endl;
    subseqSum1(0, temp, arr, sum, 0);

    return 0;
}