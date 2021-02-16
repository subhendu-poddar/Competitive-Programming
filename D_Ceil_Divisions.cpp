#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define	ll long long
#define pb push_back
#define vv vector
#define ff first
#define ss second
#define pr(x) fixed<<setprecision(10)<<x
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define For(i,a,n) for(ll i=a;i<=n;i++)
#define rev(i,n,a) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define INF 1000000000000
#define max_heap(type) priority_queue<type>
#define min_heap(type) priority_queue<type,vv<type>,greater<type>>
ll gcd(ll x,ll y) {return __gcd(x,y);}
ll lcm(ll x,ll y) {return (x*y)/__gcd(x,y);}
//---------------------------------------------------------------------------//
//--------------------------SUBHENDU PODDAR----------------------------------//
//---------------------------------------------------------------------------//


void solve() {
	ll k,temp,sum,res,ans,n;
    cin >> n;
    vv<pair<ll,ll>> a;

    temp=n-1;
    res=n;
    while(1){
        if(sqrt(res)>temp){
            a.pb({n,temp});
            if(res%temp==0) res/=temp;
            else res= res/temp+1;
        }
        if(temp<=2) break;
        a.pb({temp,n});
        temp--;
    }
    while(res>1){
        a.pb({n,2});
        if(res%2==0) res/=2;
        else res=res/2+1;
    }


    cout << a.size() << endl;
    FOR(i,0,a.size()){
        cout << a[i].ff << ' ' << a[i].ss << endl;
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
		//cout << solve() << endl;
	}

	return 0;
}