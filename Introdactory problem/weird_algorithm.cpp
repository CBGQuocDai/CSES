#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve()
{
    long long n;
    cin>>n;
    vector<long long>ans;
    while(n!= 1){
        ans.push_back(n);
        if(n%2==0){
            n=n/2;
        }
        else{
            n=n*3+1;
        }
    }
    for(long long x:ans){
        cout<<x<<" ";
    }
    cout<<1<<endl;
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
