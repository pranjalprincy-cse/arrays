//left rotate array by one position 

#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of elements in the array: ");//here we take the number of elements 
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        printf("Element %d : ",i+1);//here we get the elements of the array
        scanf("%d",&arr[i]);
    }
    
    int first=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }

    arr[n-1]=first;

    printf("Array after rotation:");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}