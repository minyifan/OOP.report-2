#include <iostream>
#include <<iomanip>
using namespace std;

// 内联函数：计算平方
inline double square(double x) {
    return x * x;
}

// 带默认参数的函数：计算幂
double power(double base, int exponent = 2) {
    double result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// 重载函数：double类型运算
double calc(double a, double b, char op) {
    switch (op) {
        case '+': 
            cout << a << " " << op << " " << b << " = " << (a + b) << endl;
            return a + b;
        case '-': 
            cout << a << " " << op << " " << b << " = " << (a - b) << endl;
            return a - b;
        case '*': 
            cout << a << " " << op << " " << b << " = " << (a * b) << endl;
            return a * b;
        case '/':
            if (b == 0) {
                cout << "Error: divide by zero" << endl;
                return 0;
            }
            cout << a << " " << op << " " << b << " = " << (a / b) << endl;
            return a / b;
        default: 
            return 0;
    }
}

// 重载函数：int类型运算
double calc(int a, int b, char op) {
    switch (op) {
        case '+': 
            cout << a << " " << op << " " << b << " = " << (a + b) << endl;
            return a + b;
        case '-': 
            cout << a << " " << op << " " << b << " = " << (a - b) << endl;
            return a - b;
        case '*': 
            cout << a << " " << op << " " << b << " = " << (a * b) << endl;
            return a * b;
        case '/':
            if (b == 0) {
                cout << "Error: divide by zero" << endl;
                return 0;
            }
            cout << a << " " << op << " " << b << " = " << (double)a / b << endl;
            return (double)a / b;
        default: 
            return 0;
    }
}

int main() {
    double num1, num2;
    char op;
    cout << "输入" << endl;
    cin >> num1 >> num2 >> op;

    cout << "输出" << endl;
    cout << fixed << setprecision(2);
    cout << "square(" << num1 << ") = " << square(num1) << endl;
    cout << "power(" << num1 << ",3) = " << power(num1, 3) << endl;
    // 直接调用calc，不再判断op是否为/
    calc(num1, num2, op);

    return 0;
}