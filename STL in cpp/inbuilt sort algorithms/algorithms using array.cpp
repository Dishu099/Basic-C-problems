//algorithms using vector.cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;
    int min=*min_element(v,v+n);
    cout<<min<<endl;
     int max=*max_element(v,v+n);
    cout<<max<<endl;
    int sum=accumulate(v,v+n,0);
    cout<<sum<<endl;
    int ct=count(v,v+n,2);
    cout<<ct<<endl;
    auto it=find(v,v+n,2);
    if(it!=v+n)
        cout<<*it<<endl;
    else
        cout<<"Element not found";
    reverse(v,v+n);
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    string s="abcdefghijkl";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
