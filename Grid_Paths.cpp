#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
    int n;
    cin>>n;
    string s;
    vector<vector<int>>dp(n,vector<int>(n,1));
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=0;j<s.size();j++){
            if(s[j]=='*'){
                dp[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==0 && j==0) || dp[i][j]==0) continue;
            if(i==0) dp[i][j]=dp[i][j-1];
            else if(j==0) dp[i][j]=dp[i-1][j];
            else{
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
            dp[i][j]%=mod;
        }
    }
    cout << dp[n-1][n-1] << endl;
    return 0;
}