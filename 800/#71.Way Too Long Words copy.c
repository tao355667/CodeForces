#include<stdio.h>

int main()
{
	
	int n;
	scanf("%d",&n);//接收n的值
	getchar();//接收一个换行
	for(int i=0;i<n;i++)
	{
		char str[105]={0};
		char c;
		int local=0;
		//接收到的单词后开始处理
		while ((c=getchar())!=EOF && c!='\n')
		{
			str[local++]=c;
		}
		//此时local是字符串长度
		if(local>10)
		{
			printf("%c%d%c\n",str[0],local-2,str[local-1]);
		}
		else
		{
			printf("%s\n",str);
		}
	}
	return 0;
}
