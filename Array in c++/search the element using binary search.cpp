//search the element using binary search
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,mid;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER THE DATA:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"ENTER THE VALUE:"<<endl;
    cin>>k;
    int s=0,e=n-1;
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]==k){
            cout<<mid;
            return 0;
        }
        if(a[mid]<k){
            s=mid+1;

        }
        if(a[mid]>k){
            e=mid-1;

        }
    }
    cout<<"-1";
}
