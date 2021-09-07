// Exercise 44: Tinh tong cac chu so cua n
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int sum=0;
	while(n>=1){
		int a = n%10;
		n = n / 10;
		sum += a;
	}
	printf("Tong cac chu so cua n la: %d",sum);
	return 0;
}
