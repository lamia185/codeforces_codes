#include<stdio.h>
#include<string.h>

int main()
{
	char a[110],b[110];
	gets(a);
	gets(b);
	strrev(b);
	if(strcmp(a,b)==0)
	printf("YES\n");
	else printf("NO\n");
}
