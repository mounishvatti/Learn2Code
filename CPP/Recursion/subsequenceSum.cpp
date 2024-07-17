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

int subseqSumCount(int i, vector<int>& arr, int sum, int s){
    if(i == arr.size()){
        if(s==sum) return 1;    
        else return 0;
    }

    s+=arr[i];
    int l = subseqSumCount(i + 1, arr, sum, s);

    s-=arr[i];
    int r = subseqSumCount(i + 1, arr, sum, s); 

    return l+r;
}

int main(){
    vector<int> arr = {1, 2, 1};
    vector<int> temp;

    int sum = 2;

    subseqSum(0, temp, arr, sum, 0); // print all subsequences
    cout << endl;
    subseqSum1(0, temp, arr, sum, 0); // print only one subsequence
    cout << endl;
    cout << subseqSumCount(0, arr, sum, 0) << endl; // print count

    return 0;
}