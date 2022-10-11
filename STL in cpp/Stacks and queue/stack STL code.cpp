//stack STL code.cpp
/*THEORY OF STACK:
STACK:  Stack is basically a LIFO (last in first out).
        Using stacks we access only the top element.
        We can also access the size of the element.
        There are three operations:
    1.)PUSH OPERATION: We can insert the element from the top.
    2.)POP OPERATION: We can remove the element from the top.
    3.)TOP OPERATION: In this operation we can see the top element of the stack.
    */
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
