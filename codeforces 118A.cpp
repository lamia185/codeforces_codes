#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char str[100];
	int i;
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]!='\0'){
			str[i]=tolower(str[i]);
		}
	}
	for(i=0;str[i]!='\0';i++){
		if(!(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='y' ||str[i]=='o' ||str[i]=='u')){
			printf(".%c",str[i]);
		}
	}
	printf("\n");
	
}
