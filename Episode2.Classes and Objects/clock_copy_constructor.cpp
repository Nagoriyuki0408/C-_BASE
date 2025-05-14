// 文件名：clock_copy_constructor.cpp
#include <iostream>
using namespace std;

class Clock {
public:
    Clock(int h, int m, int s);
    Clock(const Clock& c);  // 复制构造函数

    void showTime();

private:
    int hour, minute, second;
};

// 构造函数
Clock::Clock(int h, int m, int s) : hour(h), minute(m), second(s) {}

// 复制构造函数
Clock::Clock(const Clock& c) {
    hour = c.hour;
    minute = c.minute;
    second = c.second;
    cout << "复制构造函数被调用！" << endl;
}

// 显示时间
void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}

// 主函数
int main() {
    Clock c1(1, 2, 3);
    Clock c2 = c1;  // 触发复制构造函数

    c1.showTime();
    c2.showTime();

    return 0;
}
