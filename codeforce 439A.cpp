#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d,i,ara[110],song=0,count1=0,a=0,c;
	cin>>n>>d;
	for(i=0;i<n;i++){
		cin>>ara[i];
		song++;
	}
	if((n*10)>d){
		cout<<"-1"<<endl;
		return 0;
	}
	else{
		for(i=0;i<n;i++){
			d=d-ara[i];
			if(d>=10){
				d=d-10;
				count1+=2;
       }
			else if(d>=5 && c<10 ){
			d=d-5;;
				count1+=1;
			}
		
		}
	}
	cout<<count1<<endl;
	return 0;
	
}
