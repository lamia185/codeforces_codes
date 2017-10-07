#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char a[105];
	int i,l,count=0;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]==tolower(a[i])){
			count++;
		}
	}
	if(count==0){
		for(i=0;i<l;i++){
			a[i]=tolower(a[i]);
		}
		puts(a);
	}
	else if(count==1 && a[0]==tolower(a[0])){
		a[0]=toupper(a[0]);
		for(i=1;i<l;i++){
			a[i]=tolower(a[i]);
		}
		puts(a);
	}
	else puts(a);
	
}
