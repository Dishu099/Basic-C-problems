//check weather the no. is palindrome no. or not
#include<iostream>
using namespace std;
int main(){
    int a,b,i=0,x;

    cin>>a;
    a=b;
    while(a!=0){
        x=a%10;
        i=x+i*10;
        a=a/10;

    }
    if(b==i){
      cout<<"the no. is palindrome"<<'\n';
    }
    else{
        cout<<"the no. is not palindrome"<<'\n';
    }

}
