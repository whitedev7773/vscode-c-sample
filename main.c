#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Hello World From VSCode C Sample\n");
  printf("ECU-KR ���ڵ����� �����߽��ϴ�.\n");
  printf(".vscode ������ ������ ������. �������� ����Ǵ� ���������Դϴ�.\n");

  printf("\n");

  // ���� ���
  printf("argc = %d\n\n", argc);
  for (int i = 0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }
  return 0;
}