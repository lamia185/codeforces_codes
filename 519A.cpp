#include<bits/stdc++.h>
using namespace std;

int main(){
	char str[10][10];
	int white=0,black=0,i,j,k,l,m;
	
	for(i=0;i<8;i++)
	cin>>str[i];
	
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(str[i][j]=='Q')
			white+=9;
			
			else if(str[i][j]=='R')
			white+=5;
			
			else if(str[i][j]=='B')
			white+=3;
			
			else if(str[i][j]=='N')
			white+=3;
			
			else if(str[i][j]=='P')
			white+=1;
			
			else if(str[i][j]=='q')
			black+=9;
			
			else if(str[i][j]=='r')
			black+=5;
			
			else if(str[i][j]=='b')
			black+=3;
			
			else if(str[i][j]=='n')
			black+=3;
			
			else if(str[i][j]=='p')
			black+=1;
			
		}
	}
	
	if(white>black)
	cout<<"White"<<endl;
	
	esle if(black>white)
	cout<<"Black"<<endl;
	
	else
	cout<<"Draw"<<endl;
}
