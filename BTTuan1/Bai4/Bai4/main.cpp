#include "Ngay.h"

int main() {
    NGAY ng;

    Nhap(ng);

    if(KiemTraTinhHopLe(ng))
        NgayKeTiep(ng);
    else
        cout << "Ngay khong hop le." << endl;

    return 0;
}
