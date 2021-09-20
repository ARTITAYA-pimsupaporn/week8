#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//จงเขียนฟังก์ชัน sqrt โดยไม่ใช้ไลบรารี math.h(Level 5)

double sqroot(double s) {
	double x0 = 600;			// มันเป็น theory
	double x1 = 0.0;
	double precision = .0001;
	double delta = 1;
	while (delta > precision) {
		x1 = .5 * (x0 + s / x0);
		delta = fabs(x1 - x0);
		printf("x0 = %.2lf, x1 = %.2lf, delta = %.2lf\n", x0, x1, delta);
		x0 = x1;
	}

	return x1;
}
int main() {

	int s;
	scanf("%d", &s);
	double x = sqroot(s);
	printf("\nX = %.2lf , X*X = %.2lf\n", x, x * x);


	return 0;
}