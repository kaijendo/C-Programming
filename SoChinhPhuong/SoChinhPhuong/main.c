#include <stdio.h>
#include <math.h>

void nhap(int arr[], int * length) {
    printf("Nhap do dai cua mang: ");
    scanf("%d", length);
    
    for (int i = 0; i <= *length; i++) {
        printf("Nhap gia tri thu Array[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void xuat(int arr[], int length) {
    printf("\nMang vua nhap vao la: ");
    for (int i = 0; i <= length; i++) {
        printf("\t%d", arr[i]);
    }
    printf("\n");
}

int ktChinhPhuong(int number) {
    if (number <= 1) return 0;
    if (sqrt(number) * sqrt(number) == number) {
        return 1;
    } else {
        return 0;
    }
}

void ktraChinhPhuong(int arr[], int length) {
    printf("Danh sach so chinh phuong la:");
    int sum = 0, isCheck = 0;
    for (int i = 0; i <= length; i++) {
        if (ktChinhPhuong(arr[i]) == 1) {
            sum += arr[i];
            printf("\t%d", arr[i]);
            isCheck = 1;
        } else {
            isCheck = 0;
        }
    }
    printf("\n");
    if (isCheck == 1) {
        printf("\nTong cua cac so chinh phuong la: %d\n", sum);
    }
}

int ktraSoNguyenTo(int number) {
    int count = 0;
    if (number < 2) {
        return 0;
    }
    for (int i = 1; i <= number; i++) {
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
    printf("Danh sach so nguyen to la: ");
    int sum = 0, isCheck = 0;
    
    for (int i = 0; i < length; i++) {
        if (ktraSoNguyenTo(arr[i]) == 1) {
            printf("\t%d", arr[i]);
            sum += arr[i];
            isCheck = 1;
        } else {
            isCheck = 0;
        }
    }
    if (isCheck == 1) {
        printf("\nTong cua cac so nguyen to la: %d\n", sum);
    }
}

void removeCharactor(char * arr[]) {
    int length = sizeof(*arr);
    for (int i = 0; i <= length; i++) {
        if (*arr[i] == 't' && (*arr[i+1] == 'h')) {
            length += 2;
        }
    }
}


int main() {
    int arr[10], length = 0;
    char name[] = "thuy";
//    nhap(arr, &length);
//    xuat(arr, length);
//    ktraChinhPhuong(arr, length);
//    soNguyenTo(arr, length);
    removeCharactor(&name);
    return 0;
}
