#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
int n;
vector<ii>ans;
int cnt;
void dequy(int n,int a,int b,int c){
    if(n ==1){
        ans.push_back({a,c});
        return;
    }
    dequy(n-1,a,c,b);
    dequy(1,a,b,c);
    dequy(n-1,b,a,c);
}
void solve()
{
    cin>>n;
    dequy(n,1,2,3);
    cout<<ans.size()<<endl;
    for(ii x:ans){
        cout<<x.first<<" "<<x.second<<endl;
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
