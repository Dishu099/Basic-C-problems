//algorithms using vector.cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<endl;
    int min=*min_element(v.begin(),v.end());
    cout<<min<<endl;
     int max=*max_element(v.begin(),v.end());
    cout<<max<<endl;
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int ct=count(v.begin(),v.end(),2);
    cout<<ct<<endl;
    auto it=find(v.begin(),v.end(),2);
    if(it!=v.end())
        cout<<*it<<endl;
    else
        cout<<"Element not found";
    reverse(v.begin(),v.end());
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    string s="abcdefghijkl";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
