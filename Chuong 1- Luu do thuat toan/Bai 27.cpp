/*
	Exercise 26
	Tinh tich cac uoc le cua n
*/
#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n, dem=0;
	comeback: do{
		cout<<"Nhap n>=1 : ";
		cin>>n;
		if(n<1){
			cout<<"Nhap lai n>=1 !\n";
		}
	}while(n<1);
	for(int i=1; i<=n; i++){
		if(n%i==0 && i%2==0){
			dem += 1;
		}
	}
	cout<<"So luong uoc so chan cua n la: "<<dem;
	char tieptuc;
	cout<<"\nDo you want to continue?\n";
	tieptuc=getch();
	if(tieptuc=='y'||tieptuc=='Y'){
		goto comeback;
	}
	return 0;
}
