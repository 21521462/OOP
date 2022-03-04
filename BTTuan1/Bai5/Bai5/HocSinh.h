//
//  HocSinh.h
//  Bai5
//
//  Created by Phuoc Thien Nguyen on 25/02/2022.
//

#pragma once
#ifndef HocSinh_h
#define HocSinh_h

#include <iostream>
using namespace std;
struct HOCSINH {
    string hoten;
    float diemToan, diemVan, dtb;
};
void Nhap(HOCSINH &hs);
void Nhap(HOCSINH *hs);
void TinhDiemTrungBinh(HOCSINH &hs);
void TinhDiemTrungBinh(HOCSINH *hs);
void Xuat(HOCSINH hs);

#endif /* HocSinh_h */
