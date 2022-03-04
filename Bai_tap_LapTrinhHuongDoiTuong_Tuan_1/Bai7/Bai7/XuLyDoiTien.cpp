//
//  DoiTien.cpp
//  Bai7
//
//  Created by Phuoc Thien Nguyen on 25/02/2022.
//

#include "DoiTien.h"

void Nhap(MENHGIA &mg) {
    cout << "Nhap so tien: ";
    cin >> mg.sotien;
}
void Nhap(MENHGIA *mg) {
    cout << "Nhap so tien: ";
    cin >> mg->sotien;
}
void TinhSoToTien(MENHGIA &mg) {
    int t = mg.sotien;
    mg.namTram = t / 500000;
    t %= 500000;
    mg.haiTram = t / 200000;
    t %= 200000;
    mg.motTram = t / 100000;
    t %= 100000;
    mg.namMuoi = t / 50000;
}
void TinhSoToTien(MENHGIA *mg) {
    int t = mg->sotien;
    mg->namTram = t / 500000;
    t %= 500000;
    mg->haiTram = t / 200000;
    t %= 200000;
    mg->motTram = t / 100000;
    t %= 100000;
    mg->namMuoi = t / 50000;
}
void Xuat(MENHGIA mg) {
    cout << "So to menh gia 500.000: " << mg.namTram << endl;
    cout << "So to menh gia 200.000: " << mg.haiTram << endl;
    cout << "So to menh gia 100.000: " << mg.motTram << endl;
    cout << "So to menh gia 50.000: " << mg.namMuoi << endl;
}
void Xuat(MENHGIA *mg) {
    cout << "So to menh gia 500.000: " << mg->namTram << endl;
    cout << "So to menh gia 200.000: " << mg->haiTram << endl;
    cout << "So to menh gia 100.000: " << mg->motTram << endl;
    cout << "So to menh gia 50.000: " << mg->namMuoi << endl;
}
