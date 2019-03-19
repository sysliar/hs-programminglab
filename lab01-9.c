#define N 4
#define ABS(x) (((x) < 0) ? -(x) : (x))
#include <stdio.h>

struct Point {
	int x;
	int y;
};

void print_point(struct Point *point) {
	printf("(%d, %d)", point->x, point->y);
}

void main() {
	struct Point p[N] = { {1,2},{6,1},{3,4},{4,5} };
	struct Point P1, P2;
	int area;
	int i;

	for (i = 0; i < N; i++) {
		printf("p[%d] = ", i);
		print_point(&p[i]);
		printf("\n");
	}
	P1 = p[0];
	P2 = p[0];

	for ( i = 0; i < N; i++)
	{
		if (P1.x > p[i].x) P1.x = p[i].x;
		if (P1.y > p[i].y) P1.y = p[i].y;
		if (P2.x < p[i].x) P2.x = p[i].x;
		if (P2.y < p[i].y) P2.y = p[i].y;
	}


	printf("P1="); print_point(&P1);
	printf("P2="); print_point(&P2);

	area = (P2.x - P1.x)  * (P2.y - P1.y);

	printf(" ¸éÀû=%d\n", area);

}