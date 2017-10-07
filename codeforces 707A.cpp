#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j;
	char ara[1000][1000];
	bool color=false;
	cin>>n>>m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>ara[i][j];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		    if(ara[i][j]=='C'||ara[i][j]=='M'|| ara[i][j]=='Y' ){
	    	color=true;
			break;	
			}
			
			else color=false;
		}
	   if(color==true) break;
	}
	if(color) cout<<"#Color"<<endl;
	else cout<<"#Black&White"<<endl;
}
