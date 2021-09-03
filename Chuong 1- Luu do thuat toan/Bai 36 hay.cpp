/*
	Exercise 36:
	Caculate this: can( n! +can((n-1)!+....can(2!+can(1!) co n dau can
*/
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int giaithua(int n){
	if(n==1||n==0) return 1;
	return n*giaithua(n-1);
}

float ketqua(int n){
	float sum=0;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=1; i<=n; i++){
			sum = sqrt(giaithua(i) + sum);
	}
	return sum;	
}

int main(){
	int n;
	comeback: cout<<"Ket qua la: "<<ketqua(n);
	cout<<"\nPress 'Y' to continue, any letter to stop.\n";
	char conti;
	conti=getch();
	if(conti=='y'||conti=='Y'){
		goto comeback;
	}
	return 0;
}
