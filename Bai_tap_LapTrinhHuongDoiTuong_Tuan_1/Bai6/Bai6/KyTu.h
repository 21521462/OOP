//
//  KyTu.h
//  Bai6
//
//  Created by Phuoc Thien Nguyen on 03/03/2022.
//

#pragma once
#ifndef KyTu_h
#define KyTu_h

#include <iostream>
#include <iomanip>
using namespace std;
struct KYTU {
    char giaTri;
    bool daNhap = false;
};
void HienThiBangChon();
void NhapMotKyTu(KYTU&);
void NhapMotKyTu(KYTU*);
void NhapHaiKyTu(KYTU&, KYTU&);
void NhapHaiKyTu(KYTU*, KYTU*);
bool KiemTraNguyenAm(KYTU);
bool KiemTraKyTu(KYTU);
void XuatMotKyTu(KYTU);
void XuatHaiKyTu(KYTU, KYTU);

#endif /* KyTu_h */
