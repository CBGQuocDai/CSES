#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
typedef long long ll;
typedef pair<int,int> ii;
const int maxn=200000+5;
const int oo=1e9+7;
ll t[maxn*4], lazy[maxn*4];
ll a[maxn];
void build(int id,int l,int r)
{
    if(l==r) {
        t[id]=a[l];
        return;
    }
    int mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    t[id]=min(t[id*2],t[id*2+1]);
}
ll get(int id,int l,int r,int u,int v)
{
    if(v<l || r<u) return oo;
    if(u<=l &&r<=v) return t[id];
    int mid=(l+r)/2;
    //push(id); // hàm được sử dụng trong lazy
    return min(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}
void update1(int id,int l,int r,int pos,int val) // update  1 vị trí
{
    if(pos<l|| pos>r) return ;
    int mid=(l+r)/2;
    if(l==r)
    {
        t[id]=val;
        a[l]=val;
        return;
    }
    update1(id*2,l,mid,pos,val);
    update1(id*2+1,mid+1,r,pos,val);
    t[id]=min(t[id*2],t[2*id+1]);
}
void solve()
{
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    for(int i=1;i<=q;i++){
        int c,l,r;
        cin>>c>>l>>r;
        if(c==1){
            update1(1,1,n,l,r);
        }
        else
            cout<<get(1,1,n,l,r)<<endl;
    }
}

int main()
{
    //freopen("test.inp","r",stdin);
    //cin>>t;
    solve();
}
