#include<stdio.h>
#include<string.h>

int main()
{
	char a[110];
	int i,l,flag=0;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]=='H' || a[i]=='Q' || a[i]=='9'){
			flag++;
			break;
		}
	}
	if(flag!=0) printf("Yes\n");
	else printf("No\n");
}
