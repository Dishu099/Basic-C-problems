//increasing and decreasing.cpp
#include<bits/stdc++.h>
using namespace std;
void dec(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}
