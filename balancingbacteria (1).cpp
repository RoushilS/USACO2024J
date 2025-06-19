// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n,c, diff, t;
	t =0;
	cin >> n;
	vector<ll> v;
	vector<ll> o;
	for (int i = 0; i<n; i++) {
		cin >> c;
		v.push_back(c);
		o.push_back(0);
	}
	for (int i = 0; i<n; i++) {
		if (v[i]!=o[i]) {
			diff = v[i]-o[i];
			//cout << abs(diff);
			o[i] = v[i];
			t+=abs(diff);
			for (int j = i+1; j<n; j++) {
				o[j]+=(j+1-i)*diff;
				//cout << o[j] << j << " ";
			}
		}
	}	 
	cout << t;


}
