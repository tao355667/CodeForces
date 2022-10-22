#include<bits\stdc++.h>
using namespace std;
int main()
{
    int score[110]={};
    int n,k;
    int j=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>score[i];
    }
    //算出大于等于第k名分数的选手有几个
    // 方案1
    // for(int i=0;i<n;i++)
    // {// 这个过了
    //     if(score[i]>=score[k-1] && score[i]>0)
    //         j++;
    // }
    // 方案2
    // 这个没过-咱也不知道为啥，本地和oj运行结果不一样
    // score[]没初始化
    // 把int score[110];改成int score[110]={};就好了
    while(score[j]>=score[k-1])
    {
        if(score[j]<=0)
            break;
        j++;
    }
    
    cout<<j;
    return 0;
}