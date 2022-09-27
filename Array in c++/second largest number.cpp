//find the second largest no. of array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,large,second;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER THE DATA:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    large=a[0];
    for(int i=0;i<n;i++){
        if(large<a[i]){
            large=a[i];
        }
    }
    second=a[0];
    for(int i=0;i<n;i++){
        if(second<a[i]){
           if( a[i]!=large)
            second=a[i];
        }
    }
    cout<<"SECOND LARGEST NUMBER IS:"<<second<<endl;
}
