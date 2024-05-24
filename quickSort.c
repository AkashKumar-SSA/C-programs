#include<stdio.h>

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[], int start, int end)
{   
    int x = arr[end];
    int i = start-1;
    for(int j = start ; j < end ; j++)
    {
        if(arr[j] <= x)
        {
            i = i+1;
            swap(arr,i,j);
        }
    }    
    swap(arr,i+1,end);    
    return i+1;
}
 
void quick_sort(int arr[], int start, int end)
{   int q;
    if(start < end)
    {
        q = partition(arr,start,end);
        quick_sort(arr,start,q-1);
        quick_sort(arr,q+1,end);
    }
}

void print_Array(int arr[],int size)
{
    for(int i=0; i<size ;i++)
        printf("%d  ",arr[i]);
}

void main()
{
    int arr[]={45,23,11,55,60,10,4};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size-1;
    printf("The original array is :");
    print_Array(arr,size);
    
    quick_sort(arr,start,end);
    printf("\nThe sorted array is :");
    print_Array(arr,size);
}