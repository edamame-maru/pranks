#include <cstdlib>
#include <iostream>
#include <Windows.h>

using namespace std;

int main(int argc, char *argv[])
{
	FreeConsole();
     int BlockInput;
     const int TIMES = 50;
 
    Beep(50, 2000);
    for (;;){
    MessageBox (NULL, "Don't worry, this is a harmless prank. But the SoichiMaister's not done with you yet." , "GOD LUCK CLOSING THIS WINDOW" ,0);
}
    for (int i = 0; i < TIMES; i++, Sleep(200))
    SetCursorPos(900, 900);
 
    Beep(70, 2000);
    system("PAUSE");
    return EXIT_SUCCESS;
}