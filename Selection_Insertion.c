#include <math.h>
#include <stdio.h>
 

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
        swap(&arr[min_idx], &arr[i]);
    }
}
 

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
    while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{   int n,choice=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
         scanf("%d", &arr[i]);
    printf("----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("\nChose one from the below options...\n");  
        printf("1.Insertion Sort\t2.Selection Sort\t3.Display the array\t4.Exit");  
        printf("\nEnter your choice : ");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                insertionSort(arr, n);
                break;  
            }  
            case 2:  
            {  
                selectionSort(arr, n); 
                break;  
            }  
            case 3:  
            {  
                printArray(arr, n);
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
    
 
    return 0;
}