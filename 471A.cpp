#include<bits/stdc++.h>
using namespace std;

int main(){
	int ara[7],ara2[7],i,j,count,key=0,flag=1,max=0;
	bool found=false;
	
	for(i=0;i<6;i++){
		cin>>ara[i];
	}
	
	for(i=0;i<6;i++){
	  if(ara[i]==0){
	    cout<<"Alien"<<endl;
	    return 0;
	  }
	}
	
	for(i=0;i<6;i++){
		count=0;
		for(j=0;j<6;j++){
			if(ara[i]==ara[j]){
				count++;
				if(count==4 || count>4)
				key=ara[i];
			}
		}
		if(count>max)
		max=count;
		
	}
	
	if(max<4){
	  cout<<"Alien"<<endl;
	  return 0;
	}
	
	if(max==1 ){
	  cout<<"Alien"<<endl;
		  return 0;
	}
	
  if(max==6)
{
  cout<<"Elephant"<<endl;
  return 0;
}
  
  
  if(max==5){
    int k=0;
	for(i=0;i<6;i++){
		if(ara[i]!=key){
			ara2[k]=ara[i];
			k++;
		}
		
	}
	if(ara2[0]!=key)
	{
	 cout<<"Bear"<<endl;
		return 0;
	}
	else
	{
	  cout<<"Elephant"<<endl;
	  return 0;
	}
  }
  
  if(max==4){
    int k=0;
	for(i=0;i<6;i++){
		if(ara[i]!=key){
			ara2[k]=ara[i];
			k++;
		}
		
	}
	if(ara2[0]!=ara2[1]){
	  cout<<"Bear"<<endl;
		return 0;
	}
	
  else {
    cout<<"Elephant"<<endl;
    return 0;
  }
  
  }
	
}
