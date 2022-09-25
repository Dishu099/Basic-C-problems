//find the max and min no. of an array
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,mini=INT_MAX,maxi=INT_MIN;
    cout<<"enter number of elements";
    cin>>n;
   int a[n];
   cout<<"Enter the data: "<<endl;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

  for(int i=0;i<n;i++){

        mini=min(a[i],mini);


        maxi=max(a[i],maxi);

  }
    cout<<"Minimum no. is:"<<mini<<endl;
    cout<<"Maximum no. is:"<<maxi<<endl;
}
