#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef enum
{
	Nam, // =0 
	Nu,  //=1 
	Khongxacdinh,//2 
}gioitinh;
typedef struct danhsach
{
	char ten[10]; 
	char tuoi; 
	gioitinh gtinh; 
	float diemtoan; 
	float diemvan; 
	float diemtb; 
}ds;
ds timhs(ds* x)
{
	float max = x[0].diemtb; 
	char cnt = 0; 
	for (char i = 1; i < 3; i++)
	{
		if (max < x[i].diemtb)
		{
			cnt = 1; 
			max = x[i].diemtb; 
		}
	}
	return x[cnt]; 
}
void main()
{
	ds arr[3] = { 0 }; 
	for (char i = 0; i < 3; i++)
	{
		printf("Nhap du lieu nguoi thu %d", i + 1);
		printf("\n Ten: "); 
		scanf("%s", &arr[i].ten);
		printf_s("Tuoi: "); 
		scanf("%d", &arr[i].tuoi); 
		printf("Gioi tinh"); 
		scanf("%d", &arr[i].gtinh); 
		printf("Diemtoan"); 
		scanf("%f", &arr[i].diemtoan);
		printf_s("Diemvan");
		scanf("%f", &arr[i].diemvan);
		arr[i].diemtb = (arr[i].diemtoan + arr[i].diemvan) / 2; 
		}
	ds maxhs = timhs(arr); 
	printf("\rDiem cao nhat thuoc ve: %s \r\nVoi so diem trung binh la: %f ", maxhs.ten, maxhs.diemtb); 
}
