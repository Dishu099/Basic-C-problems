//print the sum and product of the given array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,product=1;
    cout<<"ENTER THE NUMBER OF ELEMENTS: "<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER DATA:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];

         product=a[i]* product;

    }
    cout<<"SUM IS:"<<sum<<endl;
    cout<<"PRODUCT IS:"<<product<<endl;
}