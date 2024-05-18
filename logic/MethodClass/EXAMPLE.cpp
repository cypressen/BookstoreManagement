#include"EXAMPLE.h"
Example::Example(){
	/* ... */
}

Example::~Example() {
	/* ... */
}
/*
	实现其他成员函数
*/

void Example::writeToFile() const {
	std::filesystem::create_directories(path);

	/* ... */
}

void Example::initFromFile(std::filesystem::path ph) {

	/* ... */
}

//当然，你可以在这里实现一些辅助函数 这些函数并不一定属于Example类，可以为全局函数