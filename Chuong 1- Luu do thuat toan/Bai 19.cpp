/*
	Exercise 19:
	Caculate this: 1 + x + x^3/(3!) + x^5/(5!) + ... + x^(2n+1)/((2n+1)!)
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int giaithua(int n){
	if(n==0||n==1) return 1;
	return n * giaithua(n-1);
}
void ketqua(int x, int n){
	printf("Nhap x: ");
	scanf("%d",&x);
	printf("Nhap n: ");
	scanf("%d",&n);
	float kq=0;
	for(int i=0; i<=n; i++){
		kq += pow(x,(2*i)+1)/giaithua((2*i)+1);
	}
	printf("Ket qua la: %f",kq);
}
int main(){
	int x,n;
	comeback: ketqua(x,n);
	printf("\nDo u want to continue?\n");
	char conti;
	conti= getch();
	if(conti=='Y'||conti=='y'){
		goto comeback;
	}
	return 0;
}
