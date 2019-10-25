#include<stdio.h>

int change(int a, int b)
{ 
    while (a != b){
	  if (a > b)
             a = a - b;
	  else 
             b = b - a;
    }
 
    return a;
}

int main()
{
    int a, b;

    printf("整数a：");         scanf("%d", &a);
    printf("整数b：");         scanf("%d", &b);

    printf("两者的最大公因子为%d。",change(a, b));

    return 0 ;
}
