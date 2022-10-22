#include<bits\stdc++.h>
using namespace std;

int main()
{
    //读数据
    int n,m;
    int button[110]={};
    int a[110]={};
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>button[i];
    }
    //计算
    int flag=n-1;
    for(int i=0;i<m;i++)
    {
        for(int j=flag;j>=0;j--)
        {
            if(j+1 >= button[i])
            {
                a[j]=button[i];
                // cout<<"a"<<j<<"="<<button[i]<<endl;
                flag=j-1;
            }
            else
                break;
        }
        if(flag==-1) break;
    }
    //输出
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}