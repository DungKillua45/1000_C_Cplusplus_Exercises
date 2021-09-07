#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void demso(int n){
	cout<<"Nhap n: ";
	cin>>n;
	int count=0;
	do{
		n = n /10;
		count ++;
	}while(n>=1);
	cout<<"So chu so cua n la: "<<count;
}

int main(){
	int n;
	comeback: demso(n);
	cout<<"\nPress 'y' to continue, any letter to stop.\n";
	char conti;
	conti=getch();
	if(conti=='y'||conti=='Y'){
		goto comeback;
	}
	return 0;
}
