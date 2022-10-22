#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;//用来接收题目个数
    int a,b,c;//abc代表三个人的状态
    int s=0;//最后输出结果，要做几道题
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //接收每人状态
        cin>>a;cin>>b;cin>>c;
        //若状态和>=2则写出问题的解
        if(a+b+c>=2)
        {
            s++;
        }
    }
    cout<<s;
    return 0;
}