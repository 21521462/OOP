//
//  HocSinh.h
//  Bai4
//
//  Created by Phuoc Thien Nguyen on 01/03/2022.
//

#pragma once
#ifndef HocSinh_h
#define HocSinh_h

#include <iostream>
#include <string>
using namespace std;
struct HOCSINH {
    float dtb;
    string xepLoai;
};
void Nhap(HOCSINH &hs);
void Nhap(HOCSINH *hs);
void XepLoai(HOCSINH &hs);
void XepLoai(HOCSINH *hs);
void Xuat(HOCSINH hs);
void Xuat(HOCSINH *hs);

#endif /* HocSinh_h */
