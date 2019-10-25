#include<stdio.h>

 int count_bits ( unsigned x )
{
     int bits = 0 ;

     while (x) {
           if (x & 1U) 
	       bits++;
           x >>= 1;
     }

     return bits ;
}

 int int_bits ()
{     
     return count_bits(~0U);
}

 void printf_bits (unsigned x )
{    
     int i;
     
     for (i = int_bits() - 1; i >= 0; i--) {
	 putchar(((x >> i) & 1U) ? '1' : '0');
     }
}

int mv_bits(unsigned x, int n)
{
    if (n >= 0)  
        x = x * (2 ^ n);
    else 
        x = x / (2 ^ (-n));
    
    return x;
}
   

 int main(void)
{
     unsigned x;
     int n;
     
     printf("请输入一个整数:");
     scanf("%u",x);

     if (n >= 0)
	if (count_bits(x) != count_bits(x << n))
	   puts("发生高位溢出");;

     printf("该整数移动后值为%u。", mv_bits(x, n));

     return 0;
}
        
       
	

	 
