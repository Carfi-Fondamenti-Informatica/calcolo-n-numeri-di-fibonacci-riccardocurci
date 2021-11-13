#include <iostream>
using namespace std;

int main() {
   int n=0;
   cin>>n;
   
   if(n<2){
      cout<<"errore"<< endl;
      }else{
      cout<<"1"<<endl;
      int x1=0,x2=1,x3=0;
      
      for(int i=0;i>=(n-2);i++){
       x3=x1+x2;
       x1=x2;
       x2=x3;
       cout<<"c"<<endl;
       }
}       
   return 0;
}
