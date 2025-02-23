#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
int cx[9][9];
int ans;
string s;
void dfs(int vt,int x,int y){
    if(vt==48){
        if(x==7 && y==1) ans++;
        return ;
    }
    if(cx[x][y]==1) return;

    if(cx[x-1][y]==1&&cx[x+1][y]==1&&cx[x][y-1]==0&&cx[x][y+1]==0) return;
    if(cx[x-1][y]==0&&cx[x+1][y]==0&&cx[x][y-1]==1&&cx[x][y+1]==1) return;
    if(x==7&&y==1) return;
    cx[x][y]=1;
    char c= s[vt];

    if(c!='?'){

        if(c=='U') dfs(vt+1,x-1,y);
        else if(c=='D') dfs(vt+1,x+1,y);
        else if(c=='L') dfs(vt+1,x,y-1);
        else if(c=='R') dfs(vt+1,x,y+1);
    }
    else {
        dfs(vt+1,x-1,y);
        dfs(vt+1,x+1,y);
        dfs(vt+1,x,y-1);
        dfs(vt+1,x,y+1);
    }
    cx[x][y]=0;
}
void solve()
{
    cin>>s;
    for(int i=0;i<=8;i++){
        cx[i][0]=1;
        cx[i][8]=1;
        cx[8][i]=1;
        cx[0][i]=1;
    }
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++) cx[i][j]=0;
    }
    ans=0;
    dfs(0,1,1);
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
