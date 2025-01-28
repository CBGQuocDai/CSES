#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve()
{
    int n;
    cin>>n;
    vector<int> a;
    a.resize(n-1,0);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    int ans=1;
    int i=0;
    sort(a.begin(),a.end());
    while(i<n-1 && ans==a[i]){i++;ans++;}
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
