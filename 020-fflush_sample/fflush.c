#include <stdio.h>

void main()
{
    char studentNum[6];
    char name[30];

    fputs("학번을 입력하세요 : ", stdout);
    fgets( studentNum, sizeof(studentNum), stdin);

    fputs("이름을 입력하세요 : ", stdout);
    fgets( name, sizeof(name), stdin);

    printf("학번 : %s\n", studentNum);
    printf("이름 : %s\n", name);

}
