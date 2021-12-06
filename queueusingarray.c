#include <stdio.h>
#include <stdlib.h>

int arr[100];
int front=-1;
int last=-1;

void push(int value){
    if(last>=100){
        printf("\nQueue Overflow\n");
        return;
    }
    if(front==-1){
        arr[last+1]=value;
        front++;
        last++;
        return;
    }

    arr[last+1]=value;
    last++;
}

void pop(){
    if(front==-1 || front==last+1){
        printf("\nThere are no elements in the Queue.\n");
        return;
    }
    front++;
}

void peek(){
    if(front==-1 || last==-1 || front==last+1){
        printf("\nThe Queue is underflow.\n");
        return;
    }
    printf("\nThe front element in the Queue is %d\n",arr[front]);
}

void display(){
    if(front==-1 || last==-1 || front==last+1){
        printf("\nThe Queue is underflow.\n");
        return;
    }
    int temp=last;
    printf("\nThe elements in Queue are:\n");
    for (int i = front; i <=temp; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

int main(){
    

    return 0;
}