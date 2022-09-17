//reverse of the digit
#include<iostream>
using namespace std;
int main(){
    int a,i,x;
    cin>>a;
    while(a!=0){
        x=a%10;
        i=x+i*10;
        a=a/10;

    }
    cout<<i;
    return 0;
}

