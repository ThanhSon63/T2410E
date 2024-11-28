// 1 viet chuong trinh kiem tra so nguyen to
// 2 viet chuong trinh kiem tra UCLN, BCNN cua 2 so nguyen a,b
// --> ap dung do while de lua chon chuong trinh 
// 3 ve cac hinh tam giac sau
// - vuong trai, vuong phai voi canh nhap tu ban phim  voi n =3 
#include "stdio.h"
int main (){
//int a;
//printf("nhap vao canh hinh vuong: %d",a);
//scanf ( "%d",&a);
//
//	for ( int i = 0; i <a; i++){
//		for( int j = 0; j< a; j++){
//			printf("* ") ;
//		}
//			printf("\n") ;
//	} 
//
//int b;
//printf("nhap vao canh hinh tam giac : %d",b);
//scanf ( "%d",&b);
//
//	for ( int m = 0; m<b; m++){
//		for( int n = 0;n <= m ;n++){
//			printf("* ") ;
//		}
//			printf("\n") ;
//	} 

int a;
printf("nhap vao canh hinh tam giac %d",a);
scanf ( "%d",&a);

	for ( int i = 0; i <a; i++){
		for(int j= 0; j < a -i-1; j++ ){
			printf("  ") ;
		}
		for ( int j =0; j < a-1; j++ ){
			printf("*"); 
		} 
		printf("\n"); 
}
}
