#include <stdio.h>

//bai1
void dec_to_bin(long long n)
{
	if(n<2)
	{
		printf("%d", n);
	}
	else
	{
		dec_to_bin(n/2);
		printf("%d", n%2);
	}
}

//Bai2
void dec_to_hex(long long n){
   if(n < 16){
      if(n < 10){
         printf("%d", n);
      }
      else{
         printf("%c", (55 + n));
      }
   }
   else{
      dec_to_hex(n / 16);
      int r = n % 16;
      if(r < 10){
         printf("%d", r);
      }
      else{
         printf("%c", (55 + r));
      }
   }
}

int main()
{
	//Bai1
	dec_to_bin(37);
	printf("\n");
	dec_to_bin(2828282828282828);
	printf("\n");
	//Bai2
	dec_to_hex(762);
	printf("\n");
	dec_to_hex(282828282828);
	return 0;
}
