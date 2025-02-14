#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
void solve()
{
    string s;
    cin>>s;
    vector<int> cnt;
    cnt.resize(26,0);
    int n =s.size();
    string ans(n,' ');
    for(int i=0; i<n; i++)
    {
        cnt[s[i]-'A']++;
    }
    int dd=0;
    int check=1;
    for(int i=0; i<26; i++)
    {
        dd+=cnt[i]%2;
    }
    if(dd>1){
        cout<<"NO SOLUTION"<<endl;return;
    }
    int l=0, r=n-1;
    for(int i=0;i<n;i++){
        if(cnt[s[i]-'A']%2==1 ) {
            ans[n/2] =s[i];
            cnt[s[i]-'A']-=1;
        }
        while(cnt[s[i]-'A']>0) {
            ans[l++] = s[i];
            ans[r--] = s[i];
            cnt[s[i]-'A'] -=2;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("test.inp","r",stdin);
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}
