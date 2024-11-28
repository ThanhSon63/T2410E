

#include "stdio.h"
#include "malloc.h"

int main(){
/*	int *p;
	int a = 10;
	p = &a;
	printf("gia tri a: %d \n",a);
	printf("gia tri a: %d \n",&a);
	printf(" dia chi bien a: %d\n",*p);
	printf(" dia chi con tro tro vao bien a: %d",p);
*/

int arr[5]={1,2,3,4,5};
for(int i =0; i <5; i++){
	printf("dia chi phan tu %d la: %d \n", i+1,arr[i]);
	printf("gia tri con tro %d la: %d\n", i+1,*(arr +i));
    printf("dia chi vung phan tu %d la: %d \n", i+1,(arr +i));
}
      //MALLOC
      int* m;
      m = (int*)malloc(5*sizeof(int));
      for(int i =0; i<5;i++){
      printf("Nhap vao phan thu thu %d: ", i+1);
      scanf("%d", m+i);
	  }
	  for( int i=0; i<5; i++){
	  	printf("Gia tri phan tu thu %d la: %d \n",i+1, *(m+i));
	  	printf("Dia chi phan tu %d la: %d \n", i+1,m +i);
	  	
	  }
	  // CALLOC
	  int* c;
	  c= (int *)calloc(5, sizeof(int));
	  for(int i =0; i<5; i++){
	  	printf("Gia tri phan tu %d truoc khi nhap lieu la: %d \n", i+1,*(c+1));
	  }
	   // REALLOC tang size
	   c = (int*)realloc(c,7*sizeof(int));
	   for(int i =0; i <7; i++){
	  	printf("Gia tri phan tu %d truoc khi nhap lieu la: %d \n", i+1,*(c+i));
}
	  
	  
	  
	  
	  
	  
	  
	  
}
