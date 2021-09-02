/*
	Exercise 32:
	Kiem tra n co phai la so chinh phuong khong?
*/

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void hehe(int n){
	cout<<"Nhap n: ";
	cin>>n;
	int k=0;
	for(int i=1; i<=n; i++){
		if (i*i == n){
			k=1;
			break;	
		}
	}
	if(k==0){
		cout<<"n khong phai la so chinh phuong!";
	}else{
		cout<<"n la so chinh phuong!";
	}
}
int main(){
	int n;
	comeback: hehe(n);
	char conti;
	cout<<"\nPress 'Y' to continue, any letter to stop!\n";
	conti=getch();
	if(conti=='y'||conti=='Y'){
		goto comeback;
	}
	return 0;
}
