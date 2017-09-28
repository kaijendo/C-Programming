#include <stdio.h>
#include <string.h>

typedef struct SinhVien {
	char maSo[50];
	char hoTen[50];
	char namSinh[50];
	char diemTB[50];
}sinhVien;


 void showList() {
 	
	sinhVien sinhViens[10];
	if (sizeof(sinhVien) > 0) {
		printf("Danh sach sinh vien gom co: %d\n",sizeof(sinhVien));
		printf("Thong tin chi tiet cua cac sinh vien nhu sau:\n");
		for (int item = 0; item < (sizeof(sinhVien)); item++) {
			printf("Sinh vien thu %d: \n",item);
			printf("Ma so cua sinh vien thu %s: \n", sinhViens[item].maSo);
			printf("Ho ten cua sinh vien thu %s: \n", sinhViens[item].hoTen);
			printf("Nam sinh cua sinh vien thu %s: \n", sinhViens[item].namSinh);
			printf("diem trung binh cua sinh vien thu %s: \n\n", sinhViens[item].diemTB);
		}
	} else {
		printf("Hien tai chua co du lieu sinh vien.");
	}
}

void addNew() {
	sinhVien sv;
	char maSo[50];
	char hoTen[50];
	char namSinh[50];
	char diemTB[50];
	
	printf("Nhap thong tin can them cho sinh vien moi: \n");
	printf("Ma so sinh vien: \n");
	scanf("%c", &maSo);
	strcpy(sv.maSo, maSo);
	printf("Ho ten sinh vien: \n");
	scanf("%c", &hoTen);
	strcpy(sv.maSo, hoTen);
	printf("nam sinh sinh vien: \n");
	scanf("%c", &namSinh);
	strcpy(sv.maSo, namSinh);
	printf("diem trung binh sinh vien: \n\n");
	scanf("%c", &diemTB);
	strcpy(sv.maSo, diemTB);
	
	printf("Thong tin sinh vien moi duoc them vao tai vi tri thu %d la: \n", sizeof(sinhVien) + 1);
	printf("Ma so: %c\n", maSo);
	printf("Ho ten: %c\n", hoTen);
	printf("Nam sinh: %c\n", namSinh);
	printf("Diem trung binh: %c\n", diemTB);	
}
void search() {
	int selected;
	sinhVien sv;
	char hoTen[50];
	printf("1.Tim kiem theo ten\n");
	printf("2.Tim kiem theo ma so\n");
	printf("3.Tim kiem theo nam sinh\n\n");
	switch (selected) {
		case 1:
			printf("Nhap ten can tim kiem \n");
			scanf("%s",&hoTen);
			for (int item = 0; item < sizeof(sinhVien); item++) {
			if (sv[item].hoTen == hoTen) {
			
		}
	}
				
	}
}
 void mode() {
 	sinhVien sinhViens[100];
 	int selected;
		printf("He thong quan ly sinh vien.\n");		
		printf("Moi lua chon chuc nang: \n");
		printf("1.Them moi sinh vien \n");
		printf("2.Cap nhap lai thong tin cua sinh vien \n");
		printf("3.Tim kiem thong tin sinh vien theo yeu cau \n");
		printf("An phim bat ki de hien danh sach sinh vien \n");
		scanf("%d", &selected);
		
		switch (selected) {
		case 1:
			addNew();
			break;
		
		default:
			printf("Danh sach sinh vien: \n");
			showList();
			break;
		}
 }
 
int main(void) {
	while(1) {
		mode();
	}
	return 0;
}

	
