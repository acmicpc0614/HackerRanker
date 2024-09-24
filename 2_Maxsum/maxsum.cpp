#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int maxElement(int n, int maxSum, int k) {
    // 3 7 1
    // 4 6 2
    k = min(k, n - k - 1);
    int tmpSum = n * (n + 1) / 2 + (n - k - 1) * k;
    cout << "tmpSum " << tmpSum << "\n";
    int del = maxSum - tmpSum;
    
    int tmpAvg = del / n;
    if(del % n) 
    	if(del > 0) tmpAvg ++;
    	else tmpAvg --;
    return tmpAvg + n;
}

int main()
{
	int n, maxSum, k;
	cin >> n >> maxSum >> k;
	cout << maxElement(n, maxSum, k);
}
