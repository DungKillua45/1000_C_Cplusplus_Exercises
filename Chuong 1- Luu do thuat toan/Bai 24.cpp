/*
	Exercise 24:
	Liet ke cac uoc le cua n
*/
#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n;
	comeback: do{
		cout<<"Nhap n>=1 : ";
		cin>>n;
		if(n<1){
			cout<<"Nhap lai n>=1 !\n";
		}
	}while(n<1);
	cout<<"Cac uoc le cua n la: ";
	for(int i=1; i<=n; i++){
		if(n%i==0 && i%2==1){
			cout << i<<" ";
		}
	}
	char tieptuc;
	cout<<"\nDo you want to continue?\n";
	tieptuc=getch();
	if(tieptuc=='y'||tieptuc=='Y'){
		goto comeback;
	}
	return 0;
}
