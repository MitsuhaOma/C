#include<stdio.h>
#define number 80
int main(void)
{
    int i, j;
    int num;
    int tensu[number];
    int bunpu[11]={0};
    int max;

    printf("请输入学生人数:");

    do{
        scanf("%d",&num);
	if  (num<1||num>number)
            printf("\a请输入1～%d的数:",number);
    } while (num<1||num>number);

    printf("请输入%d人的分数。\n",num);
    
    for (i = 0; i < num; i++) {
	printf("%2d号:", i+1);
	do {
	    scanf("%d", &tensu[i]);
	    if (tensu[i] < 0 || tensu[i] > 100)
	        printf("\a 请输入1~100的数:");
	} while (tensu[i] <0 || tensu[i] > 100);
	bunpu[tensu[i] / 10]++;
    }

    puts("\n---分布图---");
    max = bunpu[0];

    for (i=1;i<10;i++) {
        if (max < bunpu[i])
	    max = bunpu[i];
    };

    for (i=1;i<=max;i++) {
	printf("    ");
	for (j=0;j<10;j++){
	    if (bunpu[j] >= (max-i+1)) 
                printf("   *");
            else
	        printf("    ");	
	};	
	putchar('\n');
    };
    
    for (i=0;i<44;i++)
	putchar('-');

    putchar('\n');

    for (i=0;i<=10;i++)
	printf("%4d",i*10);

    return 0 ;
}

