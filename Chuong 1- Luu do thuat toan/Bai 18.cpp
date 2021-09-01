/*
	Exercise 18:
	Caculate this: 1 + x^2/(2!) + x^4/(4!) + ... + x^2n/((2n)!)
*/
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int giaithua(int n){
	if(n==0||n==1) return 1;
	return n*giaithua(n-1);
}

float ketqua(int x, int n){
	cout<<"Nhap x: ";
	cin>>x;
	quayve: cout<<"Nhap n>0: ";
	cin>>n;
	if(n<0){
		goto quayve;
	}
	float kq=0;
	for(int i=0; i<=n; i++){
		kq += pow(x,2*i)/giaithua(2*i);
	}
	return kq;
}

int main(){
	int x,n ;
	char conti;
	comeback: cout<<"Ket qua la: "<<ketqua(x,n);
	cout<<"\nPress 'Y' to continue, any letter to stop!\n";
	conti=getch();
	if(conti=='Y'||conti=='y'){
		goto comeback;
	}
	return 0;
}
