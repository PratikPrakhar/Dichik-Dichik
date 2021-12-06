#include <stdio.h>
#include <stdlib.h>

int arr[100];
int top=-1;

void push(int value){
    if(top>=100){
        printf("\nStack Overflow\n");
        return;
    }
    arr[top+1]=value;
    top++;
}

void pop(){
    if(top==-1){
        printf("\nThere are no elements in the Stack.\n");
    }
    top--;
}

void peek(){
    if(top==-1){
        printf("\nThe Stack is underflow.\n");
        return;
    }
    printf("The top element in the Stack is %d\n",arr[top]);
}

void display(){
    if(top==-1){
        printf("\nThe Stack is underflow.\n");
        return;
    }
    int temp=top;
    printf("\nThe elements in stack are:\n");
    for (int i = temp; i >=0; i--)
    {
        printf("%d\n",arr[i]);
    }
    
}

int main(){
    

    return 0;
}