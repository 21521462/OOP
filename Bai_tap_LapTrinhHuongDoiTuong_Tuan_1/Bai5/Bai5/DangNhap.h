//
//  DangNhap.h
//  Bai5
//
//  Created by Phuoc Thien Nguyen on 01/03/2022.
//

#pragma once
#ifndef DangNhap_h
#define DangNhap_h

#include <iostream>
#include <string>
using namespace std;

struct TAIKHOAN {
    string tenNguoiDung;
    string matKhau;
    bool dungSai = false;
    int soLanSai;
};
const string tenNguoiDung = "PhuocThien";
const string matKhau = "loveyou3000";

void Nhap(TAIKHOAN&);
void Nhap(TAIKHOAN*);
void KiemTraTaiKhoan(TAIKHOAN&);
void KiemTraTaiKhoan(TAIKHOAN*);
void DangNhap(TAIKHOAN&);
void DangNhap(TAIKHOAN*);
void Xuat(TAIKHOAN);

#endif /* DangNhap_h */
