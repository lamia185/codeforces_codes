#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,A=0,D=0;
	
	char str[100001];
	
	cin>>n;
	cin.getline();
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='A')
		A++;
		else
		D++;
	}
	
	if(A>D)
	cout<<"Anton"<<endl;
	
	else if(D>A)
	cout<<"Danik"<<endl;
	
	else cout<<"Friendship"<<endl;
	
	
}
