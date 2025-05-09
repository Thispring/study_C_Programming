#include <stdio.h>

/*
같은 문자열 상수를 여러 번 사용할 때:
컴파일러는 같은 문자열을 여러 번 사용한 경우 하나의 문자열만 메모리에 저장하고 그 주소를 공유하도록 번역합니다.
따라서 같은 문자열을 계속 사용해도 프로그램의 크기가 커지는 일은 없습니다.
(핵심은 새로 데이터를 만드는 게 아닌, 하나의 데이터의 주소를 공유하고 그 값을 사용한다는 것)

단, 컴파일러에 따라 다르게 구현될 수 있음
*/
int main()
{
    char *pa = "apple";
    char *pb = "apple";

    printf("%p, %p", pa, pb);
    
    return 0;
}