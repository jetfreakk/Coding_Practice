#include <bits/stdc++.h>
using namespace std;

int lcs(string X ,string Y ,string Z, int m, int n, int o)
{
    int dp[m+1][n+1][o+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            for(int k=0;k<=o;k++)
            {
                if(i==0 || j==0 || k==0)
                dp[i][j][k]=0;
                else if(X[i-1]==Y[j-1] && X[i-1]==Z[k-1])
                dp[i][j][k] = dp[i-1][j-1][k-1]+1;
                else
                dp[i][j][k]= max(max(dp[i-1][j][k], 
                                         dp[i][j-1][k]), 
                                     dp[i][j][k-1]);
                
            }
        }
    }
    return dp[m][n][o];
}
