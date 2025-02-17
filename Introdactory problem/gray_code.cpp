#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

vector<string> sinh(int n) {
    if(n==1) {
        return {"0","1"};
    }
    vector<string> left =sinh(n-1);
    vector<string> right=left;
    reverse(right.begin(),right.end());
    vector<string> ans;
    int length = left.size();
    ans.resize(2*length);
    for(int i=0;i<length;i++){
        ans[i]="0"+left[i];
        ans[length+i]="1"+right[i];
    }
    return ans;
}

void solve()
{
    int n;
    cin>>n;
    vector<string> ans =sinh(n);
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
