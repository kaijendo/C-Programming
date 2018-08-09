//
//  main.c
//  BaiTapVeChuoiKyTu
//
//  Created by Thuy Truong Quang on 8/9/18.
//  Copyright © 2018 Thuy Truong Quang. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAXLENGTH 100
void removeCharactor(char * arr, char keyword);
void nhap(char arr[], int * length);
void xuat(char arr[], int length);
void timKiemKyTu(char arr[], int length);
void timKiemNhieuKyTu(char arr[], int length);
int main() {
    char arr[MAXLENGTH];
    int  length;
    nhap(arr, &length);
    xuat(arr, length);
    //timKiemKyTu(arr, length);
    timKiemNhieuKyTu(arr, length);
    return 0;
}

void nhap(char arr[], int * length) {
    printf("Nhap mang ky tu: ");
    scanf("%s", arr);
    *length = (int)strlen(arr);
}

void xuat(char arr[], int length) {
    printf("\nXau ban vua nhap vao la: %s\n", arr);
}

void timKiemKyTu(char arr[], int length) {
    char keyword;
    int isCheck = 0, index = 0;
    printf("Nhap ky tu tim kiem: ");
    scanf("%s", &keyword);
    for (int i = 0; i <= length; i++) {
        if (arr[i] == keyword) {
            isCheck = 1;
            index = i;
        }
    }
    if (isCheck) {
        printf("\nCo gia tri %c trong chuoi.", keyword);
        printf("\n%c nam o vi tri thu %d trong chuoi.\n", keyword, index);
    }
}

void timKiemNhieuKyTu(char arr[], int length) {
    int isCheck = 0;
    for (int i = 0; i <= length; i++) {
        if (arr[i] == 't' && arr[i + 1] == 'h') {
            isCheck = 1;
        }
    } if (isCheck) {
        printf("\nCo gia tri th trong chuoi.\n");
    }
}
