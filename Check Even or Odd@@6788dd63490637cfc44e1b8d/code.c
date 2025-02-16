#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if (num%2 == 0){
        prntf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}