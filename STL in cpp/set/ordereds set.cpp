//ordered set.cpp
#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
    //another method.
    for(auto it = s.begin(); it!= s.end();it++){
        cout<<(*it)<<endl;
    }
}
int main(){
    set<string> s;//declaration
    s.insert("abc");//O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    auto it = s.find("abc");//O(log(n))
    //to check weather the element is present or not.
    if(it != s.end()){
        cout<<(*it)<<endl;
        s.erase(it);//same as map.
        }
        s.erase("bcd");//erase directly.
    print(s);
}
