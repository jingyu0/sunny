//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN = 1005;
//int w[MAXN];    // 重量 
//int v[MAXN];    // 价值 
//int f[MAXN][MAXN];  // f[i][j], j重量下前i个物品的最大价值 
//int res = 0;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) //索引从1开始
//		cin >> w[i] >> v[i];
//
//	for (int i = 1; i <= n; ++i)
//	for (int j = 1; j <= m; ++j)
//	{
//		//  当前重量装不进，价值等于前i-1个物品
//		if (j<w[i])
//			f[i][j] = f[i - 1][j];
//		// 能装，需判断 
//		else
//			f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
//	}
//
//	cout << f[n][m];
//	return 0;
//}