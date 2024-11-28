#include "stdio.h"
#include "math.h"

int main(){
	int n, a =1;
	 
	printf("Nhap so N: ");
	scanf("%d",&n);
	for( int i = 2; i < n; i++){
		if (n % i == 0){
			a=2 ;
		}
	}
	if (a==2){
		printf("%d khong phai la so nguyen to",n) ;
	} 
	else{
		printf("%d la so nguyen to", n); 
	}
}
