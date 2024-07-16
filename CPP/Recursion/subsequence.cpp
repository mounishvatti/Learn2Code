#include<iostream>
#include<vector>
using namespace std;

void subsequence(int i, vector<int>& temp, vector<int>& arr){
    if(i == arr.size()){
        for(auto it: temp){
            cout << it << " ";
        }
        if(temp.size() == 0)
            cout << "{}";  // To show the empty subsequence
        cout << endl;
        return;
    }

    // Include the current element
    temp.push_back(arr[i]);
    subsequence(i + 1, temp, arr);

    // Exclude the current element
    temp.pop_back();
    subsequence(i + 1, temp, arr);
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> temp;
    subsequence(0, temp, arr);
    return 0;
}