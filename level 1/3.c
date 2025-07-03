//find the smallest element in ana array 

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);     
    }

    int min=arr[0];  //we assume the first element is the smallest
    for(int i=0;i<n;i++){
        if(arr[i]<min){     //if a number smaller than the first is found 
            min=arr[i];     //gets replaced
        }
    }

    printf("The smallest number in your array is:%d",min);
}