//
//  XuLyDoanSo.cpp
//  Bai15
//
//  Created by Phuoc Thien Nguyen on 27/02/2022.
//

#include "DoanSo.h"

int PhatSinhSoNguyen(int min, int max) {
    srand((int)time(0));
    return min + rand() % (max + 1 - min);
}
void Nhap(int &n) {
    cout << "Moi ban doan (tu 1 den 10): ";
    cin >> n;
}
void Nhap(int *n) {
    cout << "Moi ban doan (tu 1 den 10): ";
    cin >> *n;
}
void DoanSo(int n) {
    int m = PhatSinhSoNguyen(1, 10);
    while (n != m) {
        cout << "Doan sai roi." << endl;
        cout << "Cho doan lai lan nua." << endl;
        Nhap(n);
    }
    cout << "Chuc mung." << endl;
}
