#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	char str[110];
	int ara[110],i,j,k,l,count=0;
	gets(str);
	for(i=0,j=0;str[i]!='\0';i++){
		if(str[i]!='+'){
			ara[j]=(str[i])-48;
			j++;
		}
	}
	k=j;
	sort(ara,ara+k);
	for(l=0;l<k;l++){
		count++;
		if(count<j)
		printf("%d+",ara[l]);
		else 
		printf("%d",ara[l]);
	}
	
}
