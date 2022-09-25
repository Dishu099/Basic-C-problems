//convert octal no. to decimal no.
#include<bits/stdc++.h>
using namespace std;
void convertion(int n){
    int y=0,x,i=0;
    while(n!=0){

        x=n%10;

        y=x*pow(8,i)+y;

         n=n/10;
         i++;
    }
     cout<<"convertion is:"<<y;
}

int main(){
    int n;
    cout<<"Enter the octal no.: ";
    cin>>n;
    convertion(n);
}
