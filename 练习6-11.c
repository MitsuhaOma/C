#include<stdio.h>

int search_idx(const int v[], int m[], int key, int n)
{ 
    int s = 0;
    int i;

    for (i = 0; i < n; i++)
	if (v[i] == key )
	   m[s++] = i ;

    return s;
}

int main()
{
    int tensu[10];
    int i;
    int no;
    int idx[10];
    int key;

    printf("元素个数有:");   scanf("%d",&no);

    for (i = 0; i < no; i++){
	printf("tensu[%d]=",i);
	scanf("%d",&tensu[i]);
    }

    printf("key=");
    scanf("%d",&key);

    printf("有%d个相同元素。",search_idx(tensu,idx,key,no));

    printf("{");
 
    for (i = 0; i < search_idx(tensu,idx,key,no); i++)
	printf("%d ", idx[i]+1);
    
    printf("}");

    return 0 ;
}

    

	
   
 

