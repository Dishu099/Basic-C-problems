//check whether the input no. is present in the array or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER THE DATA:"<<endl;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"ENTER THE ELEMENT:"<<endl;
    cin>>x;
        for (int i=0;i<n;i++){
        if(a[i]==x){
            cout<<"THE NUMBER IS PRESENT..."<<endl;
            return 0;
        }

    }
    cout<<"THE NUMBER IS NOT PRESENT..."<<endl;



}
