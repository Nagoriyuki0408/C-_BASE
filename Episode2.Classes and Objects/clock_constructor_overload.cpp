// 文件名：clock_constructor_overload.cpp
#include <iostream>
using namespace std;

class Clock {
public:
    // 构造函数重载
    Clock();
    Clock(int h, int m);
    Clock(int h, int m, int s);

    void showTime();

private:
    int hour, minute, second;
};

// 三个构造函数定义
Clock::Clock() : hour(0), minute(0), second(0) {}
Clock::Clock(int h, int m) : hour(h), minute(m), second(0) {}
Clock::Clock(int h, int m, int s) : hour(h), minute(m), second(s) {}

// 显示时间
void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}

// 主函数
int main() {
    Clock c1;               // 默认构造函数
    Clock c2(12, 30);       // 两参数构造
    Clock c3(23, 59, 59);   // 三参数构造

    c1.showTime();
    c2.showTime();
    c3.showTime();

    return 0;
}
