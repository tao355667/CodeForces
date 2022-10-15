/*
一个数能否被分为两个偶数？
先将这个数-2，再看剩下的是不是偶数
细节：这个数是1，2都不行
*/
#include<iostream>
using namespace std;

int main()
{
	int w;
	cin>>w;
	w -= 2;
	if(w<=0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	if(w%2==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	return 0;
}
