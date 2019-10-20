#include<stdio.h>



void intary_rcpy (int v1[], const int v2[], int n)
{
     int i;

     for (i = 0; i < n; i++) {
         v1[i] = v2[n-i-1];
     }
}

int main(void)
{
    int tensu1[10];
    int tensu2[10];
    int no;
    int i ;

    printf("请输入一个整数：");      scanf("%d", &no);

    for (i = 0; i < no; i++) {
	printf("tensu2[%d]=", i);       scanf("%d", &tensu2[i]);
    }

    intary_rcpy(tensu1, tensu2, no);

    for (i = 0; i < no; i++){
	printf("tensu1[%d]=%d。\n",i,tensu1[i]);
    }

    return 0;
}
