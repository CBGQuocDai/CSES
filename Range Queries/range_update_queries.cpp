#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
typedef long long ll;
typedef pair<int,int> ii;
int n,q;
const int maxn=200000+5;
const ll oo=1e17+7;
ll t[maxn*4], lazy[maxn*4];
ll a[maxn];
void push(int id) // dùng trong lazy
{
    if(lazy[id])
    {
        t[id*2]+=lazy[id];
        t[id*2+1]+=lazy[id];
        lazy[id*2]+=lazy[id];
        lazy[id*2+1]+=lazy[id];
        lazy[id]=0;
    }
}
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
    push(id); // hàm được sử dụng trong lazy
    return min(get(id*2,l,mid,u,v) ,get(id*2+1,mid+1,r,u,v));
}

void update2(int id,int l,int r,int u,int v,int x) // dùng trong lazy
{
    if(v<l||r<u) return ;
    if(u<=l&& r<=v)
    {
        t[id]+=x;
        lazy[id]+=x;
        return;
    }
    int mid=(l+r)/2;
    push(id);
    update2(id*2,l,mid,u,v,x);
    update2(id*2+1,mid+1,r,u,v,x);
    t[id]=min(t[id*2],t[2*id+1]);
}
void solve()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    for(int i=1;i<=q;i++)
    {
        int k;
        cin>>k;
        if(k==1)
        {
            int l,r,v;
            cin>>l>>r>>v;
            update2(1,1,n,l,r,v);
        }
        else
        {
            int g;
            cin>>g;
            cout<<get(1,1,n,g,g)<<endl;
        }
    }
}

int main()
{
    solve();
}

