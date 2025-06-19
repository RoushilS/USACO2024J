// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, s, c, b, p, t; cin >> n >> s;
	vector<int> type;
	vector<int> num;
	for (int i = 0; i < n; i++) {
		cin >> c;
		type.push_back(c);
		cin >> c;
		num.push_back(c);
	}
	b = s-1;
	p = 1;
	t = 0;
	int x = -1;
	while (b>-1 && b<n){
		if (type[b] == 0) {
			if (p>0) {
				p=abs(p)+num[b];
				p = p*-1;
			} else if (p<0) {
				p=abs(p)+num[b];
			}

		} else if (type[b] == 1){
			if (abs(p)>=num[b] && num[b]!=-1) {
				//cout << abs(p);
				num[b] = -1;
				t+=1;
			}
		}
		b+=p;
	}
	
	cout << t;
}
