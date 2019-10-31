#include <stdio.h>

void swap(int *na, int *nb)
{
     int tmp;
      tmp = *na;
      *na = *nb;
      *nb = tmp;
}

void sort3(int *n1, int *n2, int *n3)
{    
     int i;
     for (i = 1; i <= 2; i++){
         if (*n1 > *n2)
	    swap(n1, n2);
         if (*n2 > *n3)
	    swap(n2, n3);
     }
  
}

int main() 
{
    int a, b, c;

    puts("请输入三个整数。");

    printf("整数a:");   scanf("%d",&a);
    printf("整数b:");   scanf("%d",&b);
    printf("整数c:");   scanf("%d",&c);

    sort3(&a, &b, &c);

    printf("三个整数升序排列为{%d,%d,%d}", a, b, c);
    
    return 0;
}


