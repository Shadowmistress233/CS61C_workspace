#include <stdio.h>
#include <stdlib.h>

// 结构体（struct）允许在单个变量中容纳不同类型的数据项
// 结构体定义可用于在程序中声明结构体变量
// 结构体定义通常写在函数外部
struct Student {
    int id;
    char* name;
};

int main() {
  // TODO: 声明一个类型为 struct Student 的变量 student
  // 注意：这个结构体存储在栈（stack）上
  struct Student student;

  // TODO: 打印 struct Student 的大小
  // 虽然现在看起来可能有些突兀，但以后会非常有用！
  // 提示：有一个运算符可以为你计算这个大小！
  printf("Size of a struct Student: %lu bytes\n", sizeof(struct Student));

  // TODO: 将 student 的 id 字段设置为 5
  // 提示：点运算符（.）用于访问结构体的字段
  student.id = 5;

  // TODO: 打印 student 的 id 字段
  printf("Student's ID: %d\n", student.id);

  return 0;
}
