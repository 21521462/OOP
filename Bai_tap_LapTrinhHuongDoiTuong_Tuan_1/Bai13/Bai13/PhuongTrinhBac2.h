//
//  PhuongTrinhBac2.h
//  Bai13
//
//  Created by Phuoc Thien Nguyen on 27/02/2022.
//

#pragma once
#ifndef PhuongTrinhBac2_h
#define PhuongTrinhBac2_h
#include <iostream>
#include <cmath>
using namespace std;
struct PT_BAC2 {
    int a, b, c;
    float delta;
};
void Nhap(PT_BAC2 &pt);
void Nhap(PT_BAC2 *pt);
void TinhDelta(PT_BAC2 &pt);
void TinhDelta(PT_BAC2 *pt);
void Xuat(PT_BAC2 &pt);
void Xuat(PT_BAC2 *pt);

#endif /* PhuongTrinhBac2_h */
