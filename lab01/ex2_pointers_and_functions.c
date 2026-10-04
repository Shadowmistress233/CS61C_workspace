#include <stdio.h>

void add_one(int input) {
  input += 1;
}

// TODO: 创建一个指向 input 的指针
void add_one_pointer(int* input) {
  // TODO: 将 input 所指向的整数加 1
  *input += 1;
}

// TODO: 创建一个指向指针的指针（二级指针）作为 input
void add_one_double_ptr(int** input) {
  // TODO: 将 input 二级指针最终指向的整数加 1
  **input += 1;
}

int main() {
  // 将 x（一个整数）赋值为 5
  int x = 5;

  // 对 x 调用 add_one
  add_one(x);

  // 这一行应该打印 5
  // 为什么没有生效？
  printf("add_one: %d\n", x);

  // 我们来尝试使用 add_one_pointer

  // TODO: 使用 add_one_pointer 来递增 x
  // 提示：比较 x 的类型与 add_one_pointer 参数的类型
  add_one_pointer(&x);

  // 这一行应该打印 6
  printf("add_one_pointer: %d\n", x);
  
  // TODO: 将指向 x 的指针保存到 y 中
  int* y = &x;

  // TODO: 使用我们刚刚创建的指针，调用 add_one_double_ptr 再次递增 x
  add_one_double_ptr(&y);

  // 这一行应该打印 7
  printf("add_one_double_ptr: %d\n", x);

  return 0;
}
