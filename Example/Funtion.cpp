#include "stdio.h" 
#include "math.h" 

int giaiPTB1(); 
int giaiPTB2();
int timSNT(); 



int main(){
    int a;
	char chonLai;

	do { 
	
	 printf("Moi chon chuc nang: ");
    scanf("%d",&a); 
    	getchar();  
	switch (a){
 	    case 1 :
 	      giaiPTB1();
 	      	printf("\nBan co muon tiep tuc, nhap y hoac Y de tiep tuc:");
 	      	 getchar(); 
		scanf ("%c",&chonLai); 
 	      break; 
	    case 2:
	      giaiPTB2();
	      	printf("\nBan co muon tiep tuc, nhap y hoac Y de tiep tuc:");
	      	getchar(); 
		scanf ("%c",&chonLai); 
 	      break;
        case 3:
	      timSNT();
	      	printf("\nBan co muon tiep tuc, nhap y hoac Y de tiep tuc:");
	      	getchar(); 
		scanf ("%c",&chonLai); 
	      break;
		default:
		printf("Thoat chuong trinh!!!!\n");
		printf("Ban co muon tiep tuc, nhap y hoac Y de tiep tuc:");
		scanf ("%c",&chonLai); 
		getchar();  
        
      } 
	} while(chonLai == 'y'|| chonLai=='Y');

}



int giaiPTB1(){

float  a,b,c;
printf ("Giai phuong trinh ax+b=0 \n") ;
printf("Nhap vao a:");
scanf("%f",&a) ;
printf("Nhap vao b:");
scanf("%f",&b) ;
	 
if ( b == 0 ) {
	printf( " Phuong trinh vo so nghiem\n ") ;
 }else if ( a ==0){
 printf ( "Phuong trinh vo nghiem\n"); 
}
else {
	c = -b/a; 
	printf ("Phuong trinh co nghiem x = %.2f \n", c); 
} 
}
// -----------------------
int giaiPTB2(){
		float a,b,c; 
	printf("giai phuong trinh bac 2 \n");
 printf("Nhap vao a:");
 scanf("%f",&a) ;
printf("Nhap vao b:");
 scanf("%f",&b) ;
 printf("Nhap vao c:");
 scanf("%f",&c) ;
	if ( a==0){
   if ( b==0){
 	 printf ( "Phuong trinh vo nghiem");
    }   
     else {
    float d = -c/b;
	 
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
} int timSNT(){
		int n, a =1;
	printf(" Tim so nguyen to\n"); 
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



