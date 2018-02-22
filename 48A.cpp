#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
  char str1[20],str2[20],str3[20];
  int a,b,c,i,j,l;
  cin>>str1>>str2>>str3;
  
  
   if(str1[0]=='s' && str2[0]=='p' && str3[0]=='p'){
    cout<<"F"<<endl;
    return 0;
  }
  
  else if(str1[0]=='r' && str2[0]=='s' && str3[0]=='s'){
    cout<<"F"<<endl;
    return 0;
  }
  
  else if(str1[0]=='p' && str2[0]=='r' && str3[0]=='r'){
    cout<<"F"<<endl;
    return 0;
  }
  
  
  else if(str1[0]=='r' && str2[0]=='p' && str3[0]=='r'){
    cout<<"M"<<endl;
    return 0;
  }
  
  
  else if(str1[0]=='s' && str2[0]=='r' && str3[0]=='s'){
    cout<<"M"<<endl;
    return 0;
  }
  
  
  else if(str1[0]=='p' && str2[0]=='s' && str3[0]=='p'){
    cout<<"M"<<endl;
    return 0;
  }
  
  else if(str1[0]=='s' && str2[0]=='s' && str3[0]=='r'){
    cout<<"S"<<endl;
    return 0;
  }
  
  else if(str1[0]=='p' && str2[0]=='p' && str3[0]=='s'){
    cout<<"S"<<endl;
    return 0;
  }
  
  else if(str1[0]=='r' && str2[0]=='r' && str3[0]=='p'){
    cout<<"S"<<endl;
    return 0;
  }
  
  
  
  else {
    cout<<"?"<<endl;
    return 0;
  }
  
}
