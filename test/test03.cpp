#include <iostream>
using namespace std;
//
//块与作用域

int main()
{
  int layer = 1;
  cout << "layer的值为：" << layer << endl; // 1
  {
    cout << "layer的值为：" << layer << endl; // 1
    int layer = 2;
    cout << "layer的值为：" << layer << endl; // 2
    {
      cout << "layer的值为：" << layer << endl; // 2
      int layer = 3;
      cout << "layer的值为：" << layer << endl; // 3
    }
    cout << "layer的值为：" << layer << endl; // 2
    {
      cout << "layer的值为：" << layer << endl; // 2
      int layer = 3;
      cout << "layer的值为：" << layer << endl; // 3
    }
    cout << "layer的值为：" << layer << endl; // 2
  }
  cout << "layer的值为：" << layer << endl; // 1
  return 0;
}
