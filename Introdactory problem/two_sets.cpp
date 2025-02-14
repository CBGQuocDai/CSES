#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;

void solve()
{
    ll n;
    cin>>n;
    ll sum = n*(n+1)/2;

    if(sum%2==1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        vector<ll> set1,set2;
        int value =n;
        ll sum1 =0 ;
        vector<int> cx;
        cx.resize(n+1,0);
        while(sum1< sum/2){
            ll need = sum/2 - sum1;
            if(value<need){
                set1.push_back(value);
                cx[value]=1;
                sum1+=value;
                value--;
            }
            else{
                sum1+=need;
                cx[need]=1;
                value= need;
                set1.push_back(need);
                break;
            }
        }
        for(int i=1;i<=n;i++){
            if(cx[i]==0){
                set2.push_back(i);
            }
        }
        cout<<set1.size()<<endl;
        for(int x:set1){
            cout<<x<< " ";
        }
        cout<<endl;
        cout<<set2.size()<<endl;
        for(int y:set2){
            cout<<y<<" ";
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
