//FILE_SHOW

void Show (int array[], int modesort)
{
     COLORREF Color;

     switch (modesort)
     {
         case 1: Color = TX_RED; break;
         case 2: Color = TX_BLUE; break;
         case 3: Color = TX_GREEN; break;
         case 4: Color = TX_YELLOW; break;
         case 5: Color = TX_ORANGE; break;
         case 6: Color = TX_WHITE; break;
         case 7: Color = TX_PINK; break;
         case 8: Color = TX_CYAN; break;
     }
     
/*
     printf ("%d\n", Ncomps);
*/

     txCreateWindow (800, 600);

     if (550 - Nswaps/10 >= 174)
     {
         txSetColor (Color);
         txSetFillColor (Color);
         txCircle (87 + ARR_SIZE, 550 - Nswaps/10, 2);
     }

     if (550 - Ncomps/10 >= 174)
     {
         txSetColor (Color);
         txSetFillColor (Color);
         txCircle (433 + ARR_SIZE, 550 - Ncomps/10, 2);
     }

     txSleep (1);

/*
     for (int i = 0; i < ARR_SIZE; i++)
     {
         printf ("%d ", array[i]);
     }

     printf ("\n");
*/
}
