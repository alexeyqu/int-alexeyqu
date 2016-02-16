//-----------------------------------------------------------------------------------------------
//FILE_MENU--------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

void MenuInGame (Point_t* loc, int levnum)
{
     int x = loc->x;
     int y = loc->y;

     HDC Menu = txLoadImage ("Resourses\\Images\\MenuInGame.bmp");

     txBitBlt (txDC(), 0, 0, 800, 600, Menu, 0, 0, SRCCOPY);

     while (1)
     {
           if (txMouseX() < 521 &&
               txMouseX() > 276 &&
               txMouseY() < 129 &&
               txMouseY() >  87 &&
               txMouseButtons() == 1) {printf ("NEW\n"); Game (1, 20, 580);};

           if (txMouseX() < 521 &&
               txMouseX() > 276 &&
               txMouseY() > 182 &&
               txMouseY() < 227 &&
               txMouseButtons() == 1) {Game (levnum, loc->x, loc->y);};

           if (txMouseX() < 521 &&
               txMouseX() > 276 &&
               txMouseY() > 272 &&
               txMouseY() < 320 &&
               txMouseButtons() == 1) {SaveGame (levnum, loc);};

           if (txMouseX() < 521 &&
               txMouseX() > 276 &&
               txMouseY() > 370 &&
               txMouseY() < 411 &&
               txMouseButtons() == 1) {LoadGame (&levnum, loc); Game (levnum, loc->x, loc->y);}

           if (txMouseX() < 521 &&
               txMouseX() > 276 &&
               txMouseY() > 467 &&
               txMouseY() < 518 &&
               txMouseButtons() == 1) {_txExit = true; exit (0);};

           txSleep (1);
     }

     txDeleteDC (Menu);
}

void SaveGame (int levnum, Point_t* loc)
{
     FILE* Save;
     
     printf ("SAVE\n"); 

     Save = fopen ("Save_1.txt", "w");

     fprintf (Save, "%d %d %d", levnum, loc->x, loc->y);
     
     fclose (Save);
}

void LoadGame (int* levnum, Point_t* loc)
{
     FILE* Save;
     
     printf ("LOAD\n");

     Save = fopen ("Save\\Save_1.txt", "r");

     fscanf (Save, "%d %d %d", levnum, &loc->x, &loc->y);
     
     fclose (Save);
}
