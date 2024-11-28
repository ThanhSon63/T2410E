#include "stdio.h"
int main(){

	int a, b, c, d;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai : ");
    scanf("%d", &b);

    if (a == 0 || b == 0){
		printf( "UCLN cua %d va %d la: %d\n ",a,b , a+b); 
		printf( "Khong co BCLN cua cua %d va %d",a,b);
    }else if (a < b) {
    	for (int i = a; i >= 1; i--) {
       if (a % i == 0 && b % i == 0) {
           c = i;
           break; 
		    }
           
    } 
printf("UCLN cua %d va %d la: %d\n", a, b, c);
	} else{
       for (int i = b; i >= 1; i--) {
       if (a % i == 0 && b % i == 0) {
           c = i;
           break; 
		    }
       } 
	     printf("UCLN cua %d va %d la: %d\n", a, b, c);       
    }
    d = (a *b)/ c;
	printf( "BCNN cua %d va %d la: %d\n",a, b , d) ;
}



