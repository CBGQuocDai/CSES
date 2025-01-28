#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve()
{
    int n;
    vector<int> ans;
    cin>>n;
    if(n<=3 && n>1) cout<<"NO SOLUTION"<<endl;
    else{
        for(int i=2;i<=n;i+=2){
            ans.push_back(i);
        }
        for(int i=1;i<=n;i+=2){
            ans.push_back(i);
        }
        for(int x:ans){
            cout<<x<<" ";
        }
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
