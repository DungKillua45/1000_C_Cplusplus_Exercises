/*
	Exercise 30:
	Kiem tra n co phai la so hoan thien khong
	(so hoan thien n la so co tong cac uoc ngoai tru n bang n)
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void ketqua(int n){
	int sum=0;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=1; i<n; i++){
		if(n%i==0){
			sum += i;
		}
	}
	cout<<"Tong tat cac cac uoc khong bao gom n la: "<<sum<<endl;
	if(sum==n){
		cout<<"=> n la so hoan thien";
	}else{
		cout<<"=> n khong phai la so hoan thien";
	}
}
int main(){
	int n;
	ketqua(n);
	return 0;
}
