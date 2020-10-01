#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>
void CircleDraw(int xc, int yc, int x, int y)
{
	putpixel(xc+x, yc+y, RED);
	putpixel(xc-x, yc+y, RED);
	putpixel(xc+x, yc-y, RED);
	putpixel(xc-x, yc-y, RED);
	putpixel(xc+y, yc+x, RED);
	putpixel(xc-y, yc+x, RED);
	putpixel(xc+y, yc-x, RED);
	putpixel(xc-y, yc-x, RED);
}
void CordCircle(int xc, int yc, int r)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;
	CircleDraw(xc, yc, x, y);
	while (y >= x)
	{
		x++;
		if (d > 0)
		{
			y--;
			d = d + 4 * (x - y) + 10;
		}
		else
			d = d + 4 * x + 6;
		CircleDraw(xc, yc, x, y);
		delay(50);
	}
}
int main()
{
	int xc = 50, yc = 50, r = 30;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	CordCircle(xc, yc, r);
	getch();
	return 0;
}
