#include <stdio.h>

// linear search
int main(){
    int y, i;
    printf("Enter the size of the array: ");
    scanf("%d",&y);
    
    int array[y];
    int n = sizeof(array)/sizeof(0);
    
    for(i=0;i<n;i++){
        printf("Enter array: ");
        scanf("%d",&array[i]);    
    }
    
    int flag;
    
    int x;
    printf("Enter the element to search: ");
    scanf("%d",&x);
    
    for(i = 0;i < n;i++){
        if(x== array[i]){ 
            flag = 1;
            break;
        }else{
            flag = 0;
        }
    }
    if(flag==1){
        printf("Element %d found at position %d \n",x,i+1);
    }else{
        printf("Element not found! Please try again. \n");
    }
    
    
    return 0;
}