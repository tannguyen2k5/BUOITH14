#include <stdio.h>

//Bai1
int S(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n + S(n-1);
	}
}

//Bai2
int X(int a){
   if(a == 1){
      return 1;
   }
   else{
      return a * a + X(a - 1);
   }
}


//Bai3
double B(int b){
   if(b == 1){
      return 1;
   }
   else{
      return (double)1 / b + B(b - 1);
   }
}


int main()
{
	//Bai1
	int n = 10;
	printf("%d", S(n));
	printf("\n");
	//Bai2
	int a = 10;
    printf("%d", X(a));
    printf("\n");
    //Bai3
     int b = 10;
    printf("%.2lf", B(b));
	return 0;
}
