#include<stdio.h>
#include<stdbool.h>

int main(){
    int size1;
    printf("Give the size of 1st set/array: ");
    scanf("%d", &size1);
    int A[size1];
    printf("Please give all of it's elements: \n");
    for (int i = 0; i < size1; i++) scanf("%d", &A[i]);

    int size2;
    printf("Give the size of 2nd set/array: ");
    scanf("%d", &size2);
    int B[size2];
    printf("Please give all of it's elements: \n");
    for (int i = 0; i < size2; i++) scanf("%d", &B[i]);
    
    printf("AUB = ");
    
    for (int i = 0; i < size1; i++)
    {
        bool existence= false;
        for (int j = 0; j < size2; j++)
            if (A[i]==B[j]) existence=true;
        if (!existence) printf("%d ", A[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        bool existence=false;
        for (int j = i+1; j < size2; j++)
            if (B[i]==B[j])
                existence=true;
        if (!existence)
            printf("%d ", B[i]);   
    }
    
    printf("\nA-B =");
    for (int i = 0; i < size1; i++)
    {
        bool existence= false;
        for (int j = 0; j < size2; j++)
            if (A[i]==B[j]) existence=true;
        if (!existence) printf("%d ", A[i]);
    }
    
    printf("\nA^B = ");
    for (int i = 0; i < size1; i++)
    {
        bool existence= false;
        for (int j = 0; j < size2; j++)
            if (A[i]==B[j]) existence=true; 
        if (existence) printf("%d ", A[i]);        
    }
    return 0;
}