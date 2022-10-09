//find and erase.cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="abc";// O(log(n))
    m[5]="cdc";
    m[3]="acd";
    m[6]="a";
    m[5]="cde";
    //use of find
    auto it=m.find(3);//O(log(n))
    if(it == m.end()){
        cout<<"NO value";
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
