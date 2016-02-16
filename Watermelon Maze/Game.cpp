//-----------------------------------------------------------------------------------------------
//FILE_GAME--------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

#define UP 1
#define LEFT 2
#define DOWN -1
#define RIGHT -2
#include "Prototypes.cpp"
#include "Enemies.cpp"
#include "Menu.cpp"
#include "Reaction.cpp"
#include "Controls.cpp"
#include "Drawings.cpp"
#include "IPS.cpp"
#include "1st_level.cpp"
#include "2nd_level.cpp"
#include "3rd_level.cpp"
#include "Cheats.cpp"
#include "Bonus.cpp"

//-----------------------------------------------------------------------------------------------

int  Game (int counter, int x, int y)
{
     int ScoreTotal = 0;
     int result;
     char out[100];
     int mode = 0;

     HDC Lose = txLoadImage ("Resourses\\Images\\LOSE.bmp");
     HDC Won  = txLoadImage ("Resourses\\Images\\WON.bmp");

     while (1)
     {
            if (counter == 1)
           {
               
            HP = 105.0;
               
            if (GetAsyncKeyState ('K'))
            {
              result = DvigChel_1CHEAT();
              if (result == 0)
              {
                 txTransparentBlt (txDC(), 100, 200, 629, 189, Lose, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Lose.wav", SND_ASYNC);
                 txSleep (0);
                 Pause();
              }
              else
              {
                 ScoreTotal = ScoreTotal + result;
                 txTransparentBlt (txDC(), 200, 200, 400, 170, Won, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Won.wav", SND_ASYNC);
                 txSleep (0);
                 counter++;
                 x = 30;
                 y = 380;
                 Pause();
              }
            }
            else
            {
              result = DvigChel_1 (x, y);
              if (result == 0)
              {
                 txTransparentBlt (txDC(), 100, 200, 629, 189, Lose, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Lose.wav", SND_ASYNC);
                 txSleep (0);
                 Pause();
              }
              else
              {
                 ScoreTotal = ScoreTotal + result;
                 txTransparentBlt (txDC(), 200, 200, 400, 170, Won, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Won.wav", SND_ASYNC);
                 txSleep (0);
                 counter++;
                 x = 30;
                 y = 380;
                 Pause();
              }
            }
           }

//-----------------------------------------------------------------------------------------------

           if (counter == 2)
           {
            
            HP = 105.0;            
           
            if (GetAsyncKeyState ('K'))
            {
                   result = DvigChel_2CHEAT();
              if (result == 0)
              {
                 txTransparentBlt (txDC(), 100, 200, 629, 189, Lose, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Lose.wav", SND_ASYNC);
                 txSleep (0);
                 Pause();
              }
              else
              {
                 ScoreTotal = ScoreTotal + result;
                 txTransparentBlt (txDC(), 200, 200, 400, 170, Won, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Won.wav", SND_ASYNC);
                 txSleep (0);
                 counter++;
                 x = 30;
                 y = 272;
                 Pause();
              }
            }
            else
            {
              result = DvigChel_2 (x, y);
              if (result == 0)
              {
                 txTransparentBlt (txDC(), 100, 200, 629, 189, Lose, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Lose.wav", SND_ASYNC);
                 txSleep (0);
                 Pause();
              }
              else
              {
                 ScoreTotal = ScoreTotal + result;
                 txTransparentBlt (txDC(), 200, 200, 400, 170, Won, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Won.wav", SND_ASYNC);
                 txSleep (0);
                 counter++;
                 x = 30;
                 y = 272;
                 Pause();
              }
            }
           }

//------------------------------------------------------------------------------------------

           if (counter == 3)
           {
                       
            HP = 105.0;
                       
            if (GetAsyncKeyState ('K'))
            {
                result = DvigChel_3CHEAT();
              if (result == 0)
              {
                 txTransparentBlt (txDC(), 100, 200, 629, 189, Lose, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Lose.wav", SND_ASYNC);
                 txSleep (0);
                 Pause();
              }
              else
              {
                 ScoreTotal = ScoreTotal + result;
                 txTransparentBlt (txDC(), 200, 200, 400, 170, Won, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Won.wav", SND_ASYNC);
                 txSleep (0);
                 counter++;
                 Pause();
              }
            }
            else

              {
              result = DvigChel_3(x, y);
              if (result == 0)
              {
                 txTransparentBlt (txDC(), 100, 200, 629, 189, Lose, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Lose.wav", SND_ASYNC);
                 txSleep (0);
                 Pause();
              }
              else
              {
                 ScoreTotal = ScoreTotal + result;
                 txTransparentBlt (txDC(), 200, 200, 400, 170, Won, 0, 0, TX_WHITE);
                 txPlaySound ("Resourses\\Sound\\Won.wav", SND_ASYNC);
                 txSleep (0);
                 Pause();
              }
            }
           }
     }
     txDeleteDC (Lose);
     txDeleteDC (Won);

     printf ("%d\n", ScoreTotal);
}
