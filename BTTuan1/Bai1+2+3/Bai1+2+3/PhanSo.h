#pragma once
#ifndef _PhanSo
#define _PhanSo

#include <iostream>
#include <iomanip>
using namespace std;
struct PHANSO {
    int ts, ms;
    bool daNhap;
};
void HienThiBangChon();
void NhapMotPhanSo(PHANSO&);
void NhapMotPhanSo(PHANSO*);
void NhapHaiPhanSo(PHANSO&, PHANSO&);
void NhapHaiPhanSo(PHANSO*, PHANSO*);
int UCLN(int, int);
int BCNN(int, int);
void RutGonMotPhanSo(PHANSO&);
void RutGonMotPhanSo(PHANSO*);
void RutGonHaiPhanSo(PHANSO&, PHANSO&);
void RutGonHaiPhanSo(PHANSO*, PHANSO*);
PHANSO PhanSoLonHon(PHANSO, PHANSO);
PHANSO TongHaiPhanSo(PHANSO, PHANSO);
PHANSO HieuHaiPhanSo(PHANSO, PHANSO);
PHANSO TichHaiPhanSo(PHANSO, PHANSO);
PHANSO ThuongHaiPhanSo(PHANSO, PHANSO);
void XuatMotPhanSo(PHANSO);
void XuatHaiPhanSo(PHANSO, PHANSO);

#endif
