#include <stdio.h>

int main(){
    int flag = 0;
    int low, high, mid, x, p;
    
    int y;
    printf("Enter the size of the array:");
    scanf("%d",&y);
    
    int arr[y];

    int n = sizeof(arr) / sizeof(arr[0]);
    
    //Input array
    for(int i=0;i<n;i++){
        printf("Enter array: ");
        scanf("%d",&arr[i]);
    }
    
    // Selection Sort
    for (int i = 0; i < n -1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    //binary search 
    low = 0;
    high = n-1;
    
    printf("Enter the element to search: ");
    scanf("%d",&x);
    
    while(1<2){
        mid = (low + high)/2;
        
        if(x == arr[mid]){
            flag++;
            p = mid + 1;
            break;
        }if(x == arr[low]){
            flag++;
            p = low + 1;
            break;
        }if(x == arr[high]){
            flag++;
            p = high + 1;
            break;
        }if(x < arr[mid]){
            high = mid - 1;
        }if(x > arr[mid]){
            low = mid + 1;
        }
    }
    if(flag == 1){
        printf("Element %d found at position %d",x,p);
    }else{
        printf("Element %d does not exist in the list! please try again.",x);
    }
    
    return 0;
}