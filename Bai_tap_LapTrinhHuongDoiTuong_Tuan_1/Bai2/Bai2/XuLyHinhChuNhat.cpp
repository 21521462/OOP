//
//  HinhChuNhat.cpp
//  Bai2
//
//  Created by Phuoc Thien Nguyen on 01/03/2022.
//

#include "HinhChuNhat.h"

void Nhap(HINHCHUNHAT &hcn) {
    cout << "Nhap chieu dai, chieu rong: ";
    cin >> hcn.chieuDai >> hcn.chieuRong;
}
void Nhap(HINHCHUNHAT *hcn) {
    cout << "Nhap chieu dai, chieu rong: ";
    cin >> hcn->chieuDai >> hcn->chieuRong;
}
void TinhChuVi(HINHCHUNHAT &hcn) {
    hcn.chuVi = 2 * (hcn.chieuDai + hcn.chieuRong);
}
void TinhChuVi(HINHCHUNHAT *hcn) {
    hcn->chuVi = 2 * (hcn->chieuDai + hcn->chieuRong);
}
void TinhDienTich(HINHCHUNHAT &hcn) {
    hcn.dienTich = hcn.chieuDai * hcn.chieuRong;
}
void TinhDienTich(HINHCHUNHAT *hcn) {
    hcn->dienTich = hcn->chieuDai * hcn->chieuRong;
}
void Xuat(HINHCHUNHAT hcn) {
    cout << "Chu vi: " << hcn.chuVi << endl;
    cout << "Dien tich: " << hcn.dienTich << endl;
}
void Xuat(HINHCHUNHAT *hcn) {
    cout << "Chu vi: " << hcn->chuVi << endl;
    cout << "Dien tich: " << hcn->dienTich << endl;
}
