#include<stdio.h>

void swap(int arr[],int index1,int index2){
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] =temp;
}

void selectionSort1(int arr[],int size){
    for(int i = 0 ; i < size-1 ; i++){
        for(int j = i+1 ; j < size; j++){
            if(arr[j] < arr[i]){
                swap(arr,i,j);
            }
        }
    }      
}

void selectionSort2(int arr[],int size){
    int j=1;
    while(j < size){
        for(int i = 0 ; i < size-1 ; i++){
            while( arr[j] < arr[i]){
                swap(arr,i,j);
            }
        }
        j++;
    }
}

void print_array(int arr[],int size){
    for(int i=0;i < size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main(){
    int count;
    printf("Enter the number of elements you want to enter:");
    scanf("%d",&count);
    int arr[count];
    int arr2[count];

    for(int i=0 ; i < count ; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
        arr2[i]=arr[i];
    }

    //int size = sizeof(arr)/sizeof(int);
    int size = count;
    
    // printf("The original array is:");
    // print_array(arr,size);
    // printf("The sorted array is:");
    // selectionSort1(arr,size);
    // print_array(arr,size);

    // operation on  array 2 
    printf("\nThe original array 2 is:");
    print_array(arr2,size);
    printf("The sorted array 2 is:");
    selectionSort2(arr2,size);
    print_array(arr2,size);
}