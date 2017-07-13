#include<windows.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int gd=DETECT,gm;
	int i,j;
	
	int x,y,x0,y0,x1,y1,dx,dy,E,NE;
	float d_in;
    
    printf("please enter first co ordinate as x-y\n");
	scanf("%d%d",&x0,&y0);
	
	printf("please enter scond co ordinate\n");
	scanf("%d%d",&x1,&y1);
	
    initgraph(&gd,&gm,"");
    
	for(i=100,j=0;j<=100;j++)
	{
		putpixel(i,j,WHITE);
	}
	
	for(i=0,j=100;i<=100;i++)
	{
		putpixel(i,j,WHITE);
	}
	
	for(i=100,j=100;j<=200;j++)
	{
		putpixel(i,j,WHITE);
	}
	
	for(i=100,j=100;i<=200;i++)
	{
		putpixel(i,j,WHITE);
	}
        
    x=x0;
    y=y0;
    
    dx=x1-x0;
    dy=y1-y0;

    d_in=dy-(dx/2);

	E=dy;
	NE=dy-dx;

	putpixel(x+=100,y+=100,RED);
    
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
