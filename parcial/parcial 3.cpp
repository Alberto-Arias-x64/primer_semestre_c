#include<stdio.h>
int dado1,dado2,s,p,x=1,y;
int main()
{
	printf("introdizca la cantidad de jugadores ");
	scanf("%d",&y);
	if(y!=0)
	{
	while(1)
	{
		printf("jugador %d tire los dados \ndado uno ",x);
		scanf("%d",&dado1);
		printf("dado dos ");
		scanf("%d",&dado2);
		if(dado1>=1 && dado1<=6)
		{
			if(dado2>=1 && dado2<=6)
			{
				s=dado1+dado2;
				if(s==7 || s==11)
				{
					printf("jugador %d gana",x);
					break;
				}
				else if(s==2 || s==3 || s==12)
				{
					printf("La casa gana");
					break;
				}
				if(y==x)
				{
					x=1;
				}
				x++;
			}
		}
		else
		{
			printf("error de dados \n");
		}
	}
}
else
{
	printf("error");
}
}
