#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const int maxn= 2*1e5+5;
int t[maxn];
int n,m;
int ans[maxn];
void solve()
{
    cin>>n>>m;
    multiset<int> h;
    for(int i=1;i<=n;i++) {
        int c;
        cin>>c;
        h.insert(c);
    }
    for(int i=1;i<=m;i++) cin>>t[i];
    for(int i=1;i<=m;i++){
        auto j = h.upper_bound(t[i]);
        if(j==h.begin()){
            ans[i]=-1;
            continue;
        }
        j--;
        ans[i]=*j;
        h.erase(j);
    }
    for(int i=1;i<=m;i++) cout<<ans[i]<<endl;
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
