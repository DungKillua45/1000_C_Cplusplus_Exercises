#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int n;
	float kq;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	for( int i=0; i<=n; i++){
		kq += 1.0 * (2*i+1)/ (2*i+2);
	}
	printf("Ket qua la: %f", kq);
	return 0;
}
