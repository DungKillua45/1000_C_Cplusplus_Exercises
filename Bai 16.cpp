#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void hehe(int x, int n){
	cout<<"Nhap x= ";
	cin>>x;
	cout<<"Nhap n= ";
	cin>>n;
	int sum=0;
	float kq=0;
	for(int i=1; i<=n; i++){
		sum += i;
		kq += pow(x,i)/sum;
	}
	cout<<"Ket qua la: "<< kq<<endl;
}
int main(){
	int x,n;
	comeback: hehe(x,n);
	cout<<"Press 'Y' to continue, any letter to stop!\n";
	char tt;
	tt=getch();
	if(tt=='Y'||tt=='y'){
		goto comeback;
	}
	return 0;
}
