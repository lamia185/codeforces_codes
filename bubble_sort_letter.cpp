#include<stdio.h>

int main()
{
    char str[100],temp;
    int i,j,l;
    gets(str);
    for(i=0;str[i]!='\0';i++,l++);
    for(i=0;i<l-1;i++){
        for(j=0;j<l-1;j++){
            if(str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    puts(str);
}

