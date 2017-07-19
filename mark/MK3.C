#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int gd=DETECT,gm;
    int x,y,x0,y0,x1,y1,dx,dy,E,NE;
	float d_in;
	
//steps,i;
	
    
    printf("please enter first co ordinate as x-y");
	scanf("%d%d",&x0,&y0);
	
	printf("please enter scond co ordinate ");
	scanf("%d%d",&x1,&y1);
    
    initgraph(&gd,&gm," ");
    
    x=x0;
    y=y0;
    
    dx=x1-x0;
    dy=y1-y0;

    d_in=dy-(dx/2);

	E=dy;
	NE=dy-dx;

    putpixel(x=+200,y=+200,RED);      //+50 c
    
    while(x<=x1)
    {
		if(d_in<0)
		{
			d_in+=E;
			x++;
		}
        else
		{
			d_in+=NE;
			x++;
			y++;
		}

		putpixel(x,y,RED);
    }
   
   	delay(2000);
    getchar();
    closegraph();
}
