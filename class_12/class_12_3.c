#include <stdio.h>

/*
문자열을 그냥 입력하면 자동할당문자열로 인해 상수가 되지만(컴파일러에 따라서 주소만 바뀔 수 있고 값은 바뀔 수 없다.) 
,배열을 만들어 입력했을 때 변경이가능하다.
*/
// scanf 함수를 사용한 문자열 입력
int main()
{
    char str[80];

    printf("문자열 입력: ");
    scanf("%s", str);
    printf("첫 번째 단어: %s\n", str);
    scanf("%s", str);
    printf("버퍼에 남아 있는 두 번째 단어: %s\n", str);

    return 0;
    // 버퍼를 사용하는 scanf는 문자열을 저장 할 때, 중간에 공백, 탭, 개행 문자가 있으면 그 이전 까지 저장합니다.
}