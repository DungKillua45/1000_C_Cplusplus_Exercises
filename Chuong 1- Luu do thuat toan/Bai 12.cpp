#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void hehe(int x, int n){
	cout<<"Nhap so nguyen duong x: ";
	cin>>x;
	cout<<"Nhap so nguyen duong n: ";
	cin>>n;
	int sum=0;
	for(int i=1; i<=n; i++){
		sum += pow(x, i);
	}
	cout<<"Ket qua la: "<<sum;
}
int main(){
	int x, n;
	comeback: hehe(x, n);
	char conti;
	cout<<"\nPress 'y' to continue, any letter to stop.\n";
	conti = getch();
	if(conti=='y' || conti=='Y') goto comeback;
	return 0;
}
