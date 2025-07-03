//copy elements of one array to another 

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array:");//here we take the number of elements 
    scanf("%d",&n);
    
    int arr[n], arrcopy[n];
    
    printf("Enter the elements of the array:\n");
    
    for(int i=0;i<n;i++){
        printf("enter element %d: ",i+1);//here we take the elements 
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        arrcopy[i]=arr[i];//here we copy
    }
    printf("elements of the new array are: ");
    for(int i=0;i<n;i++){
        printf("%d ",arrcopy[i]);//here we print the elements of copy array
    }

}
