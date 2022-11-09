#include <iostream>
using namespace std;
//全局变量

int num = 3; //全局变量 num

int main()
{
  cout << "num的值为：" << num << endl;
  int num = 2; //局部变量num
  cout << "num的值为：" << num << endl;
  return 0;
}
