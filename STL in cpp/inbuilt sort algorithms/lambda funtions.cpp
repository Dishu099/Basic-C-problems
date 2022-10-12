//lambda functions.cpp
//all_of
//none_of
//any_of
#include<bits/stdc++.h>
using namespace std;
/*bool is_positive(int x){
    return x>0;
}
*/
int main(){
  /* auto sum=[](int x,int y){return x+y;};

   cout<<sum(2,3);*/
   //all_of
    vector<int> v={2,-3,-5};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});
    cout <<endl;

    //any_of
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;});
    cout<<endl;

    //none_of
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;});
    cout<<endl;
}
