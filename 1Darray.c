#include <stdio.h>  
#include<stdlib.h>
int main()
{
    int a[100];
    int element,i,loc,size,n,j,choice;
    printf("C Program to Insert and Delete an Element in an Array using switch case\n");
    printf("1. Inserting an Element in an Array\n");
    printf("2. Deleting an Element in an Array\n");
    printf("3. sorting an Element in an Array\n");
    printf("4. Reverse an Element in an Array\n");
    printf("5. Searching an Element in an Array\n");
    printf("6. Display an Element in an Array\n");
    printf("7. All program\n");
    printf("Select your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++)
        {
           scanf("%d",&a[i]);
        }
        printf("List before Insertion: ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]); 
        }
        printf("\nEnter an element to insert\n");
        scanf("%d",&element);
        printf("Enter a position to insert an element %d\n",element);
        scanf("%d",&loc);
        loc--;
        for(i=size-1;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=element;
        printf("List after Insertion: ");
        for(i=0;i<size+1;i++)
        {
          printf("%d ",a[i]);
        }
         break;
    case 2:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List before deletion\n");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to delete\n");
        scanf("%d",&n);
        for(i=0;i<size;i++)
        {
            if(a[i]==n)
            {
                for(j=i;j<(size-1);j++)
                {
                    a[j]=a[j+1];
                }
                break;
            }
        }
        printf("List after deletion\n");
        for(i=0;i<(size-1);i++)
        {
            printf("%d ",a[i]);
        }
        break;
        case 3: 
        int arr[100], n, i, j;
    int temp;

    printf("Enter total number of elements: ");
    scanf("%d", &n);

    //read array elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    //sort array
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nArray elements after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    break;
        case 4:
int n, arr[100], i;  
    printf("Enter the size of the array: ");  
    scanf("%d", &n);  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    int rev[n], j = 0;  
    for(i = n-1; i >= 0; i--)  
    {  
        rev[j] = arr[i];  
        j++;  
    }  
    printf("The Reversed array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", rev[i]);  
    }  
    break; 
       /* case 5:
        case 6:*/
    default:
        printf("Wrong choice, Please try again later");
    }
    return 0;
}