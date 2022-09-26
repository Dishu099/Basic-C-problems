// find the missing element from two arrays of integers except one element.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n1;
    int a1[n1];
    cout<<"ENTER DATA1:"<<endl;
    for (int i=0;i<n1;i++){
        cin>>a1[i];
    }

    int n2;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n2;
    int a2[n2];
    cout<<"ENTER DATA2:"<<endl;
    for (int i=0;i<n2;i++){
        cin>>a2[i];
    }
    if(n1!=n2-1&&n2!=n1-1){
        cout<<"INVALID INPUT";
        return 0;
    }
    int result=0;
    for(int i=0;i<n1;i++){
        result=result^a1[i];
    }
    for(int i=0;i<n2;i++){
        result=result^a2[i];
    }
    cout<<"MISSING NUMBER:"<<result;
}
