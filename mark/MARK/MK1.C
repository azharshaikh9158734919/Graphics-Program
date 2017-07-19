#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int gd=DETECT,gm;
    int x,y,x0,y0,x1,y1,dx,dy,steps,i;
    float x_in,y_in;
    
    printf("please enter first co ordinate as x-y");
	scanf("%d%d",&x0,&y0);
	
	printf("please enter scond co ordinate ");
	scanf("%d%d",&x1,&y1);
    
    initgraph(&gd,&gm,"");
    
    dx=x1-x0;
    dy=y1-y0;

    if(abs(dx)>abs(dy))
    {
        steps=abs(dx);
    }
    else
    {
        steps=abs(dy);
    }

    x_in=dx/steps;
    y_in=dy/steps;

    x=x0;
    y=y0;

    putpixel(x,y,RED);      //+50 c
    
    for(i=0;i<steps;i++)
    {
        x+=x_in;
        y+=y_in;

        putpixel(x,y,RED);	//+50
    }
    
    getch();
    closegraph();
}

