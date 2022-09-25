//decimal to hexadecimal convertion
#include<bits/stdc++.h>
using namespace std;
void conversion(int num){
    char a[100];
    int i=0,rem=0;
    while(num!=0){
        rem=num%16;
        if(rem>=0 && rem<=9){
            a[i]=rem+48;
            i++;
        }
        else if(rem>=10 && rem<=15){
            a[i]=rem+55;
            i++;
        }
        num=num/16;
    }
    for(int j=i-1;j>=0;j--){
        cout<<a[j];
    }

}

int main(){
    int num;
    cout<<"Enter the decimal no.: ";
    cin>>num;
    conversion(num);
}
