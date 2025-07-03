//to count even and odd numbers

#include<stdio.h>

int main(){
    //we enter the number of elemennts here
    int n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);

    int arr[n];
    //here we take all the values of the array
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]); 
    }
    //here we count the even numbers 
    int even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;

        }
    }
    //here we count the odd numbers 
    int odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            odd++;

        }
    }
    //here we print both 
    printf("number of even numbers are %d\n",even);
    printf("number of odd numbers are %d",odd);

}