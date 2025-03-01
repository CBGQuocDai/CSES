#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const int maxn=2*1e5+5;
int n;
ll a[maxn];
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll ans= -1000000000000000;
    ll now =0;
    for(int i=1;i<=n;i++){
        now+= a[i];
        ans = max(ans,now);
        now= max(0LL,now);
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
