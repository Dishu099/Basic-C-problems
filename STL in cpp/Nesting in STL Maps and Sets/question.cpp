//question.cpp
/*
Monk is a multi-talented person, and prepares results for his college in his free time. (Yes,he is still in love
with his old college!) He gets a list of students with their marks. The maximum marks which can be obtained in
the exam is 100.

The Monk is supposed to arrange the list in such a manner that the list is sorted in decreasing order of marks.
And if two students have the same marks, they should be arranged in lexicographical manner.

Help Monk prepare the same!

CONSTRAINTS:
1<N<= 10^5
1<=|Length of the name|<=100
1<=Marks<=100

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, set<string>>marks_map;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[marks].insert(name);
    }
    auto cur_it=--marks_map.end();
    while(true){
        auto &students = (*cur_it).second;
        int marks = (*cur_it).first;
        for(auto student:students){
            cout<<student<<" "<<marks<<endl;
        }
        if(cur_it==marks_map.begin())
            break;
        cur_it--;
    }
}
