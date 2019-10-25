#include<stdio.h>

int main(void)
{
    int tensu1[4][4] = {0};
    int tensu2[4][4] = {0};
    int sum[4][4];
    int i, j;
    int s = 0;
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("tensu1[%d][%d]=", i, j);
	    scanf("%d",&tensu1[i][j]);
        }
    }

    puts("该4×3矩阵为：");

    for (i = 0; i < 4; i++){
	for (j = 0; j < 3; j++)
	    printf("%4d",tensu1[i][j]);
	putchar('\n');
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("tensu2[%d][%d]=", i, j);
	    scanf("%d",&tensu2[i][j]);
        }
    }

    puts("该3×4矩阵为：");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) 
            printf("%4d",tensu2[i][j]) ;
        printf("\n") ;
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++)
            sum[i][j] = tensu1[j][s] * tensu2[s][j] ;
	s++;
    }
    
    puts("两矩阵乘积为:") ;

    for (i = 0; i < 3; i++){
        for (j = 0;j < 4; j++)
            printf("%4d",sum[i][j]) ;
	putchar('\n');
    }

    return 0 ;
}

