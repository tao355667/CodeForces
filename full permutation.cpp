#include<bits\stdc++.h>
using namespace std;

#define Max 100
int ans[Max];
int vis[Max];
int n;
void dfs(int step)
{
    if(step==n+1)
    {
        for(int i=1;i<=n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            ans[step]=i;
            vis[i]=1;
            dfs(step+1);
            vis[i]=0;
        }
    }
}
int main()
{
    n=4;//几个元素的全排列
    dfs(1);//输出全排列的函数
    return 0;
}