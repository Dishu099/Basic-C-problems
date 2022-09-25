//convert hexadecimal no. to decimal no.
#include<bits/stdc++.h>
using namespace std;
void convertion(string n){
    int y=0,x,a=0;
    int len = n.size();
    for(int i=len-1;i>=0;i--){
        if(n[i]>='0'&&n[i]<='9'){
            y=(int(n[i])-48)*pow(16,a)+y;
            a++;
        }
        else if(n[i]>='A'&&n[i]<='F'){
            y=(int(n[i])-55)*pow(16,a)+y;
            a++;
        }

    }
    cout<<"Convertion is:"<<y;
}

int main(){
    string n;
    cout<<"Enter the hexadecimal no.: ";
    cin>>n;
    convertion(n);
}
