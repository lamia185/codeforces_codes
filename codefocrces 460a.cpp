#include<stdio.h>

int main()
{
	int a,b,sum,mod,div;
	scanf("%d %d",&a,&b);
	sum=a;
	while(a>=b){
		div=a/b;
		sum=sum+div;
		mod=a%b;
		a=div+mod;
	}
	printf("%d",sum);
}
