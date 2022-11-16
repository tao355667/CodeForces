/*
Q（包含它自己）后面的 A数量要 大于等于 Q的数量
（回答不少于问题）
*/
#include<bits\stdc++.h>
using namespace std;

int main()
{
    int k;//test cases
    int n;//the length of message
    char m[110]={};//message
    int q,a;
    int flag;
    cin>>k;
    while(k)
    {
        flag=1;
        q=0;a=0;
        cin>>n;
        int num=n;
        getchar();
        while(n)
        {
            n--;
            m[n]=getchar();
        }
        for(int i=0;i<num;i++)
        {
            if(m[i]=='A'){
                a++;
            }else if(m[i]=='Q')
            {
                q++;
                if(a<q){
                    flag=0;
                    break;
                }
            }
            
        }
        if(flag==0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

        k--;
    }
        
    

    return 0;
}