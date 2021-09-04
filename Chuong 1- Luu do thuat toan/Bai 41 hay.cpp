/*
	Exercise 41:
	S= ... co n dau phan so.
*/

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float ketqua(int n){
	quaylai: cout<<"Nhap n: ";
	cin>>n;
	if(n<1) goto quaylai;
	float sum=0;
	for(int i=0; i<=n; i++){
		sum = 1.0 / (1 + sum);
	}	
	return sum;
}

int main(){
	int n;
	comeback: cout<<"Ket qua la: "<<ketqua(n);
	char conti;
	cout<<"\nPress 'Y' to continue, any letter to stop.\n";
	conti=getch();
	if(conti=='y'||conti=='Y'){
		goto comeback;
	}
	return 0;
}
