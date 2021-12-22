#include<stdio.h>
#include<math.h>
#include<conio.h>
int hehe(int x, int n){
	printf("Nhap so nguyen x: ");
	scanf("%d", &x);
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	int sum=0;
	for(int i=1; i<=n; i++){
		sum += pow(x, 2*i);
	}
	return sum;
}

int main(){
	int x, n;
	comeback: printf("Ket qua la: %d", hehe(x, n));
	char conti;
	printf("\nPress 'y' to conitnue, any letter to stop.\n");
	conti = getch();
	if(conti=='y' || conti=='Y'){
		goto comeback;
	}
	return 0;
}
