#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 5
int main()
{
    int ans=0;
    int m[MAXSIZE][MAXSIZE];
    int row,col;
    for(int i=0;i<MAXSIZE;i++)//读取矩阵行
    {
        for(int j=0;j<MAXSIZE;j++)//读取矩阵列
        {
            cin>>m[i][j];
            if(m[i][j]==1)//存储1的行数和列数
            {
                row=i;
                col=j;
            }
        }
    }
    //计算行，列要移动的次数x，y
    int x=abs(row-2);
    int y=abs(col-2);
    ans=x+y;//算出最终结果
    // 输出矩阵，查看是否正常读取
    // for(int i=0;i<MAXSIZE;i++)
    // {
    //     for(int j=0;j<MAXSIZE;j++)
    //     {
    //         cout<<m[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    //cout<<x<<y<<endl;
    cout<<ans;//输出结果
    return 0;
}