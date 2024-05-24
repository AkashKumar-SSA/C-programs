#include<stdio.h>

void selection_sort(int arr[],int size)
{
    int i,j,small;
    for(j=0;j < size-1;j++)
    {
        small=j;
        for(i=j+1;i<size;i++)
        {
            if(arr[i]<arr[small])
            {
                small=i;
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

// void selection_sort2(int arr[],int size)
// {   int n=size;
//     int i,j;
//     for(i=0;i<n-1;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }

void main()
{
    int arr[]={45,23,11,55,60,10,4};
   // int arr2[5]={2,10,9,7,5};
    int size=sizeof(arr)/sizeof(int);
    printf("The original array is :");
    for(int i=0; i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    

    printf("\nThe sorted array is: ");
    selection_sort(arr,size);
    for(int i=0; i<size;i++)
    {
        printf("%d  ",arr[i]);
    }


    // printf("\nThe sorted array2 is: ");
    // selection_sort(arr2,size);
    // for(int i=0; i<size;i++)
    // {
    //     printf("%d  ",arr2[i]);
    // }


}