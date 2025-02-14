#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
typedef pair<int,int> ii;

void solve()
{
    int n;
    cin>>n;
    ll ans =1;
    for(int i=1;i<=n;i++){
        ans= (ans*2LL)%mod;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("test.inp","r",stdin);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}
