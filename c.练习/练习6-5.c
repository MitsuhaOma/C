#include<stdio.h>

int sumup (int n)
{
    int sum = 0 ;

    while(n > 0){
	  sum += n ;
	  n-- ;
    }

    return sum ;
}

int main(void)
{
    int no;

    printf("整数no：");
    scanf("%d",&no);

    printf("整数1到n的总和:%d 。\n",sumup(no));

    return 0;
}
