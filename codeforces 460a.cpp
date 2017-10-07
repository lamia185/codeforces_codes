#include<stdio.h>

int main()
{
	int i,n,m;
	scanf("%d %d",&n ,&m);
	if(n%2==0 && m%2==0)
	printf("%d",(n+m)-1);
	else printf("%d",(n+m)+1);
	
}
