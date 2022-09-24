//floyd's traingle
#include<iostream>
using namespace std;
int main(){
    int i,j,n,a=1;
    cout<<"enter no.: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}
