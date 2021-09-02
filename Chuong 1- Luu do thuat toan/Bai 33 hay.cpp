/*
	Exercise 33:
	Caculate this: can(2+can(2+can(2+can(.......) co n dau can
*/

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
float can(int n){
	if(n==1) return sqrt(2);
	return sqrt(2+can(n-1));
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>> n;
	comeback: cout<<"Ket qua la: "<<can(n);
	char conti;
	cout<<"\nPress 'Y' to continue, any letter to stop!\n";
	conti=getch();
	if(conti=='y'||conti=='Y'){
		goto comeback;
	}
	return 0;
}
