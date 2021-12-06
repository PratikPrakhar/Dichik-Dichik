#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node* next;  
};

struct Node* head=NULL;

void insert(){
    int value;
        printf("Enter the element to insert: ");
        scanf("%d", &value);
    if(head==NULL){
        struct Node* n1 =(struct Node*)malloc(sizeof(struct Node) );
        n1->data=value;
        n1->next=NULL;
        head=n1;
    }

    else{
        struct Node* n2=(struct Node*)malloc(sizeof(struct Node) );
        n2->data=value;
        n2->next=NULL;

        struct Node* temp=(struct Node*)malloc(sizeof(struct Node) );
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n2;
        
    }
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

void search(){
        int v;
        printf("Enter the element to search: ");
        scanf("%d", &v);
        int i=1;
        struct Node* temp=(struct Node*)malloc(sizeof(struct Node) );
        temp=head;
        while(temp){
            if(temp->data==v){printf("Element found at position: %d ",i);return;}
            temp=temp->next;
            i++;
        }
        if(!temp)printf("Element not found !!");
}



int main(){
    int c;
    while(c!=4){
        printf("\nEnter your choice: \n1.Insert an element \t2.search an element\t3.Display List\t4.Exit\n");
        scanf("%d",&c);
    switch(c){
        case 1: insert();
        break;
        case 2: search();
        break;
        case 3: disp();
        break;
        case 4:break;
    }
    }
}