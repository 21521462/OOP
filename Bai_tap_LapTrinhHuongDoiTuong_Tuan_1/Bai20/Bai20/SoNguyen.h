//
//  SoNguyen.h
//  Bai20
//
//  Created by Phuoc Thien Nguyen on 27/02/2022.
//

#pragma once
#ifndef SoNguyen_h
#define SoNguyen_h
#include <iostream>
#include <cmath>
#define MAX 100
using namespace std;
struct SONGUYEN {
    int giaTri, soChuSo;
    bool nguyenTo, chinhPhuong, hoanThien, doiXung;
};
void Nhap(SONGUYEN &sn);
void Nhap(SONGUYEN *sn);
void KiemTraSoNguyenTo(SONGUYEN &sn);
void KiemTraSoNguyenTo(SONGUYEN *sn);
void KiemTraSoChinhPhuong(SONGUYEN &sn);
void KiemTraSoChinhPhuong(SONGUYEN *sn);
void KiemTraSoHoanThien(SONGUYEN &sn);
void KiemTraSoHoanThien(SONGUYEN *sn);
void KiemTraSoDoiXung(SONGUYEN &sn);
void KiemTraSoDoiXung(SONGUYEN *sn);
void Xuat(SONGUYEN sn);
void Xuat(SONGUYEN *sn);

#endif /* SoNguyen_h */
