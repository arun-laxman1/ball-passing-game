#include"ball.h"
int main()
{
	int n,i;
	char j[200];
	cll players;
	printf("ENTER THE NUMBER OF PLAYERS: ");
	scanf("%d",&n);
	printf("\nENTER PLAYER 1 NAME: ");
	scanf("%s",j);
	players=create(j);
	for(i=1;i<n;i++)
	{
		printf("\nENTER PLAYER %d NAME: ",i+1);
		scanf("%s",j);
		append(players,j);
	}
	printf("\n-----------------------GAME STARTS NOW!!!!!-----------------------------\n");
	for(i=0;i<n-1;i++)
	{
		players=gameplay(players);
	}
	printf("\n-----------------------GAME ENDS!!!!-----------------------------\n");
	printf("\nTHE WINNER OF THE GAME IS %s",players->name);
	printf("\nCONGRATULATIONS %s!!!!!!!!!!!!",players->name);
	return 1;
}
