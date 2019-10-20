#include<stdio.h>

int min3 ( int a, int b, int c ) 
{
    int min;
    min = a;
    if (min > b)
       min = b;
    if (min > c) 
       min = c;
    return min;
}

int main()
{
    int n1, n2, n3;
    
    printf("整数n1:");    scanf("%d",&n1);
    printf("整数n2:");    scanf("%d",&n2);
    printf("整数n3:");    scanf("%d",&n3);
    
    printf("三个整数中的最小值为：%d。\n", min3(n1, n2, n3));
    
    return 0 ;
}




 
