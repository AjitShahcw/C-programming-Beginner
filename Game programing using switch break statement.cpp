#include<stdio.h>
int playgame()
{
	printf("Play game called");
}
int loadgame()
{
	printf("Load game called");
}
int playmultiplayer()
{
	printf("Play multiplayer game called");
}
int main()
{
	int input;
    printf("1. Play game\n");
    printf("2. Load game\n");
    printf("3. Play multiplayer\n");
    printf("4. Exit\n");
    printf("selection:");
    scanf("%d",&input);
    switch(input){
    	case 1:
    	    playgame();
    	case 2:
    		loadgame();
        	break;
    	case 3:
    		playmultiplayer();
    		break;
    	case 4:
    		printf("thanks for playing!\n");
    		break;
    	default:
    		printf("Bad input,quitting!\n");
    		break;
    }
}
