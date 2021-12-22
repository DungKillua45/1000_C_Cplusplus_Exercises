#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	float kq = 0;
	for (int i=1; i<=n; i++){
		kq += i*1.0/(i+1);
	}
	printf("Ket qua la: %f", kq);
	return 0;
}
