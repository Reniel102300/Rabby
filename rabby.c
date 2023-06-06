#include <stdlib.h>
#define p printf
#define s scanf
int main() {
	int x=0,y=0,direction,points;
	char choice;
{
    p("Robot Command Menu\n\n\n");

    while(1)
    {
        p("a] Origin \n");
        p("b] Location\n");
        p("c] Move\n");
        p("d] Exit\n\n\n");
        p("Enter a valid choice :  ");
        s("%s",&choice);
        
        switch(choice) {
			case 'a': x=0; y=0; 
			p("\n\nRobby's location goes back to its origin (%d,%d) posistion\n",x,y);
				break;
			case 'b': 
			p("\n\n\tRobby is at location %d,%d\n",x,y);
				break;
			case 'c': 
			p("\n [2]East , [4]West , [6]North , [8]South\n");   p("\tEnter direction: "); 
				s("%d",&direction);
				if(direction==2) {
					p("\n\tHow many points? : ");
					s("%d",&points);
					x+=points;
					p("\n\tRobby moved East %d,%d",x,y);
				} else if(direction==4) {
					p("\n\tHow many points? : ");
					s("%d",&points);
					x-=points;
					p("\n\tRobby moved West %d,%d",x,y);
				} else if(direction==6) {
					p("\n\tHow many points? : ");
					s("%d",&points);
					y+=points;
					p("\n\tRobby moved North %d,%d",x,y);
                } else if(direction==8) {
					p("\n\tHow many points? : ");
					s("%d",&points);
					y-=points;
					p("\n\tRobby moved South %d,%d",x,y);
                } else p("\n\n\tOpppss :( Invalid Direction, Please Try Again...\n");
				break;
			case 'd': p("\n\n\tCoding is Fun!!! Goodbye ;)\n\n\n");
                exit(0);
				break;
			default: p("\n\n\tOpppss :( Invalid Choice, Please Try Again... \n");
                break;
		} 
		p("\n\n\nPress any key to continue...\n");
        
    } while(choice!='d');
    
	return 0;
}
}