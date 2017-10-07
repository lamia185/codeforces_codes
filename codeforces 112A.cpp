#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char str1[110],str2[110],a[110],b[110];
	int i;
	gets(str1);
	gets(str2);
	int l=strlen(str1);
	for(i=0;i<=l;i++)
	{
	a[i]=tolower(str1[i]);
	b[i]=tolower(str2[i]);
}

int x=strcmp(a,b);
printf("%d\n",x);

}
