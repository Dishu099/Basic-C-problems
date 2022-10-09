//range based loops.cpp
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
    //range based loops.
    for(int value : v){
        cout<<value<<" ";
    }
    cout<<endl;
    //refrences.
    for(int &value : v){
        value++;
    }

    for(int value : v){
        cout<<value<<" ";
    }
    cout<<endl;
    //using vector and pair.
    vector<pair<int,int>> v_p={{1,2},{2,3}};
    for(pair<int,int> &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;

    }
    cout<<endl;
}
