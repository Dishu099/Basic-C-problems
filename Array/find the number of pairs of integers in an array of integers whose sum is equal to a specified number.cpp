// find the number of pairs of integers in an array of integers whose sum is equal to a specified number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER DATA:"<<endl;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int  sum=10 ,x=0;
    cout<<"\nPAIR OF AN ARRAY WHOES SUM IS EQUAL TO 10:"<<endl;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                cout<<endl<<a[i]<<","<<a[j];
                x++;
            }
        }

    }
    cout<<"\nNUMBER OF PAIRS WHOSE SUM IS EQUAL TO 10:"<<endl;
    cout<<x;
}
