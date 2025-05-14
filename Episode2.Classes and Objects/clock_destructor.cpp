// 文件名：clock_destructor.cpp
#include <iostream>
using namespace std;

class Clock {
public:
    Clock(int h, int m, int s);
    ~Clock();  // 析构函数声明

    void showTime();

private:
    int hour, minute, second;
};

// 构造函数
Clock::Clock(int h, int m, int s) : hour(h), minute(m), second(s) {
    cout << "Clock 对象创建：" << hour << ":" << minute << ":" << second << endl;
}

// 析构函数
Clock::~Clock() {
    cout << "Clock 对象销毁：" << hour << ":" << minute << ":" << second << endl;
}

// 显示时间
void Clock::showTime() {
    cout << hour << ":" << minute << ":" << second << endl;
}

// 主函数
int main() {
    Clock c1(10, 20, 30);
    {
        Clock c2(6, 59, 59);  // 嵌套作用域内创建对象
    } // c2 在这里自动析构

    return 0;
}
