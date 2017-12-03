#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
	char str[110];
	int i,l,j,count1=0,count2=0,count3=0;
	cin>>str;
	l=strlen(str);
	bool state=false;
	
	
	for(j=0;str[j]!='\0';j++){
		if(str[j]>='A'&& str[j]<='Z') {
			count1++;
		}
	}
	if(count1==l){
	for(i=0;i<l;i++){
		str[i]=tolower(str[i]);
	}
	cout<<str<<endl;
	return 0;
	}
	
	for(j=0;j<l-1;j++){
		if((str[0]>='a' && str[0]<='z') && (str[j+1]>='A' && str[j+1]<='Z' )){
			count2=1;
		}
		else{
			count2=0;
			break;

		}
		
	}
	if(count2==1){
		state=true;
	}
	if(l==1 && (str[0]>='a' && str[0]<='z')){
		str[0]=toupper(str[0]);
		cout<<str<<endl;
		return 0;
	}
	if(count3==1){
		state=true;
	}
	if(state){
		
	for(i=0;i<l;i++){
		str[i]=tolower(str[i]);
	}
	str[0]=toupper(str[0]);
	cout<<str<<endl;
}
else
cout<<str<<endl;

}
