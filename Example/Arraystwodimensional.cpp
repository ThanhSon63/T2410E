  // nhap vao mang 2 chieu, m = hang, n = cot
  // tinh tong duong cheo chinh
  //tìm GTLN, GTNN cua tung hang tung cot 
#include "stdio.h"
int main( ){
	int n, m, y,sum = 0, sum1 =0;
	int min= 0;

	printf (" Moi nhap vao so hang m =  ");
	scanf("%d",&m);
	printf (" Moi nhap vao so cot n  =  ");
	scanf("%d",&n);
	printf("mang vua nhap la: mang[%d][%d] \n", m ,n);
	int mang[m][n];

		for ( int i = 0; i <m ; i++){
		for( int j = 0; j <n; j++){
		printf("mang[%d][%d] = ", i, j) ;
		scanf("%d",&mang[i][j]);
			} 
		} 
		printf("mang vua nhap la: \n"); 
	for( int i = 0; i <m ; i++) {
		for( int j = 0; j <n; j++){
		printf("%d ",mang[i][j]) ;
			}  printf("\n");
			
		} 
	for( int i = 0; i < m ; i++) {
		for( int j = 0; j < n; j++){
			if ( i==j){
					sum +=mang[i][i]; 
			}		 
		} 
	}printf("Tong duong cheo chinh la = %d", sum ) ;
	 
	 
//	for( int i = 0; i < m ; i++) {
//		int maxi  = A[i][0];
//			for ( int j =0; j < n; j++){
//					if ( A[i][j] < max){
//		        	max = A[i][j];
//			} 
//		 
//	 }
//	}printf( " max = %d", max) ;
		  
	


}
