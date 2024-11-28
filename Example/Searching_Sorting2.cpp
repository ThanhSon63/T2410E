// 2. nhap vao mang 2 chieu: m hang, n cot --> dua ve mang 1 chieu sau do sap xep roi lai dua ve mang 2 chieu
// - sap xep mang theo chieu tang dan
/* - khai báo m?ng 2 chi?u
 - khai bao mang 1 chieu, so luong phan tu = hang x cot
 - gan gtri tai i, j = 0 cho mang 1 chieu 
 - su dung bubble sort hoac insert sort de sap xep
 - gan lai gia tri mang 1 chieu cho mang 2 chieu i,j 
*/   
# include "stdio.h" 
int main(){
	int n, m;
    int x = m*n;

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
  
  int mang1[m*n];
  int y = 0;
   for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mang1[y++] = mang[i][j];
        }
    } 
    //  Bubble Sort
//    for (int i = 0; i < m * n - 1; i++) {
//        for (int j = 0; j < m * n - 1 - i; j++) {
//            if ( mang1[j] >  mang1[j + 1]) {
//                // Hoan doi mang1[j] và  mang1[j + 1]
//                int temp =  mang1[j];
//                 mang1[j] =  mang1[j + 1];
//                 mang1[j + 1] = temp;
//            }
//        }
//    }
      
      // insert sort
	for (int i=1; i<m*n; i++) {
    int j =i - 1;
    int tmp = mang1[i];
    while ( (j>=0) && (tmp < mang1[j]) ) { 
        mang1[j+1] = mang1[j];  
        j--;
    }
    mang1[j+1] = tmp;
    } 

    // Chuyen mang 1 chieu thanh 2 chieu 
    int k = 0;
    printf("\nMang 2 chieu vua sap xep la :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
             mang[i][j] =  mang1[k++];
            printf("%d ",  mang[i][j]);
        }
        printf("\n");
    }

    
}

