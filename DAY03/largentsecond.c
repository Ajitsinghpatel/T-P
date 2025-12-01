#include<stdio.h>

int main(){

    int n;
    printf("Enter thhe size of arr :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of arr :\n");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max1=-9999;
    int max2=-9999;
    for(int i=0; i<n; i++){
    if(arr[i] > max1){
        max2 = max1;
        max1 = arr[i];
    }
    else if(arr[i] > max2 && arr[i] != max1){
        max2 = arr[i];
    }
}

    printf("secont largest number is :%d",max2);
}