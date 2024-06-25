// missing number in the array

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v = {1,2,3,5,6,7,8,9};

	map<int, int>mp;

	int size = v.size();

	for(int i=0; i<size; i++){
		mp[v[i]]++;
	}

	for(auto it: mp){
		if(it->second==0){
			cout << it->first;
			break;
		}
	}
	return 0;
}