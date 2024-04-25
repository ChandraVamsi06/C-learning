// Call by reference in structures
// Sending a structure pointer to a function
#include <stdio.h>
#include <math.h>
struct point {
	float x;
	float y;
};
void change(struct point *p) {
	p->x = 400;
}
int main()
{
	struct point p1 = {4.5, 6.7};
	printf("Before Change: %f\n", p1.x);
	change(&p1);
	printf("After Change: %f", p1.x);
}
