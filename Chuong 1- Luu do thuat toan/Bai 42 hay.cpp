#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void sosanh(int n){
	comeback: cout<<"Nhap n>1: ";	
	cin>>n;
	if(n<=1) goto comeback;
	int sum=0;
	for (int i=1; i<=n; i++){
		sum += i;
		if(sum>=n){
			cout<<"k = "<<i-1<<endl;
			sum -= i;	
			cout<<"sum = "<<sum;
			break;
		} 
	}
	
}
int main(){
	int n;
	sosanh(n);
	return 0;
}
