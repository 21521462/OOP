//
//  XuLyPhuongTrinhBac2.cpp
//  Bai13
//
//  Created by Phuoc Thien Nguyen on 27/02/2022.
//

#include "PhuongTrinhBac2.h"

void Nhap(PT_BAC2 &pt) {
    do {
        cout << "Nhap a, b, c (a khac 0): ";
        cin >> pt.a >> pt.b >> pt.c;
    } while (pt.a == 0);
}
void Nhap(PT_BAC2 *pt) {
    do {
        cout << "Nhap a, b, c (a khac 0): ";
        cin >> pt->a >> pt->b >> pt->c;
    } while (pt->a == 0);
}
void TinhDelta(PT_BAC2 &pt) {
    pt.delta = pt.b * pt.b - 4 * pt.a * pt.c;
}
void TinhDelta(PT_BAC2 *pt) {
    pt->delta = pt->b * pt->b - 4 * pt->a * pt->c;
}
void Xuat(PT_BAC2 &pt) {
    if (pt.delta < 0)
        cout << "Phuong trinh vo nghiem." << endl;
    if (pt.delta == 0) {
        cout << "Phuong trinh co nghiem kep:" << endl;
        cout << "x1 = x2 = " << -pt.b / 2 * pt.a << endl;
    }
    if (pt.delta > 0) {
        cout << "Phuong trinh co hai nghiem phan biet:" << endl;
        cout << "x1 = " << (-pt.b + sqrt(pt.delta)) / 2 * pt.a << endl;
        cout << "x2 = " << (-pt.b - sqrt(pt.delta)) / 2 * pt.a << endl;
    }
}
void Xuat(PT_BAC2 *pt) {
    if (pt->delta < 0)
        cout << "Phuong trinh vo nghiem." << endl;
    if (pt->delta == 0) {
        cout << "Phuong trinh co nghiem kep:" << endl;
        cout << "x1 = x2 = " << -pt->b / 2 * pt->a << endl;
    }
    if (pt->delta > 0) {
        cout << "Phuong trinh co hai nghiem phan biet:" << endl;
        cout << "x1 = " << (-pt->b + sqrt(pt->delta)) / 2 * pt->a << endl;
        cout << "x2 = " << (-pt->b - sqrt(pt->delta)) / 2 * pt->a << endl;
    }
}
