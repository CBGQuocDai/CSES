#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve()
{
    int n;
    cin>>n;
    vector<ll> a;
    a.resize(n+1,0);
    a[1]=0;
    a[2]=6;
    for(int i=3;i<=n;i++){
        ll tmp = i*i;
        a[i]=  tmp*(tmp-1)/2 -4*(i-1)*(i-2);
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<endl;
    }
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
