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
