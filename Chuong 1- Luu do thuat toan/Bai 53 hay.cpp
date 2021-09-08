// Bai 53: Tim so chu so lon nhat cua n
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int max=0;
	int dem=1;
	do{
		int a= n%10;
		if(a==max) dem++;
		if(a>max)  max=a;
	}while(n/=10);
	cout<<"So chu so lon nhat cua n la: "<<dem;
	return 0;
}
