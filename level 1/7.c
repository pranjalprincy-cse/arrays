//search for an element 

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);

    int arr[n];

    int num;
    printf("Enter the element you want to find:");
    scanf("%d",&num);

    printf("Enter the elements of the array:\n");
    
    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);

    
    }
    int find=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            printf("it is at position %d",i+1);
            find=1;
        }
    }
    if(!find){
        printf("the element is not there");
    }




}