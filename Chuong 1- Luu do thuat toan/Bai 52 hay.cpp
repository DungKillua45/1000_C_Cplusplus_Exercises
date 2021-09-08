// Exercise 52: Tim chu so nho nhat cua n.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int n;
	comeback: cout<<"Nhap n: ";
	cin>>n;
	int min= n%10;
	do{
		int a= n%10;
		if(a<min) min=a;
		n = n/10;
	}while(n>=1);
	cout<<"Chu so nho nhat cua n la: "<<min;
	char conti;
	cout<<"\nPress 'Y' to continue, any letter to stop.\n";
	conti=getch();
	if(conti=='Y'||conti=='y') goto comeback;
	return 0;
}
