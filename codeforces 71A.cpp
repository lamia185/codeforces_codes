#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int x,i,l;
	scanf("%d",&x);
	getchar();
	for(i=0;i<x;i++){
		gets(str);
		l=strlen(str);
		if(l>10){
			printf("%c%d%c\n",str[0],l-2,str[l-1]);
		}
		else puts(str);
	}
}
