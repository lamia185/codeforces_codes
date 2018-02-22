#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
	
	int n;
	char str[110];
	cin>>n;
	cin.ignore();
	
	for(int i=0;i<n;i++){
		
	gets(str);
	int l=strlen(str);
	
	if(l>10){
		cout<<str[0]<<l-2<<str[l-1]<<endl;
	}
	
	else
	puts(str);
}
}
