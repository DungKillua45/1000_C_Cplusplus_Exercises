#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n, x, kq=1;
	cout<<"Nhap so nguyen x: ";
	cin>>x;
	cout<<"Nhap so nguyen n: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		kq *= x;
	}
	cout<<"Ket qua la: "<<kq;
	return 0;
}
