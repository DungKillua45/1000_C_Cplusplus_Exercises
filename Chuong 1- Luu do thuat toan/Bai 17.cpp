/* Exercise 17: 
Caculate this: x + x^2/(2!) + x^3/(3!) + ... + x^n/(n!)
*/

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int giaithua( int n){
	if(n==0|| n==1){
		return 1;
	}else{
		return n* giaithua(n-1);
	}
}
float ketqua(int x, int n){
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	float sum=0;
	for(int i=1; i<=n; i++){
		sum += pow(x,i)/giaithua(i);
	}
	cout<<"Ket qua la: "<<sum;
}
int main(){
	int x,n;
	comeback: ketqua(x,n);
	char conti;
	cout<<"\nPress 'C' to continue, any letter to stop!\n";
	conti=getch();
	if(conti=='c'||conti=='C'){
		goto comeback;
	}
	return 0;
}
