#include <iostream>
using namespace std;
//Hỗn số là  một số thập phân được biểu diễn dưới dạng một phần nguyên và một phần phân số.
struct HonSo {
    int a, b, c;
};

void nhap_hon_so(HonSo& hs) {
    cout << "Nhap phan nguyen: ";
    cin >> hs.a;
    cout << "Nhap phan thap phan: ";
    cin >> hs.b;
    cout << "Nhap mau so: ";
    cin >> hs.c;
}

void xuat_hon_so(HonSo hs) {
    cout << hs.a << " + " << hs.b << "/" << hs.c << endl;
}

int main() {
    HonSo hs;
    nhap_hon_so(hs);
    xuat_hon_so(hs);
    return 0;
}

