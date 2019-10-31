#include <stdio.h>

void adjust_point(int *n) 
{
     if (*n < 0) 
	 *n = 0;
     if (*n > 100)
	 *n = 100;
}

int main()
{
    int no;
    
    printf("请输入一个整数：");
    scanf("%d",&no);

    adjust_point(&no);

    printf("输出结果为%d。",no);
    
    return 0;
}
