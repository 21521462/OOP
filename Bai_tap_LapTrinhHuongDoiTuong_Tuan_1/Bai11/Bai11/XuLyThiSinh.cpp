//
//  XuLyThiSinh.cpp
//  Bai11
//
//  Created by Phuoc Thien Nguyen on 26/02/2022.
//

#include "ThiSinh.h"

void Nhap(THISINH &ts) {
    cout << "Nhap diem chuan: "; cin >> ts.diemChuan;
    cout << "Nhap diem mon thi thu nhat: "; cin >> ts.diem1;
    cout << "Nhap diem mon thi thu hai: "; cin >> ts.diem2;
    cout << "Nhap diem mon thi thu ba: "; cin >> ts.diem3;
    cout << "Nhap ma khu vuc: "; cin >> ts.maKV;
    cout << "Nhap ma doi tuong: "; cin >> ts.maDT;
}
void Nhap(THISINH *ts) {
    cout << "Nhap diem chuan: "; cin >> ts->diemChuan;
    cout << "Nhap diem mon thi thu nhat: "; cin >> ts->diem1;
    cout << "Nhap diem mon thi thu hai: "; cin >> ts->diem2;
    cout << "Nhap diem mon thi thu ba: "; cin >> ts->diem3;
    cout << "Nhap ma khu vuc: "; cin >> ts->maKV;
    cout << "Nhap ma doi tuong: "; cin >> ts->maDT;
}
void TinhDiemTong(THISINH &ts) {
    ts.diemTong = ts.diem1 + ts.diem2 + ts.diem3;
    switch (ts.maKV) {
            case 'A':
                ts.diemTong += 1.5;
                break;
            case 'B':
                ts.diemTong += 1;
                break;
            case 'C':
                ts.diemTong += 0.5;
                break;
                
            default:
                break;
        }
        switch (ts.maDT) {
            case '1':
                ts.diemTong += 1.5;
                break;
            case '2':
                ts.diemTong += 1;
                break;
            case '3':
                ts.diemTong += 0.5;
                break;
                
            default:
                break;
        }
}
void TinhDiemTong(THISINH *ts) {
    ts->diemTong = ts->diem1 + ts->diem2 + ts->diem3;
    switch (ts->maKV) {
            case 'A':
                ts->diemTong += 1.5;
                break;
            case 'B':
                ts->diemTong += 1;
                break;
            case 'C':
                ts->diemTong += 0.5;
                break;
                
            default:
                break;
        }
        switch (ts->maDT) {
            case '1':
                ts->diemTong += 1.5;
                break;
            case '2':
                ts->diemTong += 1;
                break;
            case '3':
                ts->diemTong += 0.5;
                break;
                
            default:
                break;
        }
}
bool KetQuaTuyenSinh(THISINH ts) {
    if (ts.diemTong < ts.diemChuan)
        return  false;
    if (ts.diem1 * ts.diem2 * ts.diem3 == 0)
        return  false;
    return  true;
}
bool KetQuaTuyenSinh(THISINH *ts) {
    if (ts->diemTong < ts->diemChuan)
        return  false;
    if (ts->diem1 * ts->diem2 * ts->diem3 == 0)
        return  false;
    return  true;
}
void Xuat(THISINH ts) {
    if (KetQuaTuyenSinh(ts))
        cout << "Trung tuyen." << endl;
    else
        cout << "Khong trung tuyen." << endl;
}
void Xuat(THISINH *ts) {
    if (KetQuaTuyenSinh(ts))
        cout << "Trung tuyen." << endl;
    else
        cout << "Khong trung tuyen." << endl;
}
