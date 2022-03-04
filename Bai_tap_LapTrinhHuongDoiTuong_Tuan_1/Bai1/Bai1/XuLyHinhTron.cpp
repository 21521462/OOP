//
//  XuLyHinhTron.cpp
//  Bai1
//
//  Created by Phuoc Thien Nguyen on 28/02/2022.
//

#include "HinhTron.h"

void Nhap(HINHTRON &ht) {
    cout << "Nhap ban kinh: ";
    cin >> ht.banKinh;
}
void Nhap(HINHTRON *ht) {
    cout << "Nhap ban kinh: ";
    cin >> ht->banKinh;
}
void TinhChuVi(HINHTRON &ht) {
    ht.chuVi = 2 * M_PI * ht.banKinh;
}
void TinhChuVi(HINHTRON *ht) {
    ht->chuVi = 2 * M_PI * ht->banKinh;
}
void TinhDienTich(HINHTRON &ht) {
    ht.dienTich = pow(ht.banKinh, 2) * M_PI;
}
void TinhDienTich(HINHTRON *ht) {
    ht->dienTich = pow(ht->banKinh, 2) * M_PI;
}
void Xuat(HINHTRON ht) {
    cout << "Chu vi: " << ht.chuVi << endl;
    cout << "Dien tich: " << ht.dienTich << endl;
}
void Xuat(HINHTRON *ht) {
    cout << "Chu vi: " << ht->chuVi << endl;
    cout << "Dien tich: " << ht->dienTich << endl;
}
