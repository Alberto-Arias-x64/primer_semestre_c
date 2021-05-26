#include<stdio.h>
int x, y, z[20][8],a,c,m;
char b;
int main()
{
	for(y=1;y<=8;y=y+1)
		{
			for(x=1;x<=20;x=x+1)
			{
				z[x][y]=0;
			}
		}
	while(1)
	{
		printf("Ingrese la fila ");
		scanf("%d",&a);
		printf("Ingrese la columna ");
		scanf("%c",&b);	
		b=getchar();
		switch (b)
		{
			case 'a': c=1;
			break;
			case 'b': c=2;
			break;
			case 'c': c=3;
			break;
			case 'd': c=4;
			break;
			case 'e': c=5;
			break;
			case 'f': c=6;
			break;
			case 'g': c=7;
			break;
			case 'h': c=8;
			break;
			default:
			{
				printf("error\n");
				c=20;
			}
			break; 
		}
		if(c!=20)
		{
			for(x=1;x<=20;x=x+1)
			{
				for(y=1;y<=8;y=y+1)
				{
					if(a==x && c==y)
					{
						if(z[x][y]==1)
						{
							printf("el puesto esta ocupado \n");
						}
						else
						{
							z[x][y]=1;
							printf("reserva correcta \n");
						}
					}
				}
			}
			for(y=1;y<=8;y=y+1)
			{
				for(x=1;x<=20;x=x+1)
				{
					m=z[x][y];
					if(m==1)
					{
						printf("1 ");
					}
					else
					{
						printf("0 ");
					}
	
				}
			printf("\n");
			}
			printf("(---------------PANTALLA---------------)\n");
		}
		
	}
}
