#include <stdio.h>
#define MAX 5

int queue[MAX];
int front=-1;
int rear=-1;

void enqueue(int x) {
    if(rear==MAX-1){
        printf("Queue Overflow\n");
    }
    else {
        if(front==-1)
        front=0;
        rear++;
        queue[rear]=x;
        printf("%d enqueued\n",x);
    }
}
void dequeue() {
    if (front==-1|| front>rear){
        printf("Queue Overflow\n");
    }
    else {
        printf("%d dequeued\n",queue[front]);
        front++;
    }
}
void peak() {
  if (front==-1|| front>rear){
        printf("Queue Overflow\n");
    }
    else {
        printf("%d front element\n",queue[front]);
    }
}

void display() {
    if(front==-1||front>rear) {
        printf("Queue is Empty\n");
    }
    else {
        printf("Queue elements:");
        for (int i=front;i<=rear;i++){
            printf("%d",queue[i]);
        }
         printf("\n");
    }
}
int main() {
   enqueue(5);
  enqueue(15);
  enqueue(50);
  enqueue(25);
  dequeue(15);
  peak(2);
  
  return 0;
}
