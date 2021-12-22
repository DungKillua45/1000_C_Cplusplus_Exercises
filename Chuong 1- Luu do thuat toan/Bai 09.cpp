#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n, kq=1;
	cout<<"Nhap so nguyen n: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		kq *= i;
	}
	cout<<"Ket qua la: "<<kq;
	return 0;
}
