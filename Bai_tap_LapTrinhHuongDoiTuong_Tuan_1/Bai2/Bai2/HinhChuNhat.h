//
//  HinhChuNhat.h
//  Bai2
//
//  Created by Phuoc Thien Nguyen on 01/03/2022.
//

#pragma once
#ifndef HinhChuNhat_h
#define HinhChuNhat_h
#include <iostream>
using namespace std;
struct HINHCHUNHAT {
    float chieuDai, chieuRong;
    float chuVi, dienTich;
};
void Nhap(HINHCHUNHAT &hcn);
void Nhap(HINHCHUNHAT *hcn);
void TinhChuVi(HINHCHUNHAT &hcn);
void TinhChuVi(HINHCHUNHAT *hcn);
void TinhDienTich(HINHCHUNHAT &hcn);
void TinhDienTich(HINHCHUNHAT *hcn);
void Xuat(HINHCHUNHAT hcn);
void Xuat(HINHCHUNHAT *hcn);

#endif /* HinhChuNhat_h */
