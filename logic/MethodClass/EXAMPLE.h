
/*
	此文件为MethodClass的示例，用于说明编写规范
	1. 文件名需为类名，并且类的声明和定义要隔开(如：Example.h 和 Example.cpp, 头文件声明，源文件定义)
	2. 关于using namespace std;
		就按你的习惯来。可加可不加
	3. 关于预处理#ifndef #define #endif 这三条
		这是为了避免多次编译，关于此点可百度究其原因
		这里说明#ifndef 和 #define 后面的名称规范：
			类名大写_H
		其实也就是将该文件名（类名.h）（如Inventory.h)的英文字母全替换对应的大写，并将"."替换为"_" (如INVENROTY_H)
	4. 命名规范
		1) 必须全英文，不能为中文拼英
		2) 变量名函数名采用驼峰命名法，如 linkedBookInven; bookTitle。 
		   宏定义的名称需为大写，采用下划线命名法，如#define AMOUNT int
		3) 类名采用大驼峰命名法 如Inventory; BookLib;
	5. 使用关键词 const
		1) 修饰函数。 在类中，若成员函数的定义中没有修改数据成员的值，就需要在函数签名后面添加const;
			如：
				修改前： void print();
				修改后： void print() const;
		2) 函数形参使用const。 再不涉及修改形参的数据的时候 请使用const 和引用类型
			如：
				修改前： void addBook(Book book, int num);
				修改后： void addBook(const Book& book, int num);
				解释： 因为addBook就是添加书籍，对形参做"只读"行为。 并且如此规范，可以省去传入的参数和形参之间的拷贝时间cost和内存cost
		3) 欲了解更多关于const和& 自行百度: 左值，右值，移动语义相关内容
	6. 数据导出导入
		需要实现数据的导入和导出，具体实现见已经实现的例子如"Inventory.h"
	7. 注释问题
		不需要对每条语句做注释，主要的注释在头文件声明部分 注释说明该成员函数/数据成员的作用是什么。当然，如果你有一个容易理解的函数名/变量名，就不需要注释
*/

#ifndef EXAMPLE_H
#define EAMXPLE_H
//#include XXXX 包含需要的头文件

//以下两个头文件必须添加-> 为了实现在指定目录下创建文件/文件夹
#include <filesystem>
#include <fstream>

class Example
{
private:

	//一些需要的数据成员
	/* ... */

	//以下两条必须添加
	std::filesystem::path currentPath = std::filesystem::path(__FILE__);
	std::filesystem::path targetDir = currentPath.parent_path().parent_path().parent_path();


public:
	//以下一条必须添加
	// 注意 需要自己修改""里面的内容 例如 "src/Inventory" "src/Intention" 第二个词根据你的类名来修改
	const std::filesystem::path path = targetDir / "src/Example";

	Example();
	~Example();

	//一些对策题目要求的函数
	/* ... */

	//一些用于屏幕输出的函数
	// 如： print(); 或toString();
	// 但建议两个都是实现，但是注意不要让它们两个中一个函数定义里面调用另外一个函数
	/* ... */

	/*
	 以下两条必须添加，其中，在	void writeToFile() const; 的定义中需要首先添加std::filesystem::create_directories(path);
	 其目的是为了创建path指定的文件夹
	*/
	void writeToFile() const;
    void initFromFile(std::filesystem::path ph);
};

#endif