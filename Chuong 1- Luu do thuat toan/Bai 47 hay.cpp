//Exercise 47: Tinh tong cac chu so chan cua n.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int n;
	comeback: cout<<"Nhap n: ";
	cin>>n;
	int sum=0;
	do{
		int a= n%10;
		if(a%2==0) sum += a;
		n = n/10;
	}while(n>=1);
	cout<<"Tong cac chu so chan cua n la: "<<sum;
	cout<<"\nPress 'Y' to continue, any letter to stop!\n";
	char conti;
	conti= getch();
	if(conti=='y'||conti=='Y'){
		goto comeback;
	}
	return 0;
}
