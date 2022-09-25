//print the fibonacci series
#include<iostream>
using namespace std;
void fibonacci(int n){

    int a=0;
    int b=1;
    cout<<"0"<<endl<<"1"<<endl;
    for(int i=1;i<=n-2;i++){
            int c=a+b;
            a=b;
            b=c;
            cout<<c<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
}
