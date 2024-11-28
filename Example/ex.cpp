#include "stdio.h"
int main(){
//int data[6] = { 23, 90, 99, 9, 25, 16 };
//int tmp,i,j;
////perform insertion sorting
//for (j=1; j<6; j++) {
//    i =j - 1;
//    tmp = data[j]; // == 90
//    while ( (i>=0) && (tmp > data[i]) ) { // tmp = 90 < data[i] = 23 --> FALSE
//        data[i+1] = data[i]; // 
//        i--;
//    }
//    data[i+1] = tmp; //-- tmp == 90
//  }
//for ( i =0; i < 6; i++){
//printf ("\n data[%d] = %d",i, data[i]);
//}
int data[] = {0,11,13,14,15,15,15,17,18};
int low =0;
int high = 9;
int searchValue = 15;
int flag =0;
int sum = 0;
while(low<=high)
{
	int mid = low + (high - low)/2;
	if(searchValue == data[mid])
	{
		sum++;
		printf("found at index %d\n", sum);
		flag=1;
		break;
	 } 
	  
	else if(searchValue<data[mid]){
		high = mid -1;
	}else if (searchValue > data[mid]){
		low = mid +1;
	}
}
if(flag ==0){
	printf("Element not found in the array");
}

}  
