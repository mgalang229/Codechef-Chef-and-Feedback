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
		bool checker = false;
		for (int i = 0; i < (int) s.size(); i++) {
			// check every 3 consecutive substrings in the string if
			// it's equal to "010" or "101"
			if (s.substr(i, 3) == "010" || s.substr(i, 3) == "101") {
				// if yes, then set the checker to true and break the loop
				checker = true;
				break;
			}
		}
		cout << (checker ? "Good" : "Bad") << '\n';
	}
	return 0;
}
