#include<stdio.h>
#include "Triangle.h"

int main(int argc, char* argv[])
{
	struct Triangle t1, result;
	t1.height = 3;
	t1.width = 4;

	result = Triangle_area(t1);
	printf("%d \n", result.area);

	return 0;
}