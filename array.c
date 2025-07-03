//simple to program to input and print elements of an array 

#include<stdio.h>
int main (){
    int n;                                  //here we take the number of elements 
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){                   //this for loop takes input
        printf("Enter element %d :",i+1);
        scanf("%d",&arr[i]);
    }


    printf("Elements of the array are:");   //this for loop prints the output 
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); 
    }
}
