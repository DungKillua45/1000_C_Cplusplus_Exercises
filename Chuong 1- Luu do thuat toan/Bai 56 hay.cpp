// Exercise 56: Kiem tra cac chu so cua n co phai toan le khong
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int count=0;
	int sochuso=0;
	do{
		int a=n%10;
		if(a%2==1) count ++;
		sochuso ++;
	}while(n/=10);
	if(count==sochuso){
		cout<<"Cac chu so cua n toan le";
	}else{
		cout<<"Cac chu so cua n khong phai toan le";
	}
	return 0;
}
