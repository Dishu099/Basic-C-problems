//add two no.
#include<iostream>
using namespace std;
int sum(int a, int b){

    int sum=a+b;
    return sum;
}
int main(){

        int a,b;
        cout<<"Enter first no.:";
        cin>>a;
        cout<<"enter second no.: ";
        cin>>b;

        cout<<"Sum is: "<<sum(a,b);
}
