#include<iostream>
#include<string>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		//接收到的单词后开始处理
		if(s.length()>10)
			cout<<s[0]<<s.length()-2<<s[s.length()-1]<<'\n';
		else
			cout<<s<<'\n';
	}
	return 0;
}
