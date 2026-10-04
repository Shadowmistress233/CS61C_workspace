#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  // 创建一个值为 5 的整数
  // 注意：int16_t 是一种占用 2 字节内存的数值数据类型
  int16_t x = 5;

  // TODO: 创建一个大小为 4 的 int16_t 数组
  int16_t some_array[4];
  printf("address of the start of the array: %p\n", some_array);

  // TODO: 计算索引为 2 的元素的地址（索引从 0 开始）
  int16_t* ptr_to_idx_2 = some_array + 2;
  printf("address of index 2: %p\n", ptr_to_idx_2);

  // TODO: 使用 ptr_to_idx_2 将值 10 存入索引 2 处
  *ptr_to_idx_2 = 10;

  // TODO: 打印索引 2 处的值
  // 提示：这个填空处应该与上一个填空处相同
  //       请不要硬编码为 10
  printf("value at index 2: %d\n", *ptr_to_idx_2);

  return 0;
}
