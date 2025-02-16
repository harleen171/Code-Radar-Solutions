#include<stdio.h>
int main()
{
    int grade
    scanf("%d",&grade);

    if(grade >= 90){
        printf("A");
    }else if(90 < grade <= 80){
        printf("B");
    }else if(80 < grade <=70){
        printf("C");
    }else if(70 < grade <=60){
        printf("D");
    }else{
        printf("F");
    }
    return 0;
}