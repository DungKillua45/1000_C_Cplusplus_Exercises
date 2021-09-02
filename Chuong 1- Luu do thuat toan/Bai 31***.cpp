/*
	Exercise 31:
	Kiem tra n co phai la so nguyent to khong
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void ketqua(int n){
	int sum=0;
	cout<<"Nhap n: ";
	cin>>n;
	int k=1;
	for(int i=2; i<n; i++){
		if(n%i==0){
			k=0;
			break;
		}
	}
	if(k==1){
		cout<<"n la so nguyen to";
	}else{
		cout<<"n khong phai la so nguyen to";
	}
}
int main(){
	int n;
	ketqua(n);
	return 0;
}
