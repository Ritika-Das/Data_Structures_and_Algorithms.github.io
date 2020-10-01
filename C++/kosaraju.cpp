#include <bits/stdc++.h>
using namespace std;
stack<int>st;
void dfs(vector<int>adj1[], int src, bool visited1[])
{
	//function to traverse all the adjacent elements
	visited1[src] = true;
	for (auto u : adj1[src])
	{
		if (!visited1[u])
			dfs(adj1, u, visited1);
	}
	// after all the adjacent nodes of a particular node is visited
	// that is after dfs(src) is over we push it in stack.
	st.push(src);
}

void DFSUtil(vector<int>adj2[], int v, bool visited2[])
{
	// Mark the current node as visited and print it
	visited2[v] = true;
	cout << v << " ";

	// Recur for all the vertices adjacent to this vertex
	for (auto u : adj2[v])
		if (!visited2[u])
			DFSUtil(adj2, u, visited2);
}
void Kosaraju(vector<int>adj2[], bool visited2[])
{
	cout << endl;
	//while stack is not empty,pop an element and traverse and print all its adjacent nodes
	while (!st.empty())
	{
		int k = st.top();
		st.pop();
		if (!visited2[k])
		{
			DFSUtil(adj2, k, visited2);
			cout << endl;
		}

	}
}
int main()
{
	int n, m, a, b;
	cin >> n >> m;
	vector<int>adj1[n + 1];
	vector<int>adj2[n + 1];

	//to keep track of elements visited or not,true=visited,false=not visited
	bool visited1[n + 1] = {false};
	bool visited2[n + 1] = {false};
	for (int i = 0; i < m; i++)
	{

		cin >> a >> b;
		adj1[a].push_back(b);

		// graph with reverse edges
		adj2[b].push_back(a);
	}
	for (int i = 0; i < n; i++)
	{
		if (!visited1[i])
			dfs(adj1, i, visited1);

	}

	Kosaraju(adj2, visited2);
}