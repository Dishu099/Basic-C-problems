//Stack:
/*Stores a list of items in which an item can be added to or removed from the list only at one end.
    It is based on the LIFO mechanism.
    LIFO: Last in First out.
    Example : Pile of coins
    Operations: Time Complexity O(n).
        -push(x)
        -pop()
        -top()
        -empty()
*/
//
#include <bits/stdc++.h>
using namespace std;
#define n 100
class stack{
    int *arr;
    int top;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }

        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No element in stack"<<endl;
            return -1;
        }

        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
}
