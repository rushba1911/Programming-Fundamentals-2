#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
main()
{
system("cls");

cout<<"#########################################################################################################################"<<endl;
cout<<"||...................................................................................................      ........    ||"<<endl;
cout<<"|| ..          %%%%%%%%%%%%%%%%%%%%            ****              %%%%%%%%%%%%%%%%%%%%%%%%%      |%|..       %%%%%%%    ||"<<endl;   
cout<<"|| ..                    |%|    |%|         |%|....              |&|                    |&|     |%|..            |%|   ||"<<endl;
cout<<"|| ..                    |%|    |%|         |%|....              |&|                    |&|     |%|..            |%|   ||"<<endl;
cout<<"|| ..   %%%%%%%%%%%%%%%%%%%%%%%%%%%         |%|****          %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%        ..     %%%%%%%%%%   ||"<<endl;
cout<<"|| ..   |%|                                 |%|....                                      |%|       ..           |%|    ||"<<endl;
cout<<"|| ..   |%|                                    ***********                               |%|       ..           |%|    ||"<<endl;
cout<<"|| ..   |%|                                             **                          %%%%%%%%       ..    %%%%%%%|%|    ||"<<endl;
cout<<"|| ..  %%%%%%%%%%%%%%%                       P          **                         |%|             ..           |%|    ||"<<endl;
cout<<"|| .. |%|                                               **                         |%|             ..    |%|           ||"<<endl;
cout<<"|| .. |%|                                  ***************************                             ..    |%|           ||"<<endl;
cout<<"|| .. |%|%%%%%%%                                                |%|     G  %%%%%%%%%%%%%%%%%%      ..    |%|%%%%       ||"<<endl;
cout<<"|| ..           |%|                                             |%|                        |%|     ..                  ||"<<endl;
cout<<"|| ..           |%|%%%%%%%%%%%%%%%%%%%%%%%                      %%%%%%%%%%%%               |%|     ..   %%%%%%%%%%%%   ||"<<endl;
cout<<"|| ...................................................          ...................... ................................||"<<endl;              
cout<<"||                ..............................................|%|                                ..                  ||"<<endl;
cout<<"||    |%|        |%|                                            |%|..................................                  ||"<<endl;
cout<<"|| .. |%|        |%|                                   |%||%||%||%|           %%%%%%%%%%%%%%         |%|      |%|      ||"<<endl;     
cout<<"|| .. &&&&&&&&&&&&&&&&&&&&&&&                  %%%%%%%%                  %%%%%              %%%%%%   |%|      |%|      ||"<<endl;
cout<<"|| ..                       %%%%%%%%                                     |%|                        %%%%%%%%%%%%%%%%%  ||"<<endl; 
cout<<"|| ..                              %%%%%%%%%%%                    %%%%%%%%%                       ...................  ||"<<endl;      
cout<<"#########################################################################################################################";

int x=3, y=1;
while(true)
{
	
        if(y==21)
	 {
	   y=1;
	 }
	gotoxy(x,y);
	cout<<" ";
	y++;
        if(y<21)
        {
	 gotoxy(x,y);
         cout<<"P";
	}
	

   Sleep(300);

}
	
}	 


void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}