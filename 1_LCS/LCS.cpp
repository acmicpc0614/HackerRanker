#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[1005], b[1005];
int dp[1005][1005];

void solve() {
	
	memset(dp, 0, sizeof dp);
	
  for(int i = 1; i <= n; i ++) {
  	for(int j = 1; j <= m; j ++) {
  		
  		if(a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	int i = n, j = m;
	vector<int> ans;
	while(i and j) {
		if(a[i - 1] == b[j - 1]) {
			ans.push_back(a[i - 1]);
			i --;
			j --;
		}
		else if(dp[i - 1][j] > dp[i][j - 1]) i --;
		else j --;
	}
	reverse(ans.begin(), ans.end());
	for(auto x: ans) cout << x << " ";
}
int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i ++) cin >> a[i];
	for(int i = 0; i < m; i ++) cin >> b[i];
	solve();
}
