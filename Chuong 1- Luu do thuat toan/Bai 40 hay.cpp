/*
	Exercise 40:
	S= ... co n dau can.
*/

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

float ketqua(int n, int x){
	quaylai: cout<<"Nhap n: ";
	cin>>n;
	if(n<1) goto quaylai;
	cout<<"Nhap x: ";
	cin>>x;
	float sum=0;
	for(int i=1; i<=n; i++){
		sum=sqrt(pow(x,i)+sum);
	}	
	return sum;
}

int main(){
	int n,x;
	comeback: cout<<"Ket qua la: "<<ketqua(n,x);
	char conti;
	cout<<"\nPress 'Y' to continue, any letter to stop.\n";
	conti=getch();
	if(conti=='y'||conti=='Y'){
		goto comeback;
	}
	return 0;
}
