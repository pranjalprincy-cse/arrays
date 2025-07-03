//reverse all the elements of an array 

#include<stdio.h>

int main(){
    //here we enter number of elements 
    int n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);

    int arr[n];
    //here we enter elements of the array 
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);     
    }

    for (int i=0;i<n/2;i++){
        int temp=arr[i]; 
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    /*in the loop above, we have to keep swapping the numbers until we reach the middle
     so for the limitn of i we put n/2
     then in the first iteration the first number gets swapped with the last
     temp=arr[0]
     arr[0]=arr[4]
     arr[4]=temp
     and the loop runs until i is less than n/2 
     this is how the numbers gets reversed*/


    printf("Elements of the reversed array are:");   
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); 
    }
}