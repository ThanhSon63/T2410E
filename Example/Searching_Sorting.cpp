// 1. Nhap vao mang so nguyen n phan tu
// - sap xep theo hu tu giam dan
// - nhap vao so a bat ki, kiem tra xem a xuat hien bao nhieu lan trong mang

 #include "stdio.h"
 int main(){
 		int n, x, y;
 		int tmp,i,j;
   
	printf ("Moi nhap vao so luong phan tu: ");
	scanf("%d",&n);
	int mang[n];
	
	for ( int i =0; i < n; i++){
		printf("Nhap vao phan tu thu %d: ",i+1);
		scanf("%d",&mang[i]);
	} 	printf("Cac phan tu trong mang la: ");
	 for(int i =0; i < n; i++) {
	 	printf("%d ",mang[i]);
 } 
 //sap xep mang theo thu tu giam dan 
for (j=1; j<n; j++) {
    i =j - 1;
    tmp = mang[j];
    while ( (i>=0) && (tmp > mang[i]) ) { 
        mang[i+1] = mang[i];  
        i--;
    }
    mang[i+1] = tmp;
  }
  printf("\nMang sap xep theo thu tu giam dan la: ");
for ( i =0; i < n; i++){
printf ("%d ", mang[i]);
}

// nhap so a bat ki va tim kiem xuat hien bao nhieu lan

int dem = 0;
int test; 
printf("\nMoi nhap so can tim: ");
	scanf("%d",&test);
	for( int i =0; i < n; i++){
		if( test == mang[i]) { 
		dem++; 
        }
     }
     if (dem > 0){
     	printf ("So %d xuat hien %d lan trong mang", test, dem); 
	 } else {
	 	printf("So %d khong co trong mang", test); 
	 } 
}






