//
//  main.cpp
//  Bai11
//
//  Created by Phuoc Thien Nguyen on 26/02/2022.
//

#include "ThiSinh.h"

int main() {
    THISINH ts1, ts2;
    
    Nhap(ts1);
    Nhap(&ts2);
    
    TinhDiemTong(ts1);
    TinhDiemTong(&ts2);
    
    Xuat(ts1);
    Xuat(&ts2);
    
    return  0;
}
