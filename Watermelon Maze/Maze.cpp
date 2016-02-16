//-----------------------------------------------------------------------------------------------
//FILE_MAIN--------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

#define TX_WALLS_L RGB (164, 200, 147)
#include "TXLib_MY.h"
#include "Game.cpp"
#include <Time.h>
#include <math.h>

//-----------------------------------------------------------------------------------------------

struct Menu
{
       int x;
       int y;
       int speedx;
       int speedy;
       HDC Pic;
};

//-----------------------------------------------------------------------------------------------

void Menu();

//-----------------------------------------------------------------------------------------------

int  main()
{
     txTextCursor (false);

     txCreateWindow (950, 600);

     Point_t loc =  {20, 580};

     Menu();

     return 0;
}

//-----------------------------------------------------------------------------------------------

void Menu()
{
     int levnum = 1;

     int x1 = 310;
     int y1 = 215;
     
     int speedx = 3;
     int speedy = -3;

     //Menu* Melon = {310, 215, 3, -3, txLoadImage ("Resourses\\Images\\Chel_1b.bmp")};
     
     int x2 = 25;
     int y2 = 22;
     
     int x, y;

     HDC Menu = txLoadImage ("Resourses\\Images\\Menu.bmp");
     HDC NPC1 = txLoadImage ("Resourses\\Images\\Chel_1b.bmp");
     HDC NPC2 = txLoadImage ("Resourses\\Images\\Chel_2b.bmp");
     HDC Enemy = txLoadImage ("Resourses\\Images\\Enemy.bmp");

     FILE* Save;

     Save = fopen ("Save\\Save_1.txt", "r");

     fscanf (Save, "%d %d %d", &levnum, &x, &y);

     txBitBlt (txDC(), 0, 0, 800, 600, Menu, 0, 0, SRCCOPY);
     
     int watermelon = 0;

     while (1)
     {           
           txTransparentBlt (txDC(), 0, 0, 800, 600, Menu, 0, 0, TX_WHITE);
           
           int counter = 0;

           while (counter <= abs(speedx) || counter <= abs(speedy))
           { 
               x1+=(speedx/abs(speedx));
               y1+=(speedy/abs(speedy));
        
               for (int i = -21; i <= 21; i++)
               {
                   if (txGetPixel (x1 + i, y1) == TX_WALLS_L)
                       {speedx *= -1; break;};
            
                   if (txGetPixel (x1, y1 + i) == TX_WALLS_L)
                       {speedy *= -1; break;};
               }
                         
               counter++;
           }
           
           if (x2 <  775 && y2 == 22)  x2 += 3;
           if (x2 == 775 && y2 < 577)  y2 += 3;
           if (x2 > 25   && y2 == 577) x2 -= 3;
           if (x2 == 25  && y2 > 22)   y2 -= 3;

           txBitBlt  (txDC(), x2 - 12, y2 - 12, 25, 25, Enemy, 0, 0, SRCCOPY);
                   
           if (watermelon%10 - 5 < 0)
           txTransparentBlt (txDC(), x1 - 21, y1 - 21, 42, 42, NPC1, 0, 0, TX_WHITE);
           else
           txTransparentBlt (txDC(), x1 - 21, y1 - 21, 42, 42, NPC2, 0, 0, TX_WHITE);

           if (txMouseX() < 515 &&
               txMouseX() > 275 &&
               txMouseY() < 185 &&
               txMouseY() > 145 &&
               txMouseButtons() == 1) Game (1, 20, 580);

           if (txMouseX() < 515 &&
               txMouseX() > 275 &&
               txMouseY() < 325 &&
               txMouseY() > 285 &&
               txMouseButtons() == 1) Game (levnum, x, y);

           if (txMouseX() < 515 &&
               txMouseX() > 275 &&
               txMouseY() < 465 &&
               txMouseY() > 425 &&
               txMouseButtons() == 1) {_txExit = true; exit (0);};
               
           watermelon++;    
               
           txSleep (1);
     }

     fclose (Save);

     txDeleteDC (Menu);
     txDeleteDC (NPC1);
     txDeleteDC (NPC2);
     txDeleteDC(Enemy);
}
