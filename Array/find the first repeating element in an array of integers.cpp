//find the first repeating element in an array of integers.
#include<bits/stdc++.h>
using namespace std;
int fre(int a[],int n){
int min_val=-1;
    set<int> result;
    for(int i=n-1;i>=0;i--){
        if(result.find(a[i])!=result.end()){
        min_val=i;
        }
        else{
        result.insert(a[i]);
        }
    }

    if(min_val!=-1){
    return a[min_val];
    }
    else {
    return 0;
    }
}
int main(){

    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER DATA:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"FIRST REPEATING ELEMENT IS:"<<fre(a,n);

}
