#include <iostream>
using namespace std;

int main(){
    int n=0,a=1,b=1,c=0;
    cin>>n;
    if(n<2){
    cout<<"errore"<< endl;
    }else{
            cout<<"1"<<endl;
    }for(int i=0;i<=n;i++){
            cout<<"c"<<endl;
            a=b;
            b=c;
            c=a+b;
        }
    return 0;
  }
