//Dont assume anything not mentioned in question!!!
#include <bits/stdc++.h>
using namespace std;

int len;

vector < vector<int> > adjList;

vector< bool > visited;

void dfs(int node) {

	for (auto child : adjList[node]) {
		if (!visited[child]) {
			visited[child] = true;
			++len;
			dfs(child);
		}
	}

}

int main() {

	int q;

	cin >> q;

	while (q--) {

		adjList.clear();
		visited.clear();

		int n, m, u, v, lib, road;

		long long totalCost = 0;

		cin >> n >> m >> lib >> road;

		adjList.resize(n + 1);
		visited.resize(n + 1);

		for (int i = 0; i < m; ++i) {

			cin >> u >> v;
			adjList[u].emplace_back(v);
			adjList[v].emplace_back(u);

		}

		for (int i = 1; i <= n; ++i) {

			if (!visited[i]) {
				visited[i] = true;
				len = 0;
				dfs(i);
				totalCost += lib;
				if (lib > road) totalCost += (road * len);
				else totalCost += (lib * len);
			}
		}

		cout << totalCost << '\n';
	}

	return 0;
}
