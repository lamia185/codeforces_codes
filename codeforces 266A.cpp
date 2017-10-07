#include<stdio.h>
#include<string.h>

int main()
{
	char color[55];
	int n,i,l,c=0;
	scanf("%d",&n);
	getchar();
	gets(color);
	l=strlen(color);
	for(i=0;i<l;i++){
		if(color[i]==color[i+1]){
			c++;
		}
	}
	printf("%d",c);
}
