#include<stdio.h>

void print_Array(int arr[],int size)
{
    for(int i=0; i<size;i++)
    {
        printf("%d  ",arr[i]);
    }

}

void swap(int arr[],int index1,int index2)
{
    int i= index1;
    int j= index2;
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void insertion_sort(int arr[],int size)
{
    int i,j;
    for(j=1;j<size;j++)
    {
        int key=arr[j];
        i=j-1;
        
        while(i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }
}
void insertion_sort2(int arr[],int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[i])
            {
                // int temp=arr[j];
                // arr[j]=arr[i];
                // arr[i]=temp;
                swap(arr,j,i);
            }
        }
    }
}

void main()
{
    int arr[]={45,23,11,55,60,10,4};
    int arr2[]={2,10,9,7,5};
    int size=sizeof(arr)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    printf("The original array is :");
    print_Array(arr,size);
    // for(int i=0; i<size;i++)
    // {
    //     printf("%d  ",arr[i]);
    // }
    // first sorting technique
    insertion_sort(arr,size);
    printf("\nThe sorted array is :");
    print_Array(arr,size);
    

    // second sorting technique
    insertion_sort2(arr2,size2);
    printf("\nThe sorted array2 is :");
    print_Array(arr2,size2);

}