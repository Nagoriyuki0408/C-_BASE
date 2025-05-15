# 📘 C++ 基础学习仓库 | C-_BASE

> 🌸 本仓库旨在记录和展示 C++ 语言的基础知识与语法，通过丰富的示例帮助初学者掌握 C++ 编程的核心概念。

---

## 🧠 项目简介

本仓库系统整理了 C++ 基础语法及其典型应用场景，通过逐章逐节的实践代码，帮助学习者从零开始扎实掌握 C++ 的核心能力。适合以下人群：

- 🎓 C++ 初学者
- 🧑‍💻 计算机相关专业学生
- 💡 希望复习 C++ 语法的开发者

本项目内容包含但不限于：

- ✅ 函数定义与重载
- ✅ 类与对象构建
- ✅ 构造函数与析构函数
- ✅ 成员函数、静态成员
- ✅ 继承与多态
- ✅ 运算符重载
- ✅ 模板与泛型
- ✅ 输入输出流
- ✅ STL 容器基础
- ✅ 异常处理机制

---

## 🗂️ 项目结构


```
C-\_BASE/
├── .vscode/                             # VSCode 配置文件
├── Episode1.Function/                   # 函数语法及调用演示
│   ├── HelloWorld.cpp
│   └── ... 更多函数示例
├── Episode2.Classes and Objects/        # 类与对象的相关代码
│   ├── StudentClass.cpp
│   └── ... 更多类与对象示例
├── Episode3.Inheritance/                # （预留）继承相关
├── Episode4.Polymorphism/               # （预留）多态相关
├── README.md                            # 项目说明文档

```

---

## 🛠️ 使用方式

### ✅ 克隆仓库

```bash
git clone https://github.com/Nagoriyuki0408/C-_BASE.git
cd C-_BASE
````

### ✅ 编译运行

使用 g++ 或 clang++：

```bash
g++ Episode1.Function/HelloWorld.cpp -o hello
./hello
```

使用 Visual Studio：

* 打开 `.sln` 项目文件或手动添加 `.cpp` 文件到工程中。
* 点击“开始”运行。

---

## 🌟 示例展示

### 🧩 示例：Hello World 函数

```cpp
#include <iostream>
using namespace std;

void sayHello() {
    cout << "Hello, C++ world!" << endl;
}

int main() {
    sayHello();
    return 0;
}
```

> 输出结果：

```
Hello, C++ world!
```

---

## 📚 推荐学习资源

* 📘《C++ Primer》（第五版）
* 📗《Effective C++》by Scott Meyers
* 🌐 [菜鸟教程 C++ 教程](https://www.runoob.com/cplusplus/cpp-tutorial.html)
* 🌐 [CppReference 官方文档](https://en.cppreference.com/)

---

## 🤝 贡献方式

我们欢迎所有对 C++ 感兴趣的小伙伴参与本项目：

1. Fork 本仓库
2. 创建新分支 (`git checkout -b feature/your-feature`)
3. 提交更改 (`git commit -am 'Add awesome feature'`)
4. 推送分支 (`git push origin feature/your-feature`)
5. 创建 Pull Request 并描述你的修改内容～

---

## 📄 License

本项目使用 [MIT License](LICENSE) 开源协议。

---

## 👩‍💻 作者信息

由 [Nagoriyuki0408](https://github.com/Nagoriyuki0408) 创建和维护。

> 如果你觉得这个项目对你有帮助，请不要忘记 ⭐Star 支持一下喵\~！

