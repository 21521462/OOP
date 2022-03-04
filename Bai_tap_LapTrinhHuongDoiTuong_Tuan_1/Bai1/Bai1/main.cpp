//
//  main.cpp
//  Bai1
//
//  Created by Phuoc Thien Nguyen on 28/02/2022.
//

#include "HinhTron.h"

int main() {
    HINHTRON ht1, ht2;
    
    cout << "Nhap hinh tron 1" << endl;
    Nhap(ht1);
    cout << "Nhap hinh tron 2" << endl;
    Nhap(&ht2);
    
    TinhChuVi(ht1);
    TinhChuVi(&ht2);
    TinhDienTich(ht1);
    TinhDienTich(&ht2);
    
    cout << "Hinh tron 1" << endl;
    Xuat(ht1);
    cout << "Hinh tron 2" << endl;
    Xuat(ht2);
    
    return 0;
}
