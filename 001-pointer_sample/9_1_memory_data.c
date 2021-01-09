#include <stdio.h>

void main()
{
    int a, b;
    int *p;       //pointer p를 선언

    a = 123;
    p = &a;      //a의 주소값 
    b = *p;      //p에는 a의 주소값이 들어있고, *p에는 a의 주소값에 있는 값이 들어 있다..

    printf("\n 현재 포인터 p는 변수 a의 번지와 동일하다\n");
    printf("a=%d  b=%d *p=%d\n", a,b,*p);

    a = 200;
    b = 300;
    printf("\n 현재 포인터 p는 변수 a의 번지와 동일하다\n");
    printf("a=%d  b=%d *p=%d\n", a,b,*p);

    p = &b;
    printf("\n 현재 포인터 p는 변수 a의 번지와 동일하다\n");
    printf("a=%d  b=%d *p=%d\n", a,b,*p);

    
}
