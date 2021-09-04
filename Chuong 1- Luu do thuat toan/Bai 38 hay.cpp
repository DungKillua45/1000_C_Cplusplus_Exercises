/*
	Exercise 38:
	S= ... co n dau can.
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
	for(int i=1; i<=n; i++){
		sum=pow((i+sum),1.0/(i+1));
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
