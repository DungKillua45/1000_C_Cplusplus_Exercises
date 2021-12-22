#include<stdio.h>
#include<conio.h>
#include<math.h>
int hehe(int n){
	printf("Nhap so nguyen n la: ");
	scanf("%d",&n);
	int sum = 0;
	int s = 1;
	for(int i=1; i<=n; i++){
		s *= i;
		sum += s;
	}
	return sum;
}
int main(){
	int n;
	comeback: printf("Ket qua la: %d", hehe(n));
	char conti;
	printf("\nPress 'y' to continue, any letter to stop\n");
	conti = getch();
	if(conti=='y' || conti=='Y') goto comeback;
	return 0;
}
