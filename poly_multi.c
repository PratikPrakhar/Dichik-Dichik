#include <stdio.h>
#include <stdlib.h> 

struct node {
    float coeff;
    int expo;
    struct node* next;
};

struct node* insert(struct node* head, float co, int ex) 
{
   
    struct node* newP = malloc(sizeof(struct node));
    newP->coeff = co; 
    newP->expo = ex; 
    newP->next = NULL;

    if(head == NULL ) 
    {
        head = newP; 
    }
    else 
    {    struct node* temp; 
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        } 
            

        temp->next=newP;
    }
    return head; 
}

struct node* create(struct node* head)
{ 
    int n, i; 
    float coeff; 
    int expo; 

    printf("Enter the number of terms: "); 
    scanf("%d", &n);

    for(i=1; i<=n; i++) 
    {
        printf("Enter the coefficient for term %d: ", i);
        scanf("%f", &coeff); 

        printf("Enter the exponent for term %d: ", i); 
        scanf("%d", &expo); 

        head = insert(head, coeff, expo);
    }
    return head; 
}

void print(struct node* head)
{ 
    if(head == NULL) 
        printf("No Polynomial."); 
    else {
        struct node* temp = head; 
        while(temp != NULL)
        {
            printf("(%.1fx^%d)", temp->coeff, temp->expo); 
            temp = temp->next; 
            if(temp!=NULL) 
                printf(" + "); 
            else printf("\n");
        }
    }
}

void polyMult(struct node* head1, struct node* head2) 
{
    struct node* ptr1 = head1; 
    struct node* ptr2 = head2; 
    struct node* head3 = NULL; 

    //Check if first or second polynomial is NULL
    if(head1 == NULL || head2 == NULL) 
    {
        printf("Zero polynomial\n"); 
        return;
    } 
    
    //Multiplication of two polynomials
    while(ptr1 != NULL)
    {
        while(ptr2 != NULL)
        {
            head3 = insert(head3, ptr1->coeff * ptr2->coeff, ptr1->expo + ptr2->expo); 
            ptr2 = ptr2->next; 
        }
        ptr1 = ptr1->next; 
        ptr2 = head2; 
    } 
    printf("\n Resultant: \n");
    print(head3); 
}

int main()
{ 
    struct node* head1 = NULL; 
    struct node* head2 = NULL;
    printf("Enter the first polynomial\n "); 
    head1 = create(head1); 
    printf("\nEnter the second polynomial\n "); 
    head2 = create(head2);

    polyMult(head1, head2); 
    return 0;
}