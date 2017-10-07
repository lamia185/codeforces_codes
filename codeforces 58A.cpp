#include<stdio.h>
#include<string.h>

int main()
{
	char ch[101],word[10]="hello";
	int i,l,a=0,count=0;
	gets(ch);
	l=strlen(ch);
	for(i=0;i<l;i++){
		if(ch[i]==word[a]){
			a++;
			count++;
		}
	}
	if(count==5){
		printf("YES\n");
	}
	else printf("NO\n");

}
