#include <iostream>
#include <<iomanip>
#include <string>
using namespace std;

struct Student {
    string name;
    double chinese;
    double math;
    double english;
    double average;
};

int main() {
    int n;
    cout << "输入" << endl; // 增加“输入”提示
    cin >> n;

    Student stu[n];
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].chinese >> stu[i].math >> stu[i].english;
        stu[i].average = (stu[i].chinese + stu[i].math + stu[i].english) / 3;
    }

    cout << "输出" << endl; // 增加“输出”提示
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cout << left << setw(10) << stu[i].name 
             << setw(6) << stu[i].chinese 
             << setw(6) << stu[i].math 
             << setw(6) << stu[i].english 
             << setw(6) << stu[i].average;
        if (stu[i].average >= 90) {
            cout << "Excellent";
        }
        cout << endl;
    }
    return 0;
}