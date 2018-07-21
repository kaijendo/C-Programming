//
//  main.c
//  Exam_21-07-2018
//
//  Created by Thuy Truong Quang on 7/21/18.
//  Copyright © 2018 Thuy Truong Quang. All rights reserved.
//

#include <stdio.h>
#include <math.h>
//void swap(int * a, int * b);
//int main(int argc, const char * argv[]) {
//    int a, b;
//    printf("Nhap a: ");
//    scanf("%d", &a);
//    printf("Nhap b: ");
//    scanf("%d", &b);
//
//    swap(&a, &b);
//    printf("Sau khi doi bien a = %d, b = %d\n", a, b);
//    return 0;
//}
//
//void swap(int * a, int * b) {
//    *a = *a + *b;
//    *b = *a - *b;
//    *a = *a - *b;
//}
// MARK: - Prototype
void nhap(int * number);
void soChinhPhuong(int * number);
void tongSoChanLe(int * number);
void soNguyenTo(int * number);

// MARK: - Life circle
int main() {
    int number = 0;
    nhap(&number);
    printf("Gia tri vua nhap vao la: %d\n", number);
    soChinhPhuong(&number);
    tongSoChanLe(&number);
    soNguyenTo(&number);
    return 0;
}

// MARK: - Functions
void nhap(int * number) {
    printf("Nhap gia tri cua so: ");
    scanf("%d", number);
}

void soChinhPhuong(int * number) {
    int isCheck = 0;
    int sum;
    for (int i = 0; i <= *number; i++) {
        if ((int)sqrt(i) * (int)sqrt(i) == i) {
            isCheck = 1;
            sum += i;
        }
    }
    
    if (isCheck == 1 ){
        printf("%d la so chinh phuong\n", *number);
        printf("Tong so chinh phuong la: %d\n1", sum);
    } else {
        printf("%d khong la so chinh phuong\n", *number);
    }
}

void tongSoChanLe(int * number) {
    int tongSoChan = 0, tongSoLe = 0;
    for (int i = 1; i <= *number; i++) {
        if (i % 2 == 0) {
            tongSoChan += i;
        } else {
            tongSoLe += i;
        }
    }
    printf("Tong cac so le la: %d\n", tongSoLe);
    printf("Tong cac so chan la: %d\n", tongSoChan);
}

void soNguyenTo(int * number) {
    int count = 0, sum = 0;
    for (int i = 0; i <= *number; i++) {
        sum += i;
        if (*number % i == 0) {
            count++;
        }
    }
    if ((count == 0)  && (*number > 0)) {
        printf("%d la so nguyen to.\n", *number);
        printf("Tong cua cac chu so nguyen to la: %d\n", sum);
    } else {
        printf("%d khong la so nguyen to\n", *number);
    }
    if (*number == 1) {
        printf("%d la truong hop dac biet\n", *number);
    }
}
