#include <iostream>
#include <cctype>
using namespace std;

int countVowels(const char* p) {
    int count = 0;
    while (*p != '\0') {
        char c = tolower(*p);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        p++;
    }
    return count;
}

int main() {
    char str[100];
    cout << "输入" << endl; // 增加“输入”提示
    cin.getline(str, 100);
    
    cout << "输出" << endl; // 增加“输出”提示
    cout << "Number of vowels: " << countVowels(str) << endl;
    return 0;
}