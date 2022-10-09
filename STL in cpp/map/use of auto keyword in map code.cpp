//use of auto keyword in map code.cpp
#include<bits/stdc++.h>
using namespace std;
//using function.
void print(map<int,string> &m){
    cout<< m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }//TC of loop: O(nlog(n))
}
int main(){
    map<int,string> m;
    m[1]="abc";//O(log (n))
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    m[5]="cde";//replace the value with the existing m[5] value.
    print(m);
}
