#include<stdio.h>
#include<conio.h>
#include<math.h>
void hehe(int n){
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	int s1=0;
	float sum=0;
	for(int i=1; i<=n; i++){
		s1 +=i;
		sum += 1.0 / s1;
	}
	printf("Ket qua la: %f", sum);
}

int main(){
	int n;
	comeback: hehe(n); 
	char conti;
	printf("\nPress 'y' to continue, any letter to stop.\n");
	conti = getch();
	if(conti=='y' || conti=='Y') goto comeback;
	return 0;
}
