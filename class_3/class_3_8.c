#include <stdio.h>

int main()
{
    char ch;

    printf("문자 입력: ");
    scanf("%c", &ch);
    printf("%c문자의 아스키 코드 값은 %d 입니다.\n", ch, ch);
    
    return 0;
}