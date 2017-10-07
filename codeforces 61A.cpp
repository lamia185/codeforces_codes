#include<stdio.h>
#include<string.h>

int main()
{
	char a[101],b[101],c[101];
	int i,l;
	gets(a);
	gets(b);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]=='1' && b[i]=='1'){
			c[i]=0+48;
		}
		else if(a[i]=='0' && b[i]=='0'){
			c[i]=0+48;
		}
		else c[i]=1+48;
	}
	c[i]='\0';
	puts(c);
}
