#include<bits/stdc++.h>
using namespace std;



int main() {
	
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif 
	
	vector< vector<int> > arr = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8},
		{10, 11, 12, 13}
	};

	for(int i = 0; i < arr.size(); i++){
		for(int x: arr[i]){
			cout << x << " ";
		}
		cout << endl;
	}
	
	return 0;
}