#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // TODO: 创建用于存储字符串 "hello" 的空间
  // 提示：存储这个字符串我们需要多少字节？
  char hello_str[6];

  // TODO: 逐个存入每个字符
  // 提示：别忘了空字符结尾（null terminator）
  // 注意：字符使用单引号
  hello_str[0] = 'h';
  hello_str[1] = 'e';
  hello_str[2] = 'l';
  hello_str[3] = 'l';
  hello_str[4] = 'o';

  // TODO: 存入空字符结尾（null terminator）
  hello_str[5] = '\0';

  // 打印 hello_str
  printf("prints hello: %s\n", hello_str);

  // TODO: 打印 hello_str 的长度
  printf("length of hello: %lu\n", strlen(hello_str));

  // TODO: 创建用于存储字符串 "world" 的空间
  char world_str[6];

  // TODO: 填入类型
  // 注意：这会自动将字符串 "world" 存储在静态内存区
  //       但静态内存是不可变的，因此你可能需要将其复制
  //       到栈（stack）或堆（heap）
  char* static_world_str = "world";

  // TODO: 使用 strcpy 和 static_world_str 将 "world" 存入 world_str
  // 提示：strcpy 接受两个参数：
  //       第一个是目标地址，第二个是源地址
  strcpy(world_str, static_world_str);

  // 打印 world_str
  printf("prints world: %s\n", world_str);

  // 打印 world_str 的地址
  printf("address of world_str: %p\n", world_str);

  // TODO: 使用 world_str 计算字母 'r' 的地址
  char* ptr_to_r = world_str + 2;
  printf("address of 'r': %p\n", ptr_to_r);

  // TODO: 创建用于存储字符串 "hello world" 的空间
  char hello_world_str[12];

  // TODO: 使用 strcpy 和 hello_str 将
  //       字符串 "hello" 存入 hello_world_str
  strcpy(hello_world_str, hello_str);

  // TODO: 在正确索引处存入 "hello world" 的空格字符
  // 注意：空格与空字符结尾（null terminator）不同
  //       空字符结尾由 '\0' 表示
  *(hello_world_str + 5) = ' ';

  // TODO: 使用 strcpy、指针运算以及 world_str 将
  //       字符串 "world" 存入 hello_world_str
  strcpy(hello_world_str + 6, world_str);

  // 打印 hello_world_str
  printf("prints hello world: %s\n", hello_world_str);

  return 0;
}
