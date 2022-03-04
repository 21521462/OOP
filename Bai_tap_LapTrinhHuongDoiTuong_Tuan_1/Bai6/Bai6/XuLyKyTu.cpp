//
//  XuLyKyTu.cpp
//  Bai6
//
//  Created by Phuoc Thien Nguyen on 03/03/2022.
//

#include "KyTu.h"

void HienThiBangChon() {
    cout << setw(10) << " " << "CHUONG TRINH XU LY KY TU" << endl;
    cout << setfill('-');
    cout << setw(50) << '-' << endl;
    cout << "1. Nhap 1 ky tu\n";
    cout << "2. Nhap 2 ky tu\n";
    cout << "3. Kiem tra 1 ky tu\n";
    cout << "4. Kiem Tra 2 ky tu\n";
    cout << "0. Thoat chuong trinh\n";
    cout << setw(50) << '-' << endl;
    cout << setfill(' ');
    cout << "Nhap lua chon cua ban: ";
}
void NhapMotKyTu(KYTU &kyTu) {
    cout << "Nhap ky tu: ";
    cin >> kyTu.giaTri;
    kyTu.daNhap = true;
}
void NhapMotKyTu(KYTU *kyTu) {
    cout << "Nhap ky tu: ";
    cin >> kyTu->giaTri;
    kyTu->daNhap = true;
}
void NhapHaiKyTu(KYTU &kyTu1, KYTU &kyTu2) {
    cout << "Nhap ky tu 1" << endl;
    NhapMotKyTu(kyTu1);
    cout << "Nhap ky tu 2" << endl;
    NhapMotKyTu(&kyTu2);
}
void NhapHaiKyTu(KYTU *kyTu1, KYTU *kyTu2) {
    cout << "Nhap ky tu 1" << endl;
    NhapMotKyTu(*kyTu1);
    cout << "Nhap ky tu 2" << endl;
    NhapMotKyTu(kyTu2);
}
bool KiemTraNguyenAm(KYTU kyTu) {
    switch (kyTu.giaTri) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return true;
            
        default:
            return false;
    }
}
bool KiemTraKyTu(KYTU kyTu) {
    if (('A' <= kyTu.giaTri && kyTu.giaTri <= 'Z')
        || ('a' <= kyTu.giaTri && kyTu.giaTri <= 'z'))
        return true;
    return false;
}
void XuatMotKyTu(KYTU kyTu) {
    if (!KiemTraKyTu(kyTu))
        cout << kyTu.giaTri << " khong la nguyen am cung khong la phu am.";
    else if (!KiemTraNguyenAm(kyTu))
        cout << kyTu.giaTri << " la phu am.";
    else
        cout << kyTu.giaTri << " la nguyen am.";
}
void XuatHaiKyTu(KYTU kyTu1, KYTU kyTu2) {
    XuatMotKyTu(kyTu1);
    cout << endl;
    XuatMotKyTu(kyTu2);
}
