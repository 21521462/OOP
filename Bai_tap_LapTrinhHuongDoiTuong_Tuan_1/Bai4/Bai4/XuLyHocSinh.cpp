//
//  XuLyHocSinh.cpp
//  Bai4
//
//  Created by Phuoc Thien Nguyen on 01/03/2022.
//

#include "HocSinh.h"

void Nhap(HOCSINH &hs) {
    do {
        cout << "Nhap diem trung binh (diem trung binh >= 0): ";
        cin >> hs.dtb;
    } while (hs.dtb < 0);
}
void Nhap(HOCSINH *hs) {
    do {
        cout << "Nhap diem trung binh (diem trung binh >= 0): ";
        cin >> hs->dtb;
    } while (hs->dtb < 0);
}
void XepLoai(HOCSINH &hs) {
    if (hs.dtb < 5) hs.xepLoai = "Yeu";
    else if (hs.dtb < 7) hs.xepLoai = "TB";
    else if (hs.dtb < 8) hs.xepLoai = "Kha";
    else if (hs.dtb < 9) hs.xepLoai = "Gioi";
    else hs.xepLoai = "Xuat sac";
}
void XepLoai(HOCSINH *hs) {
    if (hs->dtb < 5) hs->xepLoai = "Yeu";
    else if (hs->dtb < 7) hs->xepLoai = "TB";
    else if (hs->dtb < 8) hs->xepLoai = "Kha";
    else if (hs->dtb < 9) hs->xepLoai = "Gioi";
    else hs->xepLoai = "Xuat sac";
}
void Xuat(HOCSINH hs) {
    cout << "Xep loai: " << hs.xepLoai << endl;
}
void Xuat(HOCSINH *hs) {
    cout << "Xep loai: " << hs->xepLoai << endl;
}
