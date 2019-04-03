//  1학기 프로그래밍랩
// Lab4-4 구조체 연습
#include <stdio.h>
typedef struct complex {
	int real;
	int img;
} COMPLEX;
#define ABS(x) ((x>0) ? (x) : (-x))

void print_complex(COMPLEX *x)
{
	if (x->img < 0) printf("(%d - %di)", x->real, ABS(x->img));
	else printf("(%d + %di)", x->real, ABS(x->img));
}

COMPLEX add(COMPLEX x, COMPLEX y)
{
	COMPLEX temp;
	temp.real = x.real + y.real;
	temp.img = x.img + y.img;
	return temp;
}

COMPLEX sub(COMPLEX x, COMPLEX y)
{
	COMPLEX temp;
	temp.real = x.real - y.real;
	temp.img = x.img - y.img;
	return temp;
}

void main()
{
	COMPLEX x, y, z;

	scanf("%d %d", &x.real, &x.img);
	scanf("%d %d", &y.real, &y.img);
	z = add(x, y);
	print_complex(&x); printf(" + "); print_complex(&y);
	printf(" = ");print_complex(&z);
	printf("\n");
	
	z = sub(x, y);
	print_complex(&x); printf(" - ");print_complex(&y);
	printf(" = ");print_complex(&z);
	printf("\n");
}
