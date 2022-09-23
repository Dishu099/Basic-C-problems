//Rhombus pattern
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter no.: "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        for (j=0;j<n-i;j++){
            cout<<" ";
        }
        for (j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
