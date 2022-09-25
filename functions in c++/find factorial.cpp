//find the factorial of a given no.
#include<iostream>
using namespace std;

int factorial(int a){
    int c=1;
    for(int i=1;i<=a;i++){
    c=c*i;

    }
    return c;
}
int main(){
    int a;
    cout<<"Enter no.: ";
    cin>>a;
    cout<<"factorial is:"<<factorial(a);
}
