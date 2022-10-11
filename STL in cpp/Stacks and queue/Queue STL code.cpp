//Queue STL code.cpp
/*THEORY OF QUEUE:
QUEUE: Queue is basically a FIFO Data Structure(First in first out).
        Using Queue we see the element present at the end.
        There are three operations:
    1.)PUSH OPERATION: We can insert the element in the end.
    2.)POP OERATION: We can remove the element from the front.
    3.)FRONT OPERATION:We can see the front element while using this operation.
    */
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("efg");
    while(!q.empty()){
        cout<< q.front()<<endl;
        q.pop();
    }
}
