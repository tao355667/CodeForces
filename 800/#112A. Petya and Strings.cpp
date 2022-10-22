#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans=0;
    int i;
    char a[110]={};
    char b[110]={};
    cin>>a;
    cin>>b;
    for(i=0;a[i]!='\0';i++)
    {
        //小写转化为大写
        if(a[i]>='a'&&a[i]<='z'){a[i] -= 32;}
        if(b[i]>='a'&&b[i]<='z'){b[i] -= 32;}
        //比较
        if(a[i]<b[i])
        {
            ans=-1;break;
        }else if(a[i]>b[i])
        {
            ans=1;break;
        }
        else
            continue;
    }
    cout<<ans;//输出结果
    return 0;
}