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


		int n, m, u, v, lib, road;

		long long totalPair = 0;

		cin >> n >> m ;

		adjList.resize(n + 1);
		visited.resize(n + 1);

		for (int i = 0; i < m; ++i) {

			cin >> u >> v;
			adjList[u].emplace_back(v);
			adjList[v].emplace_back(u);

		}

		m=n;

		for (int i = 0; i < n; ++i) {

			if (!visited[i]) {
                visited[i]=true;
				len = 1;
				dfs(i);
               // cout<<i<<" "<<len<<" "<<m<<"\n";
				totalPair+=(len*(m-len));
				m-=len;
			}
		}

		cout << totalPair << '\n';
	

	return 0;
}
