#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const int maxn=2*1e5+5;
int n;
void solve()
{
    cin>>n;
    vector<ii> a;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i].second>>a[i].first;
    }
    sort(a.begin(),a.end());
    int last= a[0].first;
    int ans=1;
    for(int i=1;i<n;i++){
        if(a[i].second >=last){
            ans++;
            last= a[i].first;
        }
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
