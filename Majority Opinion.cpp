// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int infinished(int c, vector<int> finished) {
	for (int i = 0; i<finished.size(); i++) {
		if (c == finished[i]) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int t, n, c, l, ll, addspace, any; 
	addspace = 0;
	cin >> t;
	vector<int> finished;
	vector<int> all;
	for (int i = 0; i<t; i++) {
		finished.clear();
		all.clear();
		addspace = 0;
		cin >> n;
		cin >> c;
		ll = -2;
		l = -3;
		any = 0;
		for (int j = 0; j<n-1; j++) {
			ll = l;
			l = c;
			cin >> c;
			if ((l==c || ll==c) && infinished(c, finished) ==0) {
				finished.push_back(c);
				all.push_back(c);
				any = 1;

			}
		}

		if (any==0) {
			cout << -1;
		} else {
			sort(all.begin(), all.end());
			for (int x = 0; x<all.size(); x++) {
				if (addspace==1) {
					cout << " ";
				}
				cout << all[x];
				addspace = 1;
			}

		}
		cout << endl;
	}

}
