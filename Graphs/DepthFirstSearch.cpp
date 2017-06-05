/*
Depth First Search Algorithm
----------------------------
Depth-first search (DFS) is an algorithm for traversing or searching 
tree or graph data structures. One starts at the root (selecting some
arbitrary node as the root in the case of a graph) and explores as 
far as possible along each branch before backtracking.
----------------------------
Time Complexity : O(n)
Space Complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <stack>

struct node{
	vector<int> adjacency;
};

node graph[10000];
bool discovered[10000] = {};

void dfs(int source){
	stack<int> v;
	v.push_front(source);
	while(!v.empty()){
		int temp = v.back();
		v.pop_back();
		discovered[temp] = true;
		for (int i = 0; i < graph[temp].adjacency.size(); i++){
			if (!discovered[graph[temp].adjacency[i]]){
				v.push_back(graph[temp].adjacency[i]);
				discovered[graph[temp].adjacency[i]] = true;
			}
		}
	}
}