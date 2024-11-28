#include "stdio.h"
#include "math.h"
int main (){
int x, y;
char phepTinh;

printf("nhap vao x\n ");
scanf("%d",&x);
//fflush(stdin);
printf("nhap vao y \n");
scanf("%d",&y);
fflush(stdin);
printf("Nhap phep tinh: \n");
scanf("%c",&phepTinh);

 	switch (phepTinh){
 		case '*':
 			printf (" X * Y = %d", x*y);
 			break;
 		case '+':
 		    printf (" X + Y = %d", x+y);
 			break;
 		case '-':
 			printf (" X - Y = %d", x-y);
 			break;
 		case '/':
 			printf (" X / Y = %d", x/y);
 			break;
 		default:
 			if (y==0){
 				printf("khong chia duoc khi b= 0");
 				
			 }else
			 	printf (" X / Y =%d", x/y);
 		
	 }
 }
 
