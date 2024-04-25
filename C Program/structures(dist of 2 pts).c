#include <stdio.h>
#include <math.h>
struct point {
	float x;
	float y;
};
void get_dist(struct point p, struct point q) {
	printf("%0.2f\n", sqrt(pow(q.x - p.x, 2) + pow(q.y - p.y, 2)));
}
int main()
{
	struct point p1 = {4.5, 6.7};
	struct point p2 = {7.0, 9.5};
	struct point p3 = {11.5, 2.3};
	struct point p4 = {3.5, 21.6};
	get_dist(p1, p2);
	get_dist(p2, p3);
	get_dist(p3, p4);
	get_dist(p4, p1);
}
