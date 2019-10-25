#include<stdio.h>

int judge(int n)
{
    int i;
    int tmp = 0;
    
    for (i = 1; i <= n; i++ ) {
        if ((n % i) == 0)
	   tmp++ ;
    }
 
    return tmp;
}

int main()
{
   int i;
   int a[100] = {0};
   int j = 0 ;
   
   for (i = 1; i <= 100; i++) 
       if (judge(i) <= 2)
	   a[j++] = i ;

   for (i = 0; i < j; i++) {
       if (a[i] != 0) 
	   printf("%4d",a[i]);
       if (((i + 1) % 5) == 0) 
	   putchar('\n');
   }

   return 0;
}



