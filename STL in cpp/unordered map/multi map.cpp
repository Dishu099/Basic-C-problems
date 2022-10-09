//multi maps.cpp
#include<bits/stdc++.h>
using namespace std;
void print(multimap<pair<int,int>,string>&m){
    cout<<m.size()<<endl;
    for(auto&pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    multimap<pair<int,int>,string>m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m[6]="acd";
    m[5]="cde";
    print(m);
}
