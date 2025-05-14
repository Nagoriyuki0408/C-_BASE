// 文件名：clock_basic.cpp
#include <iostream>
using namespace std;

// 定义 Clock 类
class Clock {
public:
    // 构造函数（带参数）
    Clock(int newH, int newM, int newS);

    // 默认构造函数（委托给带参构造函数）
    Clock();

    // 设置时间
    void setTime(int newH, int newM, int newS);

    // 显示时间
    void showTime();

private:
    int hour;
    int minute;
    int second;
};

// 构造函数定义
Clock::Clock(int newH, int newM, int newS) : hour(newH), minute(newM), second(newS) {}

// 默认构造函数定义
Clock::Clock() : Clock(0, 0, 0) {}

// 设置时间函数定义
void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

// 显示时间函数定义
void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}

// 主函数
int main() {
    Clock c1(8, 10, 0);  // 使用带参构造
    c1.showTime();

    Clock c2;            // 使用默认构造
    c2.showTime();

    c2.setTime(12, 30, 45);
    c2.showTime();

    return 0;
}
