//
//  main.cpp
//  Bai13
//
//  Created by Phuoc Thien Nguyen on 27/02/2022.
//

#include "PhuongTrinhBac2.h"

int main() {
    PT_BAC2 pt1, pt2;
    
    Nhap(pt1);
    Nhap(&pt2);
    
    TinhDelta(pt1);
    TinhDelta(&pt2);
    
    Xuat(pt1);
    Xuat(&pt2);
    
    return 0;
}
