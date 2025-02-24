#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const int maxn=2*1e5+5;
int n,m,k;
int a[maxn],b[maxn];
void solve()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    int idx1 =1,idx2 =1;
    int ans=0;
    while(idx1<=n&& idx2<=m){
        if(abs(a[idx1]-b[idx2])<=k){
            ans++;
            idx1++;
            idx2++;
        }
        else {
            if(a[idx1]<b[idx2]) idx1++;
            else idx2++;
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
