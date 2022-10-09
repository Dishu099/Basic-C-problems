//basics of unordered map.cpp
/*difference between unordered and ordered maps:
    1. inbuilt implementation.
    2. Time complexity.
    3. valid key datatypes.
*/
/*  1. unordered map uses hash table where as map use trees for inbuilt implementation.
    2. time complexity in unordered map is O(1) in insertion and exertion.
    3. we cannot use pair as a key in the unordered maps as pair is not define by the hash table.
*/
#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,string>&m){
    cout<<m.size()<<endl;
    for(auto&pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    unordered_map<int,string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m[6]="acd";
    m[5]="cde";
    print(m);
}
//rest of the functions which is find ,erase ,clear etc are same as the map.
