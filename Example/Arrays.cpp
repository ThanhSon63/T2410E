//1  nhap vao n phan tu  tu ban phim  
// - tim so co gia tri lon nhat
// - tim so co gia tri nho nhat
// - dao nguoc mang ban dau


#include "stdio.h"
int main( ){
	int n, x, y;
	printf (" Moi nhap vao so luong phan tu: ");
	scanf("%d",&n);
	int mang[n];
	
	for ( int i =0; i < n; i++){
		printf(" Nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&mang[i]);
	} 	printf("Cac phan tu trong mang la: ");
	 for(int i =0; i < n; i++) {
	 	printf("%d ",mang[i]);
	 	 
	 }
	x = mang[0];
	for (int i =1; i < n; i++){
		if(x < mang[i] )
		x = mang[i]; 
	} 
	y= mang[0];  
	for (int i =1; i < n; i++){
		if(y > mang[i] )
		y = mang[i]; 
	} 
 	printf("\nMang dao nguoc la: " );
	for ( int i = n -1 ; i >= 0 ; i--){
	printf(" %d", mang[i]) ; 
	} 
printf(" \nMang dao nguoc la: ");

	 for(int i =0; i < n; i++){
	 	printf("%d", mang[i]);
	}
	 	int min=0, max=n-1; 
	 	while(L<R){
	 		int z = mang[min];
		 mang[min]=mang[max];
		 mang[max]= z;
		 min++;
		 max--; 
		  
		 } 
	 	
	 	
	 
	
	printf("\n"); 
	
	printf("Phan tu co gia tri lon nhat la: %d \n",x ) ;
	printf("Phan tu co gia tri nho nhat la: %d \n", y) ;
    	
} 


