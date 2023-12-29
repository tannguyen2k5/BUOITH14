#include <stdio.h>

//Bai1
int F(int n)
{
	if(n==0 || n==1)
	{
		return n;
	} else 
	{
		return F(n-1) + F(n-2);
	}
}

//Bai2
int C(int n, int k){
   if(n == k || k == 0){
      return 1;
   }
   else{
      return C(n - 1, k - 1) + C(n - 1, k);
   }
}


int main()
{
	//Bai1
	printf("%d", F(12));
	//Bai2	
	printf("\n%d", C(12, 2));
    return 0;
}


