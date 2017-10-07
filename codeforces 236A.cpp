#include<stdio.h>
#include<string.h>

int main()
{
	char name[110];
	int i,l,j,k,flag=0,count=0;
	gets(name);
	l=strlen(name);
	for(i=0;i<l;i++){
		flag=0;
        for(j=i+1;j<l;j++){
         if(name[i]==name[j]){
       			flag++;
         }
    }
    if(flag==0) count++;
	}
	if(count%2==0) printf("CHAT WITH HER!\n");
	else printf("IGNORE HIM!\n");
}
