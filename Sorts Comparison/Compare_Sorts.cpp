//MAIN_FILE

#include "Prototypes.cpp"
#include <math.h>
#include <iostream>
#include "TXLib.h"
#include "Buttons.cpp"
#include "Fill.cpp"
#include "Sort.cpp"
#include "Show.cpp"

int main()
{
    txCreateWindow (800, 600);

    while (1)
    {
          Menu();
    }

    system ("PAUSE");

    return 0;
}

void Menu()
{
     HDC Screen           = txLoadImage ("Resourses\\Images\\Buttons.bmp");
     HDC Buttons_Pressing = txLoadImage ("Resourses\\Images\\Buttons_Pressing.bmp");
     HDC Buttons_Pressed  = txLoadImage ("Resourses\\Images\\Buttons_Pressed.bmp");

     CheckButtons();

     if (modefill == 0 || modesort == 0) return;

     for (ARR_SIZE = 1; ARR_SIZE < 280; ARR_SIZE++)
     {
         Nswaps = 0;
         Ncomps = 0;

         int array[ARR_SIZE];

         Fill (array, modefill);

         Sort (array, modesort);

         if (Ncomps > 3750 && Nswaps > 3750) {break;};

         Show (array, modesort);

/*
         arr_sizes[ARR_SIZE - 1] = ARR_SIZE;
         arr_swaps[ARR_SIZE - 1] = Nswaps;
         arr_comps[ARR_SIZE - 1] = Ncomps;
*/

         txTransparentBlt (txDC(), 0, 0, 800, 600, Screen, 0, 0, TX_PINK);

         switch (modefill)
         {
            case 1: /*Increasing*/ txBitBlt (txDC(), 135, 18, 127,  34, Buttons_Pressed, 135,  18); break;
            case 2: /*Decreasing*/ txBitBlt (txDC(), 281, 18, 131,  34, Buttons_Pressed, 281,  18); break;
            case 3: /*Rand mod 5*/ txBitBlt (txDC(), 434, 18, 169,  34, Buttons_Pressed, 434,  18); break;
            case 4: /*Random    */ txBitBlt (txDC(), 624, 18, 105,  34, Buttons_Pressed, 624,  18); break;
         }

         switch (modesort)
         {
            case 1: /*Selection*/ txBitBlt (txDC(), 135,  68, 112,  34, Buttons_Pressed, 135,  68); break;
            case 2: /*Bubble   */ txBitBlt (txDC(), 302,  68,  85,  34, Buttons_Pressed, 302,  68); break;
            case 3: /*Shaker   */ txBitBlt (txDC(), 431,  68,  88,  34, Buttons_Pressed, 431,  68); break;
            case 4: /*Simple In*/ txBitBlt (txDC(), 546,  68, 189,  34, Buttons_Pressed, 546,  68); break;
            case 5: /*Binary In*/ txBitBlt (txDC(), 135, 121, 185,  34, Buttons_Pressed, 135, 121); break;
            case 6: /*Quick    */ txBitBlt (txDC(), 376, 121,  79,  34, Buttons_Pressed, 376, 121); break;
            case 7: /*Heap     */ txBitBlt (txDC(), 514, 121,  64,  34, Buttons_Pressed, 514, 121); break;
            case 8: /*Merge    */ txBitBlt (txDC(), 651, 121,  79,  34, Buttons_Pressed, 651, 121); break;
         }

         if (GetAsyncKeyState (VK_ESCAPE)) break;

         txSleep (0);
     }

     txDeleteDC (Screen);
}

/*
void Print (int arr_sizes[], int arr_swaps[], int arr_comps[])
{
     FILE* Save = fopen ("Resourses\\Graph_1.xls", "w");

     for (int ARR_SIZE = 0; ARR_SIZE < 325; ARR_SIZE++)
     {
         fprintf (Save, "%d\t", arr_sizes[ARR_SIZE]);
     }

     fprintf (Save, "\n");

     for (ARR_SIZE = 0; ARR_SIZE < 325; ARR_SIZE++)
     {
         fprintf (Save, "%d\t", arr_swaps[ARR_SIZE]);
     }

     fprintf (Save, "\n");

     for (ARR_SIZE = 0; ARR_SIZE < 325; ARR_SIZE++)
     {
         fprintf (Save, "%d\t", arr_comps[ARR_SIZE]);
     }

     fprintf (Save, "\n");

     fclose (Save);
}
*/
