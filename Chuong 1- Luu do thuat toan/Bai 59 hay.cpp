// Exercise 59: Hay kiem tra n co phai so doi xung khong.
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int k=n;
	int sodaonguoc=0;
	do{
		int a=n%10;
		sodaonguoc = sodaonguoc * 10 + a;
	}while(n/=10);
	cout<<"So dao nguoc cua n la: "<<sodaonguoc<<endl;
	if(sodaonguoc==k){
		cout<<"n la so doi xung";
	}else{
		cout<<"n khong phai la so doi xung";
	}
	return 0;
}
