//insert element at a given

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");//here we take the number of elements
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter the elements of the array:\n");

    for(int i=0;i<n;i++){
        printf("enter element %d: ",i+1);//here we take the elements
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter the index at which the element should be added:");//here we enter the required index
    scanf("%d",&x);

    int y;
    printf("Enter the element that should be added:");//here we enter the element we want to add
    scanf("%d",&y);

    for(int i=n;i>x;i--){
        arr[i]=arr[i-1];//here we shift the elements to the right starting from the end

    }
    arr[x]=y;//insert the element at the given index
    n++;//increase the size of the array
    printf("array after the element is added:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}