//Exercise 49: Tim chu so dau tien cua n.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int n;
	comeback: cout<<"Nhap n: ";
	cin>>n;
	int a;
	do{
		a= n%10;
		n = n/10;
	}while(n>=1);
	cout<<"Chu so dau tien cua n la: "<<a;
	cout<<"\nPress 'Y' to continue, any letter to stop!\n";
	char conti;
	conti= getch();
	if(conti=='y'||conti=='Y'){
		goto comeback;
	}
	return 0;
}
