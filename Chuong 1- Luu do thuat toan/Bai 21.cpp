/*
	Exercise 21:
	Caculate the sum of all divisors of n
*/
#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n;
	int sum=0;
	comeback: do{
		cout<<"Nhap n>=1 : ";
		cin>>n;
		if(n<1){
			cout<<"Nhap lai n>=1 !\n";
		}
	}while(n<1);
	for(int i=1; i<=n; i++){
		if(n%i==0){
			sum += i;
		}
	}
	cout<<"Tong cac uoc cua n la: "<<sum;
	char tieptuc;
	cout<<"\nDo you want to continue?\n";
	tieptuc=getch();
	if(tieptuc=='y'||tieptuc=='Y'){
		goto comeback;
	}
	return 0;
}
