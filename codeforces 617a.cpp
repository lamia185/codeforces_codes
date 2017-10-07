#include<stdio.h>

int main()
{
	int n,r;
	scanf("%d",&n);
	r=n/5;
	if(r*5==n) printf("%d",r);
	else printf("%d",r+1);
}
