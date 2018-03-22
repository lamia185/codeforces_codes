#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int i=0,j,count=0,mx=0,n,bsize;
  string a,b,c;
  
  cin>>n;
  cin>>a;
  
  while(i<n){
    if(a[i]!='('){
      while(a[i]!='_' && a[i]!='(' && a[i]!='\0'){
        b+=a[i];
        i++;
      }
      
      if(a[i]=='_')
      i++;
      bsize=b.size();
      mx=max(bsize,mx);
      b="";
      
    }
    else{
      i++;
      while(a[i]!=')'){
        if(a[i]!='_') 
        {
          c+=a[i];
        }
        else if(c.length()){
         count++;
         c="";
        }
        i++;
      }
      i++;
      
      if(c.size()){
        count++;
        c="";
      }
      
    }
  }
  
  cout<<mx<<" "<<count<<endl;
}


