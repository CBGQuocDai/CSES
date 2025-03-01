#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const int maxn= 2*1e5+5;
int n;
int s[maxn],f[maxn];
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i]>>f[i];
    }
    sort(s+1,s+n+1);
    sort(f+1,f+n+1);
    int i=1,j=1;
    int now=0,ans=1;
    while(i<=n && j<=n){
        if(s[i]<f[j]){
            i++;
            now++;
            ans= max(ans,now);
        }
        else{
            now--;
            j++;
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
