#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//จงเขียนฟังก์ชัน sqrt โดยไม่ใช้ไลบรารี math.h(Level 5)
float x, temp = 0;
void sqroot(float st)
{
    if (st != temp)
    {
        temp = st;
        st = ((x / temp) + temp) / 2;
        sqroot(st);
    }
    else
    {
        printf("%.2f", st);
    }
}
int main()
{
    scanf("%f", &x);
    sqroot(x / 2);
    return 0;
}