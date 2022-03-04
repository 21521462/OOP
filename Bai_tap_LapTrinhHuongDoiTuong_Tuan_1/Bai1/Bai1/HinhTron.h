//
//  HinhTron.h
//  Bai1
//
//  Created by Phuoc Thien Nguyen on 28/02/2022.
//

#pragma once
#ifndef HinhTron_h
#define HinhTron_h
#include <iostream>
#include <cmath>
using namespace std;
struct HINHTRON {
    float banKinh;
    float chuVi, dienTich;
};
void Nhap(HINHTRON &ht);
void Nhap(HINHTRON *ht);
void TinhChuVi(HINHTRON &ht);
void TinhChuVi(HINHTRON *ht);
void TinhDienTich(HINHTRON &ht);
void TinhDienTich(HINHTRON *ht);
void Xuat(HINHTRON ht);
void Xuat(HINHTRON *ht);

#endif /* HinhTron_h */
