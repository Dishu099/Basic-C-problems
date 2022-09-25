//calculate ncr
#include<iostream>
using namespace std;
int factorial(int n){
    int c=1;
    for(int i=1;i<=n;i++){
    c=c*i;

    }
    return c;
}
int main(){
    int n,r,x;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Enter r:"<<endl;
    cin>>r;
    x=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<x;
}
