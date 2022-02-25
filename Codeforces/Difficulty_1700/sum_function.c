#include<stdio.h>
 
int sum_all(int size, int arr[]);

int main(){
    int size, sum;
    printf("Give the size of the array: ");    
    scanf("%d", &size);
    int arr[size];
    printf("Please enter the elements of the array: ");
    for(int i = 0; i < size; i++) scanf("%d",&arr[i]);
    sum = sum_all(size, arr);

    printf("The sum of all elements of the array is: %d", sum);

    return 0;
}

int sum_all(int size, int arr[]){
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}