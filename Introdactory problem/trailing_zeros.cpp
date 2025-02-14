#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve()
{
    // the number of zero rely on the numbers of 2 (count_two) and the the numbers of five (count_five). => ans = min(count_two, count_five)
    // min(count_two, count_five) == count_five => ans = count_five
    int n;
    cin>>n;
    int tmp =5 ;
    int ans=0;
    if(n<0) return;
    while(tmp<=n ){
        ans += n/tmp;
        tmp *= 5;
    }
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
