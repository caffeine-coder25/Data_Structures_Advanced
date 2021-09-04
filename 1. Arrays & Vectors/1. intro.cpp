/*
Create a vector and perform basic functions like pushback, popback, find size, capacity etc.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> arr = {1, 2, 3};

	//push_back
	arr.push_back(4);

	//finding size of vector
	cout << arr.size() << endl;

	//capacity of vector
	cout << arr.capacity() << endl;

	//removing last element from vector
	arr.pop_back();

	for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}

	cout << endl;

	//Fill Constructor, helpful in initialisation list
	vector<int> arr2(10, 0);

	for(int i = 0; i < arr2.size(); i++){
		cout << arr2[i] << " ";
	}

	return 0;
}
