#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int gd=DETECT,gm;
    int x_max,y_max,x_c,y_c,x0,y0,x1,y1;

	printf("please enter co-ordinate of x0,y0:\n");
	scanf("%d%d",&x0,&y0);
	
	printf("please enter co-ordinate of x1,y1:\n");
	scanf("%d%d",&x1,&y1);
	
	//for x axis,y axis
	initgraph(&gd,&gm," ");

	x_max=getmaxx();
	printf("x_max=%d\n",x_max);
	y_max=getmaxy();
	printf("y_max=%d\n",y_max);

	x_c=x_max/2;
	printf("x_c=%d\n",x_c);
	y_c=y_max/2;
	printf("y_c=%d\n",y_c);

	setcolor(RED);					// setcolor(RED);
	line(x_c,0,x_c,y_max);			// line(319,0,319,479);
	delay(200);						// delay(200);
	line(0,y_c,x_max,y_c);			// line(0,239,639,239);
	delay(200);						// delay(200);

	printf("\n(x0,y0)=(%d,%d)\n(x1,y1)=(%d,%d)\n",x0,y0,x1,y1);


	//line drow
	setcolor(WHITE);
	if (x0>=0 && y0>=0)
	{
		//line(x_c+x0,y_c-y0,x_c+x1,y_c-y1);
		putpixel(x_c+x0,y_c-y0)
	}

	if (x0>=0 && y0<0)
	{
		putpixel(x_c-x0,y_c-y0)
	}
	if (x0<0 && y0<0)
	{
		putpixel(x_c-x0,y_c+y0);
	}
	if (x0>=0 && y0<0)
	{
		putpixel(x_c+x0,y_c+y0);
	}
	// line(319+20,239-20,319+60,239-60);

    getchar();
    closegraph();
}
