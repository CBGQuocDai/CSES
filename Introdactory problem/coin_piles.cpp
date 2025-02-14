#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve()
{
    int a,b;
    cin>>a>>b;
    if( a==0 && b==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    if( a==0 || b==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    int m =abs(a-b);
    int ans =min(a,b)-m;
    if(ans<=0)
    {
        int c= max(a,b);
        int d= min(a,b);
        if(c-2*m==0 && d-m==0){
            cout<<"YES"<<endl;
            return;
        }
        else
            cout<<"NO"<<endl;
        return;
    }
    if(ans%3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
