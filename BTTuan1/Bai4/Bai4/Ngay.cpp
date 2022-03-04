#include "Ngay.h"

void Nhap(NGAY &ng) {
    cout << "Nhap ngay thang nam: ";
    cin >> ng.dd >> ng.mm >> ng.yy;
}
void Nhap(NGAY *ng) {
    cout << "Nhap ngay thanh nam: ";
    cin >> ng->dd >> ng->mm >> ng->yy;
}
bool KiemTraNamNhuan(NGAY ng) {
    if (ng.yy % 4 == 0 && ng.yy % 100 != 0)
        return true;
    return false;
}
bool KiemTraTinhHopLe(NGAY ng) {
    switch (ng.mm) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (0 < ng.dd && ng.dd < 32)
                return true;
        case 4:
        case 6:
        case 9:
        case 11:
            if (0 < ng.dd && ng.dd < 31)
                return true;
        case 2:
            if (0 < ng.dd && ng.dd < (KiemTraNamNhuan(ng) ? 30 : 29))
                return true;
        default:
            return false;
    }
}
void NgayKeTiep(NGAY ng) {
    NGAY ng1;

    switch (ng.mm) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (ng.dd == 31)
                ng1 = {1, ng.mm + 1, ng.yy};
            else
                ng1 = {ng.dd + 1, ng.mm, ng.yy};
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (ng.dd == 30)
                ng1 = {1, ng.mm + 1, ng.yy};
            else
                ng1 = {ng.dd + 1, ng.mm, ng.yy};
            break;
        case 2:
            if (ng.dd == (KiemTraNamNhuan(ng) ? 29 : 28))
                ng1 = {1, ng.mm + 1, ng.yy};
            else
                ng1 = {ng.dd + 1, ng.mm, ng.yy};
            break;
        case 12:
            if (ng.dd == 31)
                ng1 = {1, 1, ng.yy + 1};
            else
                ng1 = {ng.dd + 1, ng.mm, ng.yy};
            break;
        default:
            break;
    }

    cout << "Ngay ke tiep la: ";
    Xuat(ng1);
}
void Xuat(NGAY ng) {
    cout << ng.dd << "/" << ng.mm << "/" << ng.yy << endl;
}
