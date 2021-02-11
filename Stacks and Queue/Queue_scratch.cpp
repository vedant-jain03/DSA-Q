#include <bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int front ,rear,size;
    unsigned capacity;
    int* arr;
};
Queue* create(unsigned capacity)
{
    Queue* q=new Queue();
    q->capacity=capacity;
    q->front=q->size=0;
    q->rear=capacity-1;
    q->arr=new int[(q->capacity * sizeof(int))];
    return q;
}
// bool isfull(Queue* q){
//     if(q->size==q->capacity)return true;
// }
void enqueue(Queue* q,int data)
{
    // if(isfull(q)){cout<<"Overflow\n";return;}
    q->rear=(q->rear+1)%q->capacity;
    q->arr[q->rear]=data;
    q->size++;
    cout<<"Pushed into the queue "<<data<<"\n";
}
int dequeue(Queue* q)
{
    if(q->size==0){return 0;}
    int item=q->arr[q->front];
    q->front=q->front+1;
    q->size--;
    return item;
}
int front(Queue* q)
{
    return q->arr[q->front];
}
int rear(Queue* q)
{
    return q->arr[q->rear];
}
int main()
{
    Queue* q=create(100);
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    cout<<dequeue(q)<<"\n";
    cout<<front(q)<<"\n";
    cout<<rear(q)<<"\n";
}