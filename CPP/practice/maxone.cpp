// maximum consecutive ones
#include<bits/stdc++.h>
using namespace std;

int maxcountChar(string s, char d){
	int size = s.size();
	int cnt = 0;
	int max_cnt = 0;
	for(int i=0; i<size; i++){
		if(s[i]== d){
			cnt++;
		}else{
			cnt = 0;
		}
		// if(cnt>max_cnt){
		// 	max_cnt = cnt;
		// }

		max_cnt = max(max_count,cnt);
	}
	return max_cnt;
}

int main(){
	vector<int>arr = {1,1,2,3,2,1,1,1,4,5,6,1,1,1,1};
	int size = arr.size();
	int count = 0;
	int max_count = 0;

	for(int i=0; i<size; i++){
		if(arr[i]==1){
			count++;
		}else{
			count = 0;
		}
		max_count = max(max_count,count);
	}
	cout << max_count;
}



