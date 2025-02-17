#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d",&i);
    scanf("%d",&n);
    printf("%d %d\n",i,n);
    for(int num=i; num<=n; num++){
        printf("%d", num);
    }
    return 0;
}