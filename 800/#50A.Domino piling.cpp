#include<bits\stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(m%2==0)//m为偶数，除以2是可容纳2格的个数
    {
        cout<<m/2*n;
    }
    else if(n%2==0)//n为偶数，同理
    {
        cout<<n/2*m;
    }
    else if(n==1)//n为1，则只有一列m个格子，m/2即可
    {
        cout<<m/2;
    }
    else if(m==1)//m为1同理
    {
        cout<<n/2;
    }
    else//此时n，m都不是偶数且都不为1，则m，n都>=3
    {//n-1，把偶数的先填满，之后剩下一列n个，n/2即可
        cout<<(n-1)/2*m+m/2;
    }

    return 0;
}