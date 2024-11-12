#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Hello World From VSCode C Sample\n");
  printf("ECU-KR 인코딩으로 생성했습니다.\n");
  printf(".vscode 폴더는 지우지 마세요. 폴더별로 적용되는 설정파일입니다.\n");

  printf("\n");

  // 인자 출력
  printf("argc = %d\n\n", argc);
  for (int i = 0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }
  return 0;
}