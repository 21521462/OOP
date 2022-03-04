//
//  ThiSinh.h
//  Bai11
//
//  Created by Phuoc Thien Nguyen on 26/02/2022.
//

#pragma once
#ifndef ThiSinh_h
#define ThiSinh_h
#include <iostream>
using namespace std;
struct THISINH {
    float diemChuan, diemTong, diem1, diem2, diem3;
    char maKV, maDT;
};
void Nhap(THISINH &ts);
void Nhap(THISINH *ts);
void TinhDiemTong(THISINH &ts);
void TinhDiemTong(THISINH *ts);
bool KetQuaTuyenSinh(THISINH ts);
bool KetQuaTuyenSinh(THISINH *ts);
void Xuat(THISINH ts);
void Xuat(THISINH *ts);

#endif /* ThiSinh_h */
