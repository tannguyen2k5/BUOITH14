#include <stdio.h>


//Bài 1. Tính tong các so chan trong mang 
int even_sum(int a[], int n)
{
	if(n==0)
	 {
	 	return 0;
	 }
	 else 
	 {
	 	if(a[n-1]%2==0)
	 	{
	 		return a[n-1] + even_sum(a, n-1);
	 	}
	 	else 
	 		{
	 			return even_sum(a, n-1);
	 		}
	 }
}


//Bai 2. Kiem tra mang doi xung
int doixung(int b[], int left, int right)
{
	if(left>right)
	{
		return 1;
	}
	else {
		if (b[left]!=b[right])
		{
			return 0;
		}
		else {
			return doixung(b, left + 1, right - 1);
		}
	}
}

//Bài 3. In ra mang tu trái qua phai
void left_to_right(int c[], int m){
   if(m > 0){
      left_to_right(c, m - 1);
      printf("%d ", c[m - 1]);
   }
}

//Bài 4. In ra mang tu phai qua trái
void right_to_left(int d[], int v){
   if(v > 0){
      printf("%d ", d[v - 1]);
      left_to_right(d, v - 1);
   }
}
int main()
{
	//Bai1
	int n = 6;
	int a[6] = {1, 2, 3, 4, 5, 6};
	printf("%d\n", even_sum(a, n));
	printf("\n");
	//Bai2
	int b[6] = {1, 2, 3, 3, 2, 1};
	printf("%d\n", doixung(a, 0, n-1));
	printf("\n");
	//Bai3
	int m = 6;
   int c[6] = {1, 2, 3, 4, 5, 6};
   left_to_right(a, 6);
	printf("\n");
	//Bai4
	int v = 6;
    int d[6] = {1, 2, 3, 4, 5, 6};
   	left_to_right(d, 6);
	return 0;
	
}
