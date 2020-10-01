#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
int n, m; // nodes and edges
int s;

queue<int> q;
vector<bool> visited(1001);
vector<int> dist(1001), par(1001);
vector<int> ans;

void bfs(int s) {
	q.push(s);
	ans.push_back(s);
	visited[s] = true;
	par[s] = -1;
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int u : adj[v]) {
			if (!visited[u]) { // if not visited
				visited[u] = true;
				ans.push_back(u);
				q.push(u);
				dist[u] = dist[v] + 1;
				// parent of u is v
				par[u] = v;
			}
		}
	}
}

int main() {
	//no.of vertices & edges respectively
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	// source to start bfs
	cin >> s;
	bfs(s);
	// printing the order of bfs search
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	int u;
	cin >> u;
	if (!visited[u]) {
		cout << "No path!";
	}
	else {
		vector<int> path;
		for (int v = u; v != -1; v = par[v])
			path.push_back(v);
		reverse(path.begin(), path.end());
		cout << "Path: ";
		for (int v : path)
			cout << v << " ";
	}
}