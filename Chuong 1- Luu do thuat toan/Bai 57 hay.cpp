//Exercise 55: Kiem tra cac chu so cua n co phai toan chan khong.
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int k=1;
	do{
		int a=n%10;
		if(a%2==1){
			k=0;
			break;
		}
	}while(n/=10);
	if(k==1){
		cout<<"Cac chu so cua n toan la so chan.";
	}else{
		cout<<"Cac chu so cua n khong phai toan la so chan.";
	}
	return 0;
}
