#include<stdio.h>
#include<string.h>

int main()
{
	char num[10000];
	int i,l,n,count=0;
	gets(num);
	l=strlen(num);
	for(i=0;i<l;i++){
		if(num[i]=='4' ||num[i]=='7'){
			count++;
		}
	}
	if(count==4 || count==7) printf("YES\n");
	else printf("NO\n");
}
