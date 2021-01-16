# LearningMaths
### 一、特性
这是一个用 C++ 编写的一个简单的帮助小学生学习加减乘除的小程序。

### 二、使用
#### 1.直接下载
<a href = "https://github.com/CristimeCai/LearningMaths/releases">在此处下载</a> Release 或 Preview 版本的 exe 文件并运行

#### 2. 编译运行
1. 使用 Git clone 或直接下载源码包。
    ```bash
    git clone "https://github.com/CristimeCai/LearningMaths.git"
    ```
    如果你是下载zip包的，请解压。
2. 安装了 **Visual Studio 2019** 的朋友请直接双击打开 *LearningMaths.sln* 并按 *Ctrl+F5* 运行。
3. 如果你是使用 **Linux/MacOS** 的小伙伴，请先安装 *gcc/g++* <del>(安装过的小伙伴可以跳过)</del>

    以 *Ubuntu 18.04* 为例：
    ```bash
    sudo apt install gcc g++ -y
    ```
    
    然后使用 *vim* 编辑 *Math.cpp* 的第十三行
    
    将
    ```c++
    system("cls")
    ```
    改为
    ```c++
    system("clear")
    ```

    然后运行以下指令：
    ```bash
    g++ Math.cpp -o Math
    ```

    最后，运行程序：
    ```bash
    .\Math
    ```

### 三、后记
如果您发现使用中出现 Bug，请到 <a href = "https://github.com/CristimeCai/LearningMaths/issues">这里</a> 提 Issue，我会定期查看并修复 Bug。

作者：Cristime Cai

邮箱：thecristime@outlook.com