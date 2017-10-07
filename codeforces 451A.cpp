#include<stdio.h>

int main()
{
	int a,b,min=0;
	scanf("%d %d",&a,&b);
	if(a<b) min=a;
	else min=b;
	if(min%2==0) printf("Malvika\n");
	else printf("Akshat\n");
}
