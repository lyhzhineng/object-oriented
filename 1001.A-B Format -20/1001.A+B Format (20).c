#include<stdio.h>
int main()
{
	int i,k=0,u=0,t=0;
	long int a,b,s,h;
	char x[10]={'\0'};
	scanf("%ld%ld",&a,&b);
	s=a+b;
	if(s<0)
	{
		u=1;
		s=-s;
	}
	for(i=1;i<=7;i++)
	{
		x[k++]=s%10+'0';
		t++;
		s=s/10;
		if(s==0)
			break;
		if(t%3==0)
			x[k++]=',';
	}
	if(u==1)
		x[k++]='-';
	k--;
	for(i=0;i<k;i++,k--)
	{
		h=x[i];
		x[i]=x[k];
		x[k]=h;
	}
	printf("%s\n",x);
	return 0;
}
