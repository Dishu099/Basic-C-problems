//0 1 pyramid
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter no.: "<<endl;
    cin>>n;
    for(i=0;i<=n;i++){
        for (j=0;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}
