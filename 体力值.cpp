#include <stdio.h>

int main()
	{
		while(1)
		{
		int y1,y2,m1,m2,d1,d2,r,temp,i,j,b,c;
		printf("￥即将测试人体生物体力节律￥\n");
		printf("请按yyyy-mm-dd格式输入出生日期：\n");
		scanf("%d,%d,%d",&y1,&m1,&d1);
		fflush(stdin);
		printf("请按yyyy-mm-dd格式输入您需要测试的日期：\n");
		scanf("%d,%d,%d",&y2,&m2,&d2);
		i=0;
		j=y1;
			while(j<=y2)
			{
				if((j%4==0)&&(j%100!=0)||(j%400==0))
				i=i+1;
				else
			    i=i+0;
				j=j+1;
			}
				if(m1==1)
					b=d1;
				else if(m1==2)
					b=d1+31;
				else if(m1==3)
					b=d1+59;
				else if(m1==4)
					b=d1+90;
				else if(m1==5)
					b=d1+120;
				else if(m1==6)
					b=d1+151;
				else if(m1==7)
					b=d1+181;
				else if(m1==8)
					b=d1+212;
				else if(m1==9)
					b=d1+243;
				else if(m1==10)
                    b=d1+273;
				else if(m1==11)
					b=d1+304;
				else
					b=d1+334;
				if((y1%4==0)&&(y1%100!=0)||(y1%400==0))
					b=b+1;
				else
					b=b+0;
                if(m2==1)
					c=d2;
				else if(m2==2)
					c=d2+31;
				else if(m2==3)
					c=d2+59;
				else if(m2==4)
					c=d2+90;
				else if(m2==5)
					c=d2+120;
				else if(m2==6)
					c=d2+151;
				else if(m2==7)
					c=d2+181;
				else if(m2==8)
					c=d2+212;
				else if(m2==9)
					c=d2+243;
				else if(m2==10)
                    c=d2+273;
				else if(m2==11)
					c=d2+304;
				else
					c=d2+334;
				if((y2%4==0)&&(y2%100!=0)||(y2%400==0))
					c=c+1;
				else
					c=c+0;
				temp=(y2-y1)*365+i+b-c;
                r=temp%28;
				if(r==0)
				printf("您的体力节律处于周期日\n");
			    else if(r==12)
				printf("您的体力节律处于临界日\n");
		    	else if(r<12&&r!=0)
                {
				    printf("您的体力节律处于高潮期\n");
                    printf("您会感到体力充沛，生机勃勃\n");
                }
			    else
                {
				    printf("您会感到疲惫，做事拖拉，畏却\n");
				    printf("您的体力节律处于低潮期\n");
                }
		}
				
             return 0;
	}