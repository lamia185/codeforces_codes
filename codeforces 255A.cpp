#include<bits/stdc++.h>
using namespace std;

int main(){
	int chest=0,biceps=0,back=0,i,n;
	cin>>n;
	int ara[n];
	for(i=0;i<n;i++){
		cin>>ara[i];
	}
	
	for(i=0;i<n;i++){
		if(i%3==0)
			chest+=ara[i];
		else if(i%3==1)
		 	biceps+=ara[i];
		else back+=ara[i];
	}
	
	if(chest>back && chest>biceps)
	cout<<"chest"<<endl;
	
	else if(biceps>back && biceps>chest)
	cout<<"biceps"<<endl;
	
	else
	cout<<"back"<<endl;
	
	
}
