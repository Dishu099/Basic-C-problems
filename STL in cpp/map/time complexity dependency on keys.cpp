//time complexity dependency on keys.cpp
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
    map<string,string> m;
    m["abcd"]=abcd;//s.size()*log(n)
    auto it = m.find(7);
    if(it!=m.end())
        m.erase(it);
    print(m);
}
