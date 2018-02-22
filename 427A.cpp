#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i,j,k,l,crime=0,police=0,ara[100001];
  cin>>n;
  
  for(i=0;i<n;i++)
  cin>>ara[i];
  
  for(i=0;i<n;i++){
    if(ara[i]==-1 && police==0)
    crime++;
    
    else if(ara[i]>0)
    police+=ara[i];
    
    else if(ara[i]==-1 && police!=0){
      police+=ara[i];
    }
      
    }
    
    cout<<crime<<endl;
  }

