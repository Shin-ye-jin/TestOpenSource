#pragma once

#include "Triangle.h"

struct Triangle Triangle_area(struct Triangle t1)
{
	struct Triangle result;
	result.area = (t1.height * t1.width) / 2;
	return result;
}