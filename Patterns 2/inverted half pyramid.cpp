//inverted half pyramid
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the no.:  "<<endl;
    cin>>n;
    for(i=n;i>0;i--){
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
