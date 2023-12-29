#include <stdio.h>

//Bai1
int D(long long n)
{
	if(n<10)
	{
		return 1;
	}
	else
	{
		return 1 + D(n/10);
	}
}

//Bai2
int S(long long n)
{
	if(n<10)
	{
		return n;
	}
	else {
		return n%10 + S(n/10);
	}
}

//Bai3
int K(long long x){
   if(x < 10){
      if(x % 2 == 1) return 0;
      else return x;
   }
   else{
      if(x % 2 == 1) return S(x / 10);
      else return x % 10 + S(x / 10);
   }
}

//Bai4
int F(long long t){
   if(t < 10){
      return t;
   }
   else{
      int tmp = F(t / 10);
      return t % 10 > tmp ? t % 10 : tmp;
   }
}


int main()
{
	//Bai1
	long long n = 28282828;
	printf("%d", D(n));
	printf("\n");
	//Bai2
	printf("%d", S(n));
	printf("\n");
	//Bai3
	long long x = 12345678;
	printf("%d", S(n));
	printf("\n");
	//Bai4
	long long t = 12349567;
    printf("%d", F(n));
	return 0;
}
