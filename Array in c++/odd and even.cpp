//print the no. of evens and odds out of 10 elements in an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10,odd=0,even=0,x;
    int a[n];
    cout<<"ENTER THE DATA:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }

    }
    cout<<"even no."<<even<<endl;
    cout<<"odd no."<<odd<<endl;
    }


