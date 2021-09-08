// Bai 54: Tim so chu so nho nhat cua n.
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int min=n%10, dem=0;
	do{
		int a= n%10;		// 3 buoc nay phai lam theo dung thu tu
		if(a==min) dem++;
		if(a<min) min=a;
	}while(n/=10);
	cout<<"So chu so nho nhat cua n la: "<<dem;	
	return 0;
}
