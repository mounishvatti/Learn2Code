#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> arr = {1,2,3,4,0,7,0,3,9,0};

	int n = arr.size();

	vector<int>temp(n);

	for(int i=0; i<n; i++){
		if(arr[i]!=0){
			temp.push_back(arr[i]);
		}
	}

	int Zcount = n - temp.size();

	while(Zcount--){
	 	temp.push_back(0);
	 }
	return 0;
}