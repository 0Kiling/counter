#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[30],ch[38],chr[30];
	double num[30],sum;
	int i,j=0,k=0,l,x,m,n,e=0,b=0; 
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='+'||str[i]!='-'||str[i]!='*'||str[i]!='/')
		{
			ch[j]=str[i];
			j++;
		}
		if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
		{
			j=0;
			l=k;
			chr[k++]=str[i];
			num[l]=atof(ch);
		}
		x=strlen(str)-1;
		if(x==i)
		num[++l]=atof(ch);
	}
   for(i=0;i<k;i++){
        if(chr[i]=='*')
		{
            for(m=i;m<k;m++)
				chr[m]=chr[m+1];	
            num[i]=num[i]*num[i+1];
            for(n=i+1;n<l;n++)
				num[n]=num[n+1];
			i=-1;
        }
        if(chr[i]=='/')
		{
            for(m=i;m<k;m++)
				chr[m]=chr[m+1];
            num[i]=num[i]/num[i+1];
            for(n=i+1;n<l;n++)
				num[n]=num[n+1];
			i=-1;
        }
    } 
    for(i=0,sum=num[0];i<k;i++)
	{
        if(chr[i]=='+')
        sum=sum+num[i+1];
        if(chr[i]=='-')
        sum=sum-num[i+1];
    }
	printf("%lf",sum);
	return 0;
}
