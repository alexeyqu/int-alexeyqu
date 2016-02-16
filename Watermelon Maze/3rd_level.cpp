//-----------------------------------------------------------------------------------------------
//FILE_3rd_LEVEL---------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

int DvigChel_3 (int x, int y)
{
     int time_end = clock();

     Point_t loc      = {x, y};

     Score_t score    = {0};

     Chel_t chel      = {&loc, SPEED};

     Reaction_t react = {&loc, &score};

     PointEN_t locEN  = {290, 155, 3, 4};

     int time         = 0;

     int counter      = -2;

     int counteren    = 0;

     DrawLevel();

     HDC Cover        = txLoadImage ("Resourses\\Images\\Cover.bmp");

     txPlaySound ("Resourses\\Music\\track_1.wav", SND_ASYNC);

     DrawArbuz (370, 106);
     DrawArbuz (368, 219);
     DrawArbuz (446, 151);
     DrawArbuz (607, 222);

     while (1)
     {
           txBegin();

           DrawTimeTable();

           Interface      (&score, &time, &time_end);

           DrawWalls_3();
           
           Bonus (&score);

           txSetColor     (TX_YELLOW);
           txSetFillColor (TX_YELLOW);
           txRectangle    (locEN.x - 13, locEN.y - 13, locEN.x + 13, locEN.y + 13);

           MoveEnemy (&locEN);

           counteren++;

           if (counteren % 12 < 5) DrawEnemy_1 (&locEN);

           else
               if (counteren % 12 < 9) DrawEnemy_2 (&locEN);

               else DrawEnemy_3 (&locEN);

           ReactionEnd3 (&loc);

           txTransparentBlt (txDC(), loc.x - 10, loc.y - 10, 21, 21, Cover, 0, 0, TX_WHITE);

           if ((loc.x < locEN.x + 14) &&
               (loc.x > locEN.x - 12) &&
               (loc.y < locEN.y + 13) &&
               (loc.y > locEN.y - 12)) return 0;

           if (Controls (&react) == 1)     {DrawChel_1 (&loc); return 0;};

           if (ReactionEnd3(&loc) == 1) return score.points + 20 - time;

           counter++;

           if (counter > 2) counter = -2;

           if (counter < 0) DrawChel_1 (&loc);

                       else DrawChel_2 (&loc);

           if (GetAsyncKeyState ('M')) sleep--;
           if (sleep < 0) sleep = 0;
           if (GetAsyncKeyState ('P')) sleep++;

           Sleep (sleep);
           }

           txDeleteDC (Cover);
}
