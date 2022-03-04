//
//  main.cpp
//  Bai4
//
//  Created by Phuoc Thien Nguyen on 01/03/2022.
//

#include "HocSinh.h"

int main() {
    HOCSINH hs1, hs2;
    
    cout << "Nhap hoc sinh 1" << endl;
    Nhap(hs1);
    cout << "Nhap hoc sinh 2" << endl;
    Nhap(&hs2);
    
    XepLoai(hs1);
    XepLoai(&hs2);
    
    cout << "Hoc sinh 1" << endl;
    Xuat(hs1);
    cout << "Hoc sinh 2" << endl;
    Xuat(&hs2);
    
    return 0;
}
