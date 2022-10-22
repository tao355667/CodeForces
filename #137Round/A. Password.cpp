#include<bits\stdc++.h>
using namespace std;

int main()
{
    int ans;//结果
    int n;//几次判断
    int x=0;
    int a[10]={};//存储没有的数字
    int fog;//没有的数字的个数
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>fog;
        for(int j=0;j<fog;j++)
        {
            cin>>a[j];
        }
        //此判断并输出结果
        // for(int j=0;j<fog;j++)
        // {
        //     cout<<a[j]<<ends;
        // }
        //两个数可组成6种情况，∑（在可能的数中取两个*6）就是结果
        ans=(10-fog)*(10-fog-1)/2*6;
        cout<<ans<<endl;
        
    }
    
    return 0;
}