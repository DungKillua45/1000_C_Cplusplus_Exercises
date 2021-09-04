/*
	Exercise 37:
	S= ... co n-1 dau can.
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
	for(int i=2; i<=n; i++){
		sum=pow((i+sum),1.0/i);
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
