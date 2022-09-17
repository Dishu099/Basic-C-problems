//check weather the entered no. is prime or not
#include<iostream>
using namespace std;
int main(){
int a , i;
cin>>a;
for(i=2;i<a;i++){
        if(a%i==0){
    cout<<"no. is not a prime";
    break;
        }
}
   if(a==i){
cout<<"no. is prime";
    }


return 0;
}
