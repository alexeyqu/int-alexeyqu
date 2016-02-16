//FILE_BUTTONS

void CheckButtons ()
{
     HDC Buttons          = txLoadImage ("Resourses\\Images\\Buttons.bmp");
     HDC Buttons_Pressing = txLoadImage ("Resourses\\Images\\Buttons_Pressing.bmp");
     HDC Buttons_Pressed  = txLoadImage ("Resourses\\Images\\Buttons_Pressed.bmp");

     int x = txMouseX();

     int y = txMouseY();

     txTransparentBlt (txDC(), 0, 0, 800, 600, Buttons, 0, 0, TX_PINK);

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

     while (1)
     {
         x = txMouseX();

         y = txMouseY();

         if (GetAsyncKeyState ('K')) {txSetFillColor (TX_BLACK); txClear(); txTransparentBlt (txDC(), 0, 0, 800, 600, Buttons, 0, 0, TX_PINK);};

         //Fill
         if (y >  18 && y <  52)
         {
         //Increasing fill
         if (x > 135 && x < 262 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 0, 800,  58, Buttons, 0, 0, TX_PINK);
                 modefill = 1;
                 txBitBlt (txDC(), 135, 18, 127,  34, Buttons_Pressing, 135,  18);
                 txSleep (500);
                 txBitBlt (txDC(), 135, 18, 127,  34, Buttons_Pressed, 135,  18);
                 txSleep (1);
             };

         //Decreasing fill
         if (x > 281 && x < 412 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 0, 800,  58, Buttons, 0, 0, TX_PINK);
                 modefill = 2;
                 txBitBlt (txDC(), 281, 18, 131,  34, Buttons_Pressing, 281,  18);
                 txSleep (500);
                 txBitBlt (txDC(), 281, 18, 131,  34, Buttons_Pressed, 281,  18);
                 txSleep (1);
             };

         //Random mod 5 fill
         if (x > 434 && x < 603 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 0, 800, 58, Buttons, 0, 0, TX_PINK);
                 modefill = 3;
                 txBitBlt (txDC(), 434, 18, 169,  34, Buttons_Pressing, 434,  18);
                 txSleep (500);
                 txBitBlt (txDC(), 434, 18, 169,  34, Buttons_Pressed, 434,  18);
                 txSleep (1);
             };

         //Random fill
         if (x > 626 && x < 729 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 0, 800,  58, Buttons, 0, 0, TX_PINK);
                 modefill = 4;
                 txBitBlt (txDC(), 624, 18, 105,  34, Buttons_Pressing, 624,  18);
                 txSleep (500);
                 txBitBlt (txDC(), 624, 18, 105,  34, Buttons_Pressed, 624,  18);
                 txSleep (1);
             };
         }

         //Selection, Bubble, Shaker and Simple Insertion Sorts
         if (y > 68 && y < 102)
         {
         //Selection Sort
         if (x > 135 && x < 247 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 63, 800, 99, Buttons, 0, 63, TX_PINK);
                 modesort = 1;
                 txBitBlt (txDC(), 135,  68, 112,  34, Buttons_Pressing, 135,  68);
                 txSleep (500);
                 txBitBlt (txDC(), 135,  68, 112,  34, Buttons_Pressed, 135,  68);
                 txSleep (1);
             };

         //Bubble Sort
         if (x > 302 && x < 387 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 63, 800, 99, Buttons, 0, 63, TX_PINK);
                 modesort = 2;
                 txBitBlt (txDC(), 302,  68,  85,  34, Buttons_Pressing, 302,  68);
                 txSleep (500);
                 txBitBlt (txDC(), 302,  68,  85,  34, Buttons_Pressed, 302,  68);
                 txSleep (1);
             };
         //Shaker Sort
         if (x > 431 && x < 519 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 63, 800, 99, Buttons, 0, 63, TX_PINK);
                 modesort = 3;
                 txBitBlt (txDC(), 431,  68,  88,  34, Buttons_Pressing, 431,  68);
                 txSleep (500);
                 txBitBlt (txDC(), 431,  68,  88,  34, Buttons_Pressed, 431,  68);
                 txSleep (1);
             };

         //Simple Insertion Sort
         if (x > 546 && x < 735 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 63, 800, 99, Buttons, 0, 63, TX_PINK);
                 modesort = 4;
                 txBitBlt (txDC(), 546,  68, 189,  34, Buttons_Pressing, 546,  68);
                 txSleep (500);
                 txBitBlt (txDC(), 546,  68, 189,  34, Buttons_Pressed, 546,  68);
                 txSleep (1);
             };
         }

         //Binary Insertion, Quick, Heap and Merge Sorts
         if (y > 121 && y < 155)
         {
         //Binary Insertion Sort
         if (x > 135 && x < 320 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 63, 800, 99, Buttons, 0, 63, TX_PINK);
                 modesort = 5;
                 txBitBlt (txDC(), 135, 121, 185,  34, Buttons_Pressing, 135, 121);
                 txSleep (500);
                 txBitBlt (txDC(), 135, 121, 185,  34, Buttons_Pressed, 135, 121);
                 txSleep (1);
             };

         //Quick Sort
         if (x > 373 && x < 455 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 63, 800, 99, Buttons, 0, 63, TX_PINK);
                 modesort = 6;
                 txBitBlt (txDC(), 376, 121,  79,  34, Buttons_Pressing, 376, 121);
                 txSleep (500);
                 txBitBlt (txDC(), 376, 121,  79,  34, Buttons_Pressed, 376, 121);
                 txSleep (1);
             };

         //Heap Sort
         if (x > 514 && x < 578 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 63, 800, 99, Buttons, 0, 63, TX_PINK);
                 modesort = 7;
                 txBitBlt (txDC(), 514, 121,  64,  34, Buttons_Pressing, 514, 121);
                 txSleep (500);
                 txBitBlt (txDC(), 514, 121,  64,  34, Buttons_Pressed, 514, 121);
                 txSleep (1);
             };

         //Merge Sort
         if (x > 651 && x < 730 &&
             txMouseButtons() == 1)
             {
                 txTransparentBlt (txDC(), 0, 63, 800, 99, Buttons, 0, 63, TX_PINK);
                 modesort = 8;
                 txBitBlt (txDC(), 651, 121,  79,  34, Buttons_Pressed, 651, 121);
                 txSleep (500);
                 txBitBlt (txDC(), 651, 121,  79,  34, Buttons_Pressed, 651, 121);
                 txSleep (1);
             };
         }

         if (GetAsyncKeyState (VK_RETURN)) break;

         if (GetAsyncKeyState (VK_ESCAPE)) abort();

         txSleep (1);
     }

     txDeleteDC (Buttons_Pressing);
     txDeleteDC (Buttons_Pressed);
     txDeleteDC (Buttons);
}
