//multiset.cpp
#include<bits/stdc++.h>
using namespace std;
void print(multiset<string>&s){
    for(string value : s){
        cout<<value<<endl;
    }
}
int main(){
    multiset<string> s;
    s.insert("abc");//O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    auto it = s.find("abc");//O(log(n))
    if(it != s.end()){
        s.erase(it);//O(log(n))    }
    s.erase("bcd");
    print(s);
}
