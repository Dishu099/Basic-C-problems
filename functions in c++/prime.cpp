//check whether the entered no. is prime or not
#include<iostream>
using namespace std;
int prime(int i ,int a){
    if (a<=1)
        cout<<"Not a prime";
    for(i=2;i<a;i++)
        if(a%i==0)
            cout<<"Not a prime";
    cout<<"is prime"<<endl;
}
int main(){
    int a,i;
cout<<"Enter no.:";
cin>>a;
cout<<prime(i,a);



return 0;
}
