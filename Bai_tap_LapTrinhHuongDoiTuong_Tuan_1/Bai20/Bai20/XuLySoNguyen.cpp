//
//  XuLySoNguyen.cpp
//  Bai20
//
//  Created by Phuoc Thien Nguyen on 27/02/2022.
//

#include "SoNguyen.h"

void Nhap(SONGUYEN &sn) {
    cout << "Nhap so nguyen: ";
    cin >> sn.giaTri;
}
void Nhap(SONGUYEN *sn) {
    cout << "Nhap so nguyen: ";
    cin >> sn->giaTri;
}
void KiemTraSoNguyenTo(SONGUYEN &sn) {
    if (sn.giaTri < 2)
        sn.nguyenTo = false;
    else {
        for (int i = 2; i * i <= sn.giaTri; i++) {
            if (sn.giaTri % i == 0) {
                sn.nguyenTo = false;
                return;
            }
        }
        sn.nguyenTo = true;
    }
}
void KiemTraSoNguyenTo(SONGUYEN *sn) {
    if (sn->giaTri < 2)
        sn->nguyenTo = false;
    else {
        for (int i = 2; i * i <= sn->giaTri; i++) {
            if (sn->giaTri % i == 0) {
                sn->nguyenTo = false;
                return;
            }
        }
        sn->nguyenTo = true;
    }
}
void KiemTraSoChinhPhuong(SONGUYEN &sn) {
    if ((int)sqrt(sn.giaTri) == sqrt(sn.giaTri))
        sn.chinhPhuong = true;
    else
        sn.chinhPhuong = false;
}
void KiemTraSoChinhPhuong(SONGUYEN *sn) {
    if ((int)sqrt(sn->giaTri) == sqrt(sn->giaTri))
        sn->chinhPhuong = true;
    else
        sn->chinhPhuong = false;
}
void KiemTraSoHoanThien(SONGUYEN &sn) {
    int s = 1;
    for (int i = 2; i * i < sn.giaTri; i++) {
        if (sn.giaTri % i == 0)
            s += (i + sn.giaTri / i);
    }
    if (s == sn.giaTri)
        sn.hoanThien = true;
    else
        sn.hoanThien = false;
}
void KiemTraSoHoanThien(SONGUYEN *sn) {
    int s = 1;
    
    for (int i = 2; i * i < sn->giaTri; i++) {
        if (sn->giaTri % i == 0)
            s += (i + sn->giaTri / i);
    }
    if (s == sn->giaTri)
        sn->hoanThien = true;
    else
        sn->hoanThien = false;
}
void KiemTraSoDoiXung(SONGUYEN &sn) {
    int n = sn.giaTri, a[MAX], i = 0;
    sn.soChuSo = 0;
    
    while (n > 0) {
        sn.soChuSo++;
        a[i] = n % 10;
        i++;
        n /= 10;
    }
    for (i = 0; i < sn.soChuSo / 2; i++) {
        if (a[i] != a[sn.soChuSo - i - 1]) {
            sn.doiXung = false;
            return;
        }
    }
    sn.doiXung = true;
}
void KiemTraSoDoiXung(SONGUYEN *sn) {
    int n = sn->giaTri, a[MAX], i = 0;
    sn->soChuSo = 0;
    
    while (n > 0) {
        sn->soChuSo++;
        a[i] = n % 10;
        i++;
        n /= 10;
    }
    for (i = 0; i < sn->soChuSo / 2; i++) {
        if (a[i] != a[sn->soChuSo - i - 1]) {
            sn->doiXung = false;
            return;
        }
    }
    sn->doiXung = true;
}
void Xuat(SONGUYEN sn) {
    if (sn.nguyenTo)
        cout << sn.giaTri << " la so nguyen to." << endl;
    else
        cout << sn.giaTri << " khong la so nguyen to." << endl;
    if (sn.chinhPhuong)
        cout << sn.giaTri << " la so chinh phuong." << endl;
    else
        cout << sn.giaTri << " khong la so chinh phuong." << endl;
    if (sn.hoanThien)
        cout << sn.giaTri << " la so hoan thien." << endl;
    else
        cout << sn.giaTri << " khong la so hoan thien." << endl;
    if (sn.doiXung)
        cout << sn.giaTri << " la so doi xung." << endl;
    else
        cout << sn.giaTri << " khong la so doi xung." << endl;
}
void Xuat(SONGUYEN *sn) {
    if (sn->nguyenTo)
        cout << sn->giaTri << " la so nguyen to." << endl;
    else
        cout << sn->giaTri << " khong la so nguyen to." << endl;
    if (sn->chinhPhuong)
        cout << sn->giaTri << " la so chinh phuong." << endl;
    else
        cout << sn->giaTri << " khong la so chinh phuong." << endl;
    if (sn->hoanThien)
        cout << sn->giaTri << " la so hoan thien." << endl;
    else
        cout << sn->giaTri << " khong la so hoan thien." << endl;
    if (sn->doiXung)
        cout << sn->giaTri << " la so doi xung." << endl;
    else
        cout << sn->giaTri << " khong la so doi xung." << endl;
}
