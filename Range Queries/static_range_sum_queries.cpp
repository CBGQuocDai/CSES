#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
typedef long long ll;
typedef pair<int,int> ii;
int t;
const int maxn=1e6+5;
ll a[maxn];
ll s[maxn];
void solve()
{
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>a[i],s[i]=s[i-1]+a[i];
    for(int i=1;i<=q;i++){
        int l,r;
        cin>>l>>r;
        cout<<s[r]-s[l-1]<<endl;
    }

}

int main()
{
    //freopen("test.inp","r",stdin);
    //cin>>t;
    t=1;
    while(t--)
    {
        solve();
    }
}
