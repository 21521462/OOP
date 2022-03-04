//
//  main.cpp
//  Bai20
//
//  Created by Phuoc Thien Nguyen on 27/02/2022.
//

#include "SoNguyen.h"

int main() {
    SONGUYEN sn1, sn2;
    
    Nhap(sn1);
    Nhap(&sn2);
    
    KiemTraSoNguyenTo(sn1);
    KiemTraSoNguyenTo(&sn2);
    
    KiemTraSoChinhPhuong(sn1);
    KiemTraSoChinhPhuong(&sn2);
    
    KiemTraSoHoanThien(sn1);
    KiemTraSoHoanThien(&sn2);
    
    KiemTraSoDoiXung(sn1);
    KiemTraSoDoiXung(&sn2);
    
    Xuat(sn1);
    Xuat(&sn2);
    
    return 0;
}
