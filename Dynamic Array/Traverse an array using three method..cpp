//Traverse an array using three method in vector.
#include<bits/stdc++.h>
using namespace std;
    int main(){
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;//1 2 3
        }

        vector<int>::iterator it;
        for(it=v.begin();it!=v.end();it++){
            cout<<*it<<endl;//1 2 3
        }

        for(auto element:v){
            cout<<element<<endl;//1 2 3
        }



    }
