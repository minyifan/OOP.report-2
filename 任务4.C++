#include <iostream>
using namespace std;

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x, y;
    cout << "输入" << endl; // 增加“输入”提示
    cin >> x >> y;

    cout << "输出" << endl; // 增加“输出”提示
    cout << "Before swap: x=" << x << ", y=" << y << endl;
    swap(x, y);
    cout << "After swap: x=" << x << ", y=" << y << endl;
    return 0;
}