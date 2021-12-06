#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void push(int value){
    struct Node* n=(struct Node*)malloc(sizeof(struct Node*));
    if(head==NULL){
        head=n;
        n->data=value;
        n->next=NULL;
        return;
    }

    n->next=head;
    n->data=value;
    head=n;
}

void pop(){
    struct Node* temp=head;
    if(head==NULL){
        printf("\nStack is empty.\n");
        return;
    }

    head=head->next;
    free(temp);
}

void peek(){
    if (head==NULL)
    {
        printf("\nStack is empty.\n");
        return;
    }

    printf("The top element is: %d\n",head->data);
    
}

void display(){
    struct Node* temp=head;
    if(head==NULL){
        printf("\nStack is empty.\n");
        return;
    }
    printf("\nElements of stack are:\n");
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    display();
    printf("\n");

    pop();
    peek();
    printf("\n");
    display();


    return 0;
}