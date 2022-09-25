//pythagorion triangle
#include<iostream>
using namespace std;
void pythagorian(int a,int b,int c){
    int maxi;
    maxi=max(a,max(b,c));
    if(maxi==a){
        int x=a*a;
        int y=(b*b)+(c*c);
        if(x==y){
        cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
    else if(maxi == b){
        int n=b*b;
        int m=(a*a)+(c*c);
        if(n==m){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
    else{
        int o=c*c;
        int p=(a*a)+(b*b);
        if(o==p){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }



}

int main(){
    int a,b,c,maxi;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    pythagorian(a,b,c);

}
