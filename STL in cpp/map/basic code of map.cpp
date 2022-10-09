//basic code of map.cpp
//maps store the value in sorted order.
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    map<int,string> :: iterator it;
    for(it = m.begin(); it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<endl;
    //use of auto keyword in map code.
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
