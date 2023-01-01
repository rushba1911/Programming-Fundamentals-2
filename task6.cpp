#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);

main()
{
system("cls");

gotoxy(45,20);
cout<<"******      *       *     ******     *      *    ******         ****"<<endl;
gotoxy(45,21);
cout<<"*     *     *       *    *      *    *      *    *     *       *    *"<<endl;
gotoxy(45,22);
cout<<"*      *    *       *    *           *      *    *      *     *      *"<<endl;
gotoxy(45,23);
cout<<"*     *     *       *    *           *      *    *     *     *        *"<<endl;
gotoxy(45,24);
cout<<"*****       *       *    ********    ********    *****      ************"<<endl;
gotoxy(45,25);
cout<<"*     *     *       *           *    *      *    *     *    *          *"<<endl;
gotoxy(45,26);
cout<<"*      *    *       *           *    *      *    *      *   *          *"<<endl;
gotoxy(45,27);
cout<<"*       *    *     *     *      *    *      *    *     *    *          *"<<endl;
gotoxy(45,28);
cout<<"*        *    *****       ******     *      *    *****      *          *"<<endl;      
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}