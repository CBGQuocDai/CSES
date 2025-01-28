#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve()
{
    string s;
    int ans=1;
    int tmp=1;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])tmp++;
        else{
            ans=max(ans,tmp);
            tmp=1;
        }
    }
    ans=max(ans,tmp);
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
