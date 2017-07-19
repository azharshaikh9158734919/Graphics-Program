#include<windows.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h> 

int main()
{
	int gd =DETECT , gm;
	int dx,dy,steps,x,y,xin,yin,x0, y0, x1, y1;
	
	printf("\nEnter first co-ordinate as x0,y0:\n");
	scanf("%d%d", &x0,&y0);
	
	printf("\nEnter second co-ordinate as x0,y0:\n");
	scanf("%d%d", &x1,&y1);
	
	
	y0= -y0;
	y1= -y1;
	
	initgraph(&gd, &gm, NULL);
	
	dx = x1-x0;
	dy = y1-y0;
	
	if(abs(dx)>abs(dy))
	{
		steps=abs(dx);
	}
	else
	{
		steps=abs(dy);
	}
	
	xin = dx/steps;
	yin = dy/steps;
	
	x=x0, y=y0;
	
	int s = getmaxx();
	int t = getmaxy();
	
	line(s/2,0,s/2, t);
	line(0,t/2, s,t/2);
	
	putpixel(x+(s/2), y+(t/2), 14);
	
	int i;
	for(i=0; i<steps; i++)
	{
		x +=xin;
		y +=yin;
		putpixel(x+(s/2),y+(t/2),14);
	}
	getch();
	closegraph();
	return 0;	
}
//
//int main()
//{
//    int gd=DETECT,gm;
//    int x_max,y_max,x_c,y_c,x0,y0,x1,y1;
//
//	printf("please enter co-ordinate of x0,y0:\n");
//	scanf("%d%d",&x0,&y0);
//	
//	printf("please enter co-ordinate of x1,y1:\n");
//	scanf("%d%d",&x1,&y1);
//	
//	//for x axis,y axis
//	initgraph(&gd,&gm," ");
//
//	x_max=getmaxx();
//	printf("x_max=%d\n",x_max);
//	y_max=getmaxy();
//	printf("y_max=%d\n",y_max);
//
//	x_c=x_max/2;
//	printf("x_c=%d\n",x_c);
//	y_c=y_max/2;
//	printf("y_c=%d\n",y_c);
//
//	setcolor(RED);					// setcolor(RED);
//	line(x_c,0,x_c,y_max);			// line(319,0,319,479);
//	delay(200);						// delay(200);
//	line(0,y_c,x_max,y_c);			// line(0,239,639,239);
//	delay(200);						// delay(200);
//
//	printf("\n(x0,y0)=(%d,%d)\n(x1,y1)=(%d,%d)\n",x0,y0,x1,y1);



