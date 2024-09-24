#include<bits/stdc++.h>

using namespace std;

const int mx = 1005;

int main() {
	int tc;
	cin >> tc;
	for(int t = 0; t < tc; t ++) {
		char a[mx], b[mx];
		cin >> a >> b;
		
		int lena = strlen(a);
		int lenb = strlen(b);
		
		int dp[lena][lenb];
		memset(dp, 0, sizeof dp);
		
		for(int i = 1; i <= lena; i ++) {
			for(int j = 1; j <= lenb; j ++) {
				if(toupper(a[i - 1]) == toupper(b[j - 1])) dp[i][j] = dp[i - 1][j - 1] + 1;
				else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
		
		int LCS = dp[lena][lenb];
		if(LCS == strlen(b)) printf("YES\n");
		else printf("NO\n");
	}
}

