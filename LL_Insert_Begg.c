#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node* next;  
};

struct Node* head=NULL;


void insert_beg(){

    int value;
        printf("Enter the element to insert: ");
        scanf("%d", &value);


        struct Node* n1 =(struct Node*)malloc(sizeof(struct Node) );
        n1->data=value;
        n1->next=head;
        head=n1;
}


void disp(){
    struct Node* t=(struct Node*)malloc(sizeof(struct Node) );
    t=head;
    while(t->next!=NULL){
        printf("%d-->",t->data);
        t=t->next;
    }
    printf("%d\n\n",t->data);
    
}


int main(){
    int c;
    while(c!=3){
        printf("\nEnter your choice: \n1.Insert an beggining \t2.Display List(Traversal)\t3.Exit\n");
        scanf("%d",&c);
    switch(c){
        case 1: insert_beg();
        break;
        case 2: disp();
        break;
        case 3:break;
    }
    }
}