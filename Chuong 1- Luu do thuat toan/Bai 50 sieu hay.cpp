// Exercise 50: Viet so dao nguoc cua n.
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void daonguoc(int n){
	cout<<"Nhap n: ";
	cin>>n;
	int sodaonguoc=0;
	cout<<"So dao nguoc cua n la: ";
	do{					
		cout<<n%10;		
		// Cach 2: sodaonguoc = sodaonguoc * 10 + n % 10;
		n =n/10;
	}while(n>=1);	
}

int main(){
	int n;
	comeback: daonguoc(n);
	cout<<"\nPress 'Y' to continue, any letter to stop.\n";
	char conti;
	conti=getch();
	if(conti=='y'||conti=='Y') goto comeback;
	return 0;
}
