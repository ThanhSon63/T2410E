   #include <stdio.h>
   int main() {
   	 //giai phuong trinh bac 1
     
float  a,b,c;
printf ("Giai phuong trinh ax+b=0 \n") ;
printf("Nhap vao a:");
scanf("%f",&a) ;
printf("Nhap vao b:");
scanf("%f",&b) ;
if ( b == 0 ) {
	printf( " Phuong trinh vo so nghiem ") ;
}else {
	if ( a ==0){
 printf ( "Phuong trinh vo nghiem"); 
}
  else {
	c =-(b)/a; 
	printf (" Phuong trinh co nghiem x = %.2f", c); 
} 
}
   }
   
   
    
