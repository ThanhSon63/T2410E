// viet chuong trinh quan ly thong tin sinh vien; name, age, phone
// tim kiem sinh vien theo sdt
// them sinh vien: khong trung sdt 


#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

 struct sinhVien{
 	char name[20];
	char phoneNumber [11];
	int age; 
 };
  struct sinhVien Student[2];
 void  quanLySV (){
 	 
 	for(int i =0; i<2;i++){
 	printf("Nhap ten sinh vien: ");
	gets(Student[i].name);
	printf("Nhap sdt sinh vien: ");
	gets(Student[i].phoneNumber);
	printf("Nhap tuoi sinh vien: ");
    scanf("%d",&Student[i].age); 
    getchar(); 
}

printf("Danh sach sv trong lop: \n");
printf("Ten\t\t Sdt\t\tTuoi\n"); 
for(int i =0; i<2;i++){
	printf("%s\t\t%s\t\t%d \n",Student[i].name,Student[i].phoneNumber,Student[i].age); 
} 
}

void searchSV(){
	char phone[11]; 
	 printf("nhap sdt cua sinh vien can tim kiem: ");
	 scanf("%s",phone);
	 	for (int i=0;i<2; i++){
		if(strcmp(phone,Student[i].phoneNumber)==0){
			printf("%s %s %d",Student[i].name,Student[i].phoneNumber,Student[i].age);
			return ; 
		}
	}printf("Khong tim thay sinh vien!");
} 
void add(){
	
} 

 int main(){
 quanLySV();
 searchSV();
add(); 
 }


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 



