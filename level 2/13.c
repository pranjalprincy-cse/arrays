//to delete an object from a given index 

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");//here we take the number of elements 
    scanf("%d",&n);
    
    int arr[n];

    printf("Enter the elements of the array:\n");//here we take the elements
    for(int i=0;i<n;i++){
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter the index:");//here we take the index
    scanf("%d",&x);

    for(int i=x;i<n;i++){
        arr[i]=arr[i+1];//we shift all elements from x to the left
    }
    n--;//we decrease the size of the array
    printf("the array after removal:");
    for (int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}