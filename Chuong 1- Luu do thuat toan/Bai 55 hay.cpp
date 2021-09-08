// Exercise 55: Hay dem so chu so giong chu so dau tien cua n
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int dem=0;
	int sodautien=n%10;
	do{ 
		int a;
		if(a==sodautien) dem ++;
		a=n%10;
	}while(n/=10);
	int count = dem -1;
	cout<<"So chu so giong chu so dau tien cua n la: "<<count;
	return 0;
}
