#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

void solve() {
	string s;
	cin >> s;
	string tmp1="", tmp2="";
	for(int i=1; i<(int)s.size(); ++i)
		tmp1+=s[i];
	tmp1+=s[0];
	tmp2+=s[(int)s.size()-1];
	for(int i=0; i+1<(int)s.size(); ++i)
		tmp2+=s[i];
	cout << (tmp1==tmp2?"YES":"NO") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
