//Generate all substrings of a string.cpp
#include<bits/stdc++.h>
using namespace std;
void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
}
    char ch=s[0];
    string ros=s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
}
int main(){
    subseq("ABC","");
    return 0;
}
