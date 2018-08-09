#include<stdio.h>
#include<math.h>

#define MAXLENGTH 10

// MARK: - Prototype
void nhap(int arr[], int * length);
void xuat(int arr[], int length);
void soChinhPhuong(int arr[], int length);
void soNguyenTo(int arr[], int length);
void themPhanTu(int * arr, int length);
void xoaPhanTu(int * arr, int length);
void suaPhanTu(int * arr, int length);
void sapXepAZ(int * arr, int length);
void sapXepZA(int * arr, int length);
// MARK: - Life circle
int main() {
    int arr[MAXLENGTH], length = 0;
    nhap(arr, &length);
    xuat(arr, length);
//    soChinhPhuong(arr, length);
//    soNguyenTo(arr, length);
//    themPhanTu(arr, length);
//    xoaPhanTu(arr, length);
//    suaPhanTu(arr, length);
    sapXepAZ(arr, length);
    sapXepZA(arr, length);
    return 0;
}

// MARK: - Functions.
void nhap(int arr[], int * length) {
    printf("Nhap do lon cua mang: ");
    scanf("%d", length);
    for(int i = 0; i <= *length; i++) {
        printf("Nhap gia tri thu A[%d]: ",i);
        scanf("%d", &arr[i]);
    }
}

void xuat(int arr[], int length) {
    printf("\nGia tri vua nhap la: ");
    for(int i = 0; i <= length; i++) {
        printf("\t%d", arr[i]);
    }
    printf("\n");
}

int ktraChinhPhuong(int number) {
    if (number == 1) return 0;
    if (sqrt(number) * sqrt(number) == number) {
        return 1;
    } else {
        return 0;
    }
}

void soChinhPhuong(int arr[], int length) {
    int isCheck = 0, sum = 0;
    printf("\nDanh sach so chinh phuong la: ");
    for(int i = 0; i <= length; i++) {
        if (ktraChinhPhuong(arr[i]) == 1) {
            isCheck = 1;
            printf("\t%d", arr[i]);
            sum += arr[i];
        } else {
            isCheck = 0;
        }
    }
    
    if (isCheck) {
        printf("\nTong cua so chinh phuong la: %d\n", sum);
    }
}

int ktraNguyenTo(int number) {
    int count = 0;
    
    if (number < 2) return 0;
    for(int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }
    
    if (count == 2) {
        return 1;
    } else {
        return 0;
    }
}

void soNguyenTo(int arr[], int length) {
    int sum = 0;
    printf("Danh sach so nguyen to la: ");
    for(int i = 0; i <= length; i++) {
        if (ktraNguyenTo(arr[i]) == 1) {
            printf("\t%d", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTong cua so nguyen to la: %d", sum);
}

void themPhanTu(int * arr, int length) {
    int number;
    printf("\nNhap so muon them: ");
    scanf("%d", &number);
    arr[length + 1] = number;
    
    printf("\nMang moi sau khi them la:");
    xuat(arr,length + 1);
}

void xoaPhanTu(int * arr, int length) {
    int index;
    printf("\nNhap vi tri muon xoa trong mang: ");
    scanf("%d", &index);
    if (index > length) {
        printf("\nVuot qua so luong mang. \n");
    } else {
        arr[index] = arr[index + 1];
        length --;
        xuat(arr, length);
    }
}

void suaPhanTu(int * arr, int length) {
    int index, number;
    printf("\nNhap vi tri muon sua trong mang: ");
    scanf("%d", &index);
    
    if (index > length) {
        printf("\nVuot qua so luong mang. \n");
    } else {
        printf("\nNhap so muon sua: ");
        scanf("%d", &number);
        arr[index] = number;
        xuat(arr, length);
    }
}

void sapXepAZ(int * arr, int length) {
    printf("\nMang sau khi sap xep la: ");
    for (int i = 0; i <= length - 1; i++) {
        for (int j = 0; j <= length - 1 - i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    xuat(arr, length);
}

void sapXepZA(int * arr, int length) {
    printf("\nMang sau khi sap xep la: ");
    for (int i = 0; i <= length - 1; i++) {
        for (int j = 0; j <= length - 1 - i; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    xuat(arr, length);
}

