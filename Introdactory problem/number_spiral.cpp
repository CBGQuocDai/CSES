#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve()
{
    ll x,y;
    cin>>y>>x;
    ll ans=0;
    ll add= 0;
    if(y>x){
        ans = (y-1)*(y-1);
        add = 0;
        if(y%2!=0){
            add =x;
        }
        else add= 2*y-x;

    }
    else{
        ans = (x-1)*(x-1);
        add =0;
        if(x%2==0){
            add= y;
        }
        else add =2*x-y;
    }
    ans=ans+add;
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("test.inp","r",stdin);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
