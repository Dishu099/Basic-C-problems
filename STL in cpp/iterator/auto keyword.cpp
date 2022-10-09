//auto keyword.cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //iterator code.
    vector<int>::iterator it = v.begin();
    for(it = v.begin(); it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    //vector and pair code.
    vector<pair<int,int>> v_p={{1,2},{2,3}};
    for(pair<int,int> &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
    //use of auto keyword.
    auto a=1;
    cout<<a<<endl;
    //1) in iterator code.
    for(auto it = v.begin(); it!=v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    //2) vector and pair code.

    for(auto &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
}
