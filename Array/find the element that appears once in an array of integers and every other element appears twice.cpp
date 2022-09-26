// find the element that appears once in an array of integers and every other element appears twice.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER DATA:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=a[0];
    for(int i=1;i<n;i++){
        result = result^a[i];


    }
cout<<"\nsingle element:"<<result;
}
