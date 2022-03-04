//
//  main.cpp
//  Bai2
//
//  Created by Phuoc Thien Nguyen on 01/03/2022.
//

#include "HinhChuNhat.h"

int main() {
    HINHCHUNHAT hcn1, hcn2;
    
    cout << "Nhap hinh chu nhat 1" << endl;
    Nhap(hcn1);
    cout << "Nhap hinh chu nhat 2" << endl;
    Nhap(&hcn2);
    
    TinhChuVi(hcn1);
    TinhChuVi(&hcn2);
    
    TinhDienTich(hcn1);
    TinhDienTich(&hcn2);
    
    cout << "Hinh chu nhat 1" << endl;
    Xuat(hcn1);
    cout << "Hinh chu nhat 2" << endl;
    Xuat(&hcn2);
    
    return 0;
}
