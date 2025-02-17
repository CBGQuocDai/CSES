#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
int x[20];
int cx[20],n;
string s;
set<string> ans;
void sinh(int vt)
{
    for(int i=0;i<n;i++){
        if(cx[i]==1){
            x[vt]=i;
            cx[i]=0;
            if(vt==n-1) {
                string tmp ="";
                for(int j=0;j<n;j++){
                    tmp+=s[x[j]];
                }
                ans.insert(tmp);
            }
            else{
                sinh(vt+1);
            }
            cx[i]=1;
        }
    }
}
void solve()
{
    cin>>s;
    n= s.size();
    for(int i=0;i<n;i++) cx[i]=1;
    sinh(0);
    cout<<ans.size()<<endl;
    for(string x:ans){
        cout<<x<<endl;
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
