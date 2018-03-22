#include<bits/stdc++.h>
using namespace std;

int main(){
 long long int a,b,n,m;
  
  cin>>a>>b;
  
  block1:{
    if(a==0 || b==0){
      cout<<a<<" "<<b<<endl;
      return 0;
    }
    else
    goto block2;
  }
  
  block2:{
    if(a>=(2*b)){
      n=a/(2*b);
      a=(a-(n*(2*b)));
      goto block1;
    }
    
    else{
      goto block3;
    }
  }
  
  block3:{
    if(b>=(2*a)){
      m=b/(2*a);
      b=(b-(m*(2*a)));
      goto block1;
    }
    
    else
    {
      cout<<a<<" "<<b<<endl;
      return 0;
    }
  }
}
