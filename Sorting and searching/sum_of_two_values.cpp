#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
int n,x;
const int maxn=2*1e5+5;
int a[maxn];
void solve()
{
    cin>>n>>x;
    map<int,int> m ;
    for(int i=1;i<=n;i++) cin>>a[i],m[a[i]]=i;
    int oke=0;
    for(int i=1;i<=n;i++){
        if(m[x-a[i]]!=0&& i!= m[x-a[i]]){
            cout<<i<<" "<<m[x-a[i]]<<endl;
            oke=1;
            break;
        }
    }
    if(oke==0){
        cout<<"IMPOSSIBLE"<<endl;
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
