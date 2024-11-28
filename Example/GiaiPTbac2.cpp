
#include <stdio.h>
#include <math.h> 
//nhap vao 1 so nguyen tu ban phim, kiem tra la so chan hay so le 
// giai pt bac 1 ax+b=0
// giai pt bac 2
// nhap vao 1 so nguyen  kiem tra xem co phai la SNT hay khong 
int main(){
float  a,b,c;

 
printf("giai phuong trinh bac 2 \n");
 printf("Nhap vao a:");
 scanf("%d",&a) ;
printf("Nhap vao b:");
 scanf("%d",&b) ;
 printf("Nhap vao c:");
 scanf("%d",&c) ;
 
 if ( a==0){
   if ( b ==0){
 	 printf ( "Phuong trinh vo nghiem");
    }   
     else {
    float d;
	d = -c/b; 
	printf (" Phuong trinh co nghiem x = %.2f",d); 
    } 	 
}
else{ 
double D;
D = (b*b)-(4*a*c);
printf (" Delta = %.2lf \n", D);
if (D < 0){
	printf ( " Phuong trinh vo nghiem"); 
} 
	else if ( D ==0 ){
		float x = -b/(2*a);
		printf( "Phuong trinh co nghiem kep x = %.2f", x); 
	} 
	else{
	float x1,x2;
	x1 = -(b-sqrt(D))/(2*a);
	x2 = -(b+sqrt(D))/(2*a);
	printf( " Phuong trinh co 2 nghiem \n  x1 = %.2f \n  x2 = %.2f", x1,x2) ;
	}	 
} 
}
