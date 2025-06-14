#include "cursor.h"
#include <stdio.h>
int new_game()
{
	system("cls");
	menu:;
    int Set[] = {7,7,7}; // DEFAULT COLORS
    int counter = 0;
    int backspace_counter = 0;
    char key;

    while(1)
    {
    	
    	gotoxy(40,10);
        color(Set[0]);
        printf("Easy");

        gotoxy(40,12);
        color(Set[1]);
        printf("Medium");
        

        gotoxy(40,14);
        color(Set[2]);
        printf("Hard");
        
        
        key = _getch();
             if(key == 72 || key == 80)
               {
                   	if(key == 80 && counter <3)
                    {
                    	counter++;
			     	}
			      	if(key == 72 && counter > 1)
                    {
                    	counter--;
                    }       
		        }
		        else if(key == 13)//carriage return
                {
                	color(7);
                    if(counter == 1)
                    {
                    	system("cls");
                    	return 1;
                    }
                    if(counter == 2)
                    {
                    	system("cls");
                        return 2;
                    }
                    if(counter == 3)
                    {
                    	system("cls");
                    	return 1;
                    }
                    
                }
                else
                {
                	if(key == 8 && counter>0)
                	{
                		backspace_counter++;
                		system("cls");
                		if(backspace_counter == 2)
                		{
                			goto menu;
						}
					}
                	
				}
 
        
                Set[0] = 7;
                Set[1] = 7;
                Set[2] = 7;
       
          
                if(counter == 1 )
                {
                   Set[0] = 2;
                }
                if(counter == 2 )
                {
                   Set[1] = 2;
                }
                if(counter == 3 )
                {
                   Set[2] = 2;
                }
                
	}
}
int menu()
{
	menu:;
    int Set[] = {7,7,7}; // DEFAULT COLORS
    int counter = 0;
    int backspace_counter = 0;
    char key;

    while(1)
    {
    	
    	gotoxy(40,10);
        color(Set[0]);
        printf("New Game");

        gotoxy(40,12);
        color(Set[1]);
        printf("Exit");

        key = _getch();
             if(key == 72 || key == 80)
               {
                   	if(key == 80 && counter <2)
                    {
                    	counter++;
			     	}
			      	if(key == 72 && counter > 1)
                    {
                    	counter--;
                    }       
		        }
		        else if(key == 13)//carriage return
                {
                	color(7);
                    if(counter == 1)
                    {
                    	return(new_game());
                    }
                    if(counter == 2)
                    {
                    	system("cls");
                    	gotoxy(20,40);
                        printf("Exit");
                        exit(0);
                    }
                }
                else
                {
                	if(key == 8 && counter>0)
                	{
                		backspace_counter++;
                		system("cls");
                		if(backspace_counter == 2)
                		{
                			goto menu;
						}
					}
                	
				}
 
        
                Set[0] = 7;
                Set[1] = 7;
                Set[2] = 7;
       
          
                if(counter == 1 )
                {
                   Set[0] = 2;
                }
                if(counter == 2 )
                {
                   Set[1] = 2;
                }
                if(counter == 3 )
                {
                   Set[2] = 2;
                }
                
	}
}
