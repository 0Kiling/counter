#include<stdio.h>
#include<string.h>

char str0[]="3+4";
char str1[]="1+2+2+1+2+5+4-1-3+4-8";
char str2[]="2*2/4*1/1*2*3/2";
char str3[]="2+2*3+2/2-1";

int v0()
{
	int a,b,sum;
	a=str0[0]-'0';
	b=str0[2]-'0';
	sum=a+b;
	return sum;
}

int v1()
{
	int i,sum;
	sum=str1[0]-'0';
	for(i=1;i<strlen(str1);i++)
	{
		if(str1[i]=='+')
		{
			sum=sum+str1[i+1]-'0';
			i++;
		}
		else if(str1[i]=='-')
		{
			sum=sum-str1[i+1]+'0';
			i++;
		}
	}
	return sum;
}

int v2()
{
	int i,sum;
	sum=str2[0]-'0';
	for(i=1;i<strlen(str2);i++)
	{
		if(str2[i]=='*')
		{
			sum=sum*(str2[i+1]-'0');
			i++;
		}
		else if(str2[i]=='/')
		{
			sum=sum/(str2[i+1]-'0');
			i++;
		}
	}
	return sum;
}

int v3()
{
	int sum,i,a,b;
	for(i=0;i<strlen(str3);i++)
	{
		if(str3[i]=='*')
		{
			a=(str3[i-1]-'0')*(str3[i+1]-'0');
			i++;
		}
		else if(str3[i]=='/')
		{				
			b=(str3[i-1]-'0')/(str3[i+1]-'0');
			i++;
		}
	}
	sum=(str3[0]-'0')+a+b-(str3[10]-'0');
	return sum;
}

void main()
{
	printf("%d\n",v0());
	printf("%d\n",v1());
	printf("%d\n",v2());
	printf("%d\n",v3());
}