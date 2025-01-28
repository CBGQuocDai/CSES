#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve()
{
    int n;
    vector<ll> a;
    cin>>n;
    a.resize(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=0;
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]) continue;
        else{
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
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
