/*
Maximum Weight Independent Set Reconstruction
---------------------------------------------
Time Complexity : Best, Average and Worst Case : O(n)
Space Complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> wisr(vector<int> a){
	vector<int> s;
	size_t iter = a.size() - 1;
	while (iter >= 0){
		if (a[iter - 1] >= a[iter - 2]){
			iter--;
		} else{
			s.push_back(iter);
			iter -= 2;
		}
	}
	sort(s.begin(), s.end());
	return s;
}