//queue
/*queue: stores a list of items in which an item can be inserted at one end and removed from the other end only.
         FIFO: First In First Out.
         Operations:
            1. enqueue(x)
            2. dequeue()
            3. peek()
            4. empty()
*/
#include <bits/stdc++.h>
#include<queue>
using namespace std;
#define n 20
class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr= new int [n];
        front=-1;
        back=-1;
    }
    void push (int x){
        if(back==n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1||front>back){
            cout<<"No element in queue"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1||front>back){
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1||front>back){
            cout<<"No element in queue"<<endl;
            return true;
        }
        return false;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;

}
