//decimal to binary convertion
#include<bits/stdc++.h>
using namespace std;
void convertion(int num){
    int a[100],i=0;
    while(num!=0){
        a[i]=num%2;
        num=num/2;
        i++;
    }

    for(int j = i-1;j>=0;j--){
        cout<<a[j];
    }

}
int main(){
    int num;
    cout<<"Enter the Decimal no.:";
    cin>>num;
    convertion(num);
}
