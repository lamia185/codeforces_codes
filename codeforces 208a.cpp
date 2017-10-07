#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000],temp[1000];
	int i,l,j=0,flag=0;
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++){
		if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
			if(flag==0 && i!=0){
				temp[j]=' ';
				flag++;
				j++;
			}
			i=i+2;
		}
		else{
			flag=0;
		    temp[j]=str[i];
			j++;
		}
	}
	temp[j]='\0';
	puts(temp);
	return 0;
}
