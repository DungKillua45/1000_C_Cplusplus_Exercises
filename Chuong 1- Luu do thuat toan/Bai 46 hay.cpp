//Exercise 46: Dem so chu so le cua n.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int n;
	comeback: cout<<"Nhap n: ";
	cin>>n;
	int count=0;
	do{
		int a= n%10;
		if(a%2==1) count++;
		n = n/10;
	}while(n>=1);
	cout<<"So chu so le cua n la: "<<count;
	cout<<"\nPress 'Y' to continue, any letter to stop!\n";
	char conti;
	conti= getch();
	if(conti=='y'||conti=='Y'){
		goto comeback;
	}
	return 0;
}
