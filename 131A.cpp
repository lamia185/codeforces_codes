#include<bits/stdc++.h>
#include<cstring>
#include<ctype.h>
using namespace std;

int main(){
	int count=0,i,flag=0;
	char str[111];
	gets(str);
	
	int l=strlen(str);
	
	if(l==1 && (str[0]>='a' && str[0]<='z')){
	  str[0]=toupper(str[0]);
	  cout<<str[0]<<endl;
	  return 0;
	}
	
	for(i=0;i<l;i++){
		if(str[i]>='A' && str[i]<='Z')
		count++;
		if(count==l)
		  flag=2;
	
		else flag=0;
	}


	
	count=1;
	if(str[0]>='a' && str[0]<='z'){

	for(i=1;i<l;i++){
		 if(str[i]>='A' && str[i]<='Z')
		count++;

		if(count==l)
		flag=1;
		else flag=0;
	}
	}
	
	if(flag==2){
	  for(i=0;str[i]!='\0';i++){
		str[i]=tolower(str[i]);
	}
	puts(str);
	
	}
	
	if(flag==1){
	str[0]=toupper(str[0]);
	for(int i=1;str[i]!='\0';i++){
		str[i]=tolower(str[i]);
	}
	
	puts(str);
	
}
if(flag==0)
puts(str);
	
}
