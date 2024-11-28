#include"stdio.h"
struct sinhVien{
 	char name[20];
	char phoneNumber [11];
	int age; 
 };
  struct sinhVien Student[5];
 void  quanLySV (){ 
 	for(int i =0; i<5;i++){
 	printf("Nhap ten sinh vien: ");
	gets(Student[i].name);
	printf("Nhap sdt sinh vien: ");
	gets(Student[i].phoneNumber);
	printf("Nhap tuoi sinh vien: ");
    scanf("%d",Student[i]); 
 }
}
 int main(){
 quanLySV();  
}
   
