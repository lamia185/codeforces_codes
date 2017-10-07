#include<stdio.h>

int main()
{
char b[100],c[100];
int i,j;
gets(b);
j=0;
for(i=0;b[i]!=’\0’;i++){
if(b[i]==’1' || b[i]==’2' || b[i]==’3'){
c[j]=b[i];
j++;
}
}
c[j]=’\0’;
int d=j-1;
int k,l;
char temp;
for(k=0;k<j-1;k++){
    for(l=0;l<j-1-k;l++){
        if(c[l]>c[l+1]){
         temp=c[l+1];
          c[l+1]=c[l];
          c[l]=temp;
        }
    }
}
    for(j=0;j<=d;j++){
      if(j>0)
    printf("+");
    printf("%c",c[j]);
}
     return 0;
}
