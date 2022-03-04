//
//  DoiTien.h
//  Bai7
//
//  Created by Phuoc Thien Nguyen on 25/02/2022.
//

#pragma once
#ifndef DoiTien_h
#define DoiTien_h

#include <iostream>
using namespace std;
struct MENHGIA {
    int sotien;
    int namTram;
    int haiTram;
    int motTram;
    int namMuoi;
};
void Nhap(MENHGIA &mg);
void Nhap(MENHGIA *mg);
void TinhSoToTien(MENHGIA &mg);
void TinhSoToTien(MENHGIA *mg);
void Xuat(MENHGIA mg);
void Xuat(MENHGIA *mg);

#endif /* DoiTien_h */
