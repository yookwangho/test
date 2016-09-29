#include <stdio.h>

int main(void)
{
	enum day {sun,mon,tue,wed,thu,fri,sat};
	printf("일요일 상수: %d\n", sun);
	printf("수요일 상수: %d\n", wed);

	enum shape {point,line,tri=3,rect,octa=8,circle};
	printf("line:%d,rect:%d,circle:%d\n", line, rect, circle);

	enum bool{ false,true };
	enum pl {c=1972, cpp-1983, java=1995, csharp=2000};
	printf("false:%d,cpp:%d,csharp:%d\n", false, cpp, csharp);

	return 0;
}