/*
	Exercise 35:
	Caculate this: can(1+can(2+.....+can(n-1+can(n) n dau can
*/
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
float ketqua(int n){
	float sum=0;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=n; i>=1; i--){
			sum = sqrt(i + sum);
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
