#include <bits/stdc++.h>
using namespace std;

struct cnt {
	int f, s, t;
	cnt() {f = 0; s = 0; t = 0;}
};

unordered_map<string, string> parent;
unordered_map<string, int> size;
unordered_map<string, cnt> gradecnt;
int n, m, f, s, t, mx, mi;

string findParent(string s) {
	if (s == parent[s]) return s;
	parent[s] = findParent(parent[s]);
	return parent[s];
}

void Unite(string a, string b) {
	if (findParent(a) == findParent(b)) return;
	cnt temp1 = gradecnt[findParent(a)];
	cnt temp2 = gradecnt[findParent(b)];
	cnt temp;
	temp.f = temp1.f + temp2.f;
	temp.s = temp1.s + temp2.s;
	temp.t = temp1.t + temp2.t;
	if (temp.f > f or temp.s > s or temp.t > t or temp.f + temp.s + temp.t > mx) return;
	if (size[findParent(a)] >= size[findParent(b)]) {
		size[findParent(a)] += size[findParent(b)];
		gradecnt[findParent(a)] = temp;
		parent[findParent(b)] = findParent(a);
	}
	else {
		size[findParent(b)] += size[findParent(a)];
		gradecnt[findParent(b)] = temp;
		parent[findParent(a)] = findParent(b);
	}
}

vector<string> split_string(string);

// Complete the membersInTheLargestGroups function below.
void membersInTheLargestGroups(int n, int m, int a, int b, int f, int s, int t) {
	// Print the names of the students in all largest groups or determine if there are no valid groups.
	::f = f;
	::s = s;
	::t = t;
	mx = b;
	mi = a;
	string name, name1, name2;
	int grade;
	vector<string> namelist;
	for (int i = 0; i < n; ++i) {
		cin >> name >> grade;
		namelist.push_back(name);
		parent[name] = name;
		size[name] = 1;
		cnt temp;
		switch (grade) {
		case 1:
			temp.f++;
			break;
		case 2:
			temp.s++;
			break;
		case 3:
			temp.t++;
			break;
		}
		gradecnt[name] = temp;
	}
	for (int i = 0; i < m; ++i) {
		cin >> name1 >> name2;
		Unite(name1, name2);
	}

	int maxx = -1;

	for (auto name : namelist) {
		name = findParent(name);
		//     cout << name  <<' ' << size[name] << ' '<<maxx << '\n';
		if (size[name] >= mi) maxx = max(maxx, size[name]);
	}

	if (maxx != -1) {
		set<string> s;
		for (auto name : namelist) {
			if (size[findParent(name)] == maxx) s.insert(name);
		}
		for (auto ss : s) cout << ss << '\n';
	}
	else cout << "no groups\n";
}

int main()
{
	string nmabfst_temp;
	getline(cin, nmabfst_temp);

	vector<string> nmabfst = split_string(nmabfst_temp);

	int n = stoi(nmabfst[0]);

	int m = stoi(nmabfst[1]);

	int a = stoi(nmabfst[2]);

	int b = stoi(nmabfst[3]);

	int f = stoi(nmabfst[4]);

	int s = stoi(nmabfst[5]);

	int t = stoi(nmabfst[6]);

	membersInTheLargestGroups(n, m, a, b, f, s, t);

	return 0;
}

vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
		return x == y and x == ' ';
	});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}