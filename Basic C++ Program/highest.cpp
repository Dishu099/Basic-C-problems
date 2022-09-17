//print the highest no. out of 3
#include<iostream>
using namespace std;
int main(){
 int a,b,c ;
 cin>>a>>b>>c;
 if(a<b && b<c){
    cout<<c;
 }
 else if(a>b && b>c){
    cout<<a;
 }
 else{
    cout<<b;
 }
 return 0;
}
