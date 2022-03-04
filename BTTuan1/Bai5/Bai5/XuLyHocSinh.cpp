//
//  XuLyHocSinh.cpp
//  Bai5
//
//  Created by Phuoc Thien Nguyen on 25/02/2022.
//

#include "HocSinh.h"

void Nhap(HOCSINH &hs) {
    cout << "Nhap ho va ten: ";
    getline(cin, hs.hoten);
    cout << "Nhap diem Toan: ";
    cin >> hs.diemToan;
    cout << "Nhap diem Van: ";
    cin >> hs.diemVan;
}
void Nhap(HOCSINH *hs) {
    cout << "Nhap ho va ten: ";
    getline(cin, hs->hoten);
    cout << "Nhap diem Toan: ";
    cin >> hs->diemToan;
    cout << "Nhap diem Van: ";
    cin >> hs->diemVan;
}
void TinhDiemTrungBinh(HOCSINH &hs) {
    hs.dtb = (hs.diemToan + hs.diemVan) / 2;
    
}
void TinhDiemTrungBinh(HOCSINH *hs) {
    hs->dtb = (hs->diemToan + hs->diemVan) / 2;
}
void Xuat(HOCSINH hs) {
    cout << "Ho ten: " << hs.hoten << endl;
    cout << "Diem Toan: " << hs.diemToan << endl;
    cout << "Diem Van: " << hs.diemVan << endl;
    cout << "Diem trung binh: " << hs.dtb << endl;
}
