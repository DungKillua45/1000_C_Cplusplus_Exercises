/*
	Exercise 29:
	Tim uoc le lon nhat cua n
*/
#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int n;
	int max=1;
	comeback: do{
		cout<<"Nhap n>=1 : ";
		cin>>n;
		if(n<1){
			cout<<"Nhap lai n>=1 !\n";
		}
	}while(n<1);
	for(int i=1; i<=n; i++){
		if(n%i==0 && i%2==1){
			if(i>max){
				max=i;
			}
		}
	}
	cout<<"Ket qua la: "<<max;
	char tieptuc;
	cout<<"\nDo you want to continue?\n";
	tieptuc=getch();
	if(tieptuc=='y'||tieptuc=='Y'){
		goto comeback;
	}
	return 0;
}
