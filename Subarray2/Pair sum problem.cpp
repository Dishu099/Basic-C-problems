//Check if there exists two elements in an array such that their sum is equal to given.
#include<bits/stdc++.h>
using namespace std;
bool pairsum(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};
    int k=31;
    int n;
    cout<<pairsum(arr,n,k)<<endl;
}
