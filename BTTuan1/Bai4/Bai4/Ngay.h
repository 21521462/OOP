#pragma once
#ifndef _Ngay
#define _Ngay

#include <iostream>
using namespace std;
struct NGAY {
    int dd, mm, yy;
};
void Nhap(NGAY &ng);
void Nhap(NGAY *ng);
bool KiemTraNamNhuan(NGAY ng);
bool KiemTraTinhHopLe(NGAY ng);
void NgayKeTiep(NGAY ng);
void Xuat(NGAY ng);

#endif
