#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n) for(ll i=n;i>=0;i--)
#define mod 1000000007
#define INF 1000000000000
//---------------------------------------------------------------------------//


void solve() {
	ll k,temp,sum,res,ans,n,q,l,r;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--){
        cin>>l>>r;
        l--;
        r--;
        bool ch=false;
        FOR(i,0,l){
            if(s[i]==s[l]){
                cout << "YES" << endl;
                ch=true;
                break;
            }
        }
        if(ch) continue;
        FOR(i,r+1,n){
            if(s[i]==s[r]){
                cout << "YES" << endl;
                ch=true;
                break;
            }
        }
        if(!ch) cout << "NO" << endl;





    }

}


int main()
{
	IOS;
	ll t;
	//t=1;
	cin >> t;
	For(i,1,t) {
		solve();
	}

	return 0;
}