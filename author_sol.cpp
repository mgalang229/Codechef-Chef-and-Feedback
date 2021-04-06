#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
    // use the find() function in the string
		cout << ((int) s.find("010") > -1 || (int) s.find("101") > -1 ? "Good" : "Bad") << '\n';
	}
	return 0;
}
