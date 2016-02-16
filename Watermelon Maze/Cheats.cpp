//-----------------------------------------------------------------------------------------------
//FILE_CHEATS------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

int DvigChel_1CHEAT ()
{
     int time_end     = clock();

     Point_t loc      = {20, 580};

     Score_t score    = {0};

     Chel_t chel      = {&loc, SPEED};

     Reaction_t react = {&loc, &score};

     PointEN_t locEN  = {291, 195, 5, 5};

     int time         = 0;

     int counter      = -2;

     int counteren    = 0;

     DrawLevel();

     HDC Cover        = txLoadImage ("Resourses\\Images\\Cover.bmp");

     txPlaySound ("Resourses\\Music\\track_1.wav", SND_ASYNC);

     DrawArbuz (386, 59);
     DrawArbuz (449, 269);
     DrawArbuz (95, 402);
     DrawArbuz (345, 449);
     DrawArbuz (723, 491);
     DrawArbuz (703, 294);

     FILE* Save;

     Save = fopen ("Save\\Solution_1.txt", "r");

     while (1)
     {
        txBegin();

        DrawTimeTable();

        Interface      (&score, &time, &time_end);

        DrawWalls_1();

        txSetColor     (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        txRectangle    (locEN.x - 13, locEN.y - 13, locEN.x + 13, locEN.y + 13);

        MoveEnemy (&locEN);

        counteren++;

        if (counteren % 12 < 5) DrawEnemy_1 (&locEN);

        else
            if (counteren % 12 < 9) DrawEnemy_2 (&locEN);

            else DrawEnemy_3 (&locEN);

        txTransparentBlt (txDC(), loc.x - 10, loc.y - 10, 21, 21, Cover, 0, 0, TX_WHITE);

        fscanf (Save, "%d  %d  ", &loc.x, &loc.y);

        counter++;

        if (counter > 2) counter = -2;

        if (counter < 0) DrawChel_1 (&loc);

           else DrawChel_2 (&loc);

        if (GetAsyncKeyState ('M')) sleep--;
		if (sleep < 0) sleep = 0;
        if (GetAsyncKeyState ('P')) sleep++;

        Sleep (sleep);

        if ((loc.y == 310) && (loc.x == 150))

        while (1)
        {
        txBegin();

        DrawTimeTable();

        Interface      (&score, &time, &time_end);

        DrawWalls_1();

        txSetColor     (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        txRectangle    (locEN.x - 13, locEN.y - 13, locEN.x + 13, locEN.y + 13);

        MoveEnemy (&locEN);

        counteren++;

        if (counteren % 12 < 5) DrawEnemy_1 (&locEN);

        else
            if (counteren % 12 < 9) DrawEnemy_2 (&locEN);

            else DrawEnemy_3 (&locEN);

        if ((loc.x < locEN.x + 14) &&
            (loc.x > locEN.x - 12) &&
            (loc.y < locEN.y + 13) &&
            (loc.y > locEN.y - 12)) return 0;

        txTransparentBlt (txDC(), loc.x - 10, loc.y - 10, 21, 21, Cover, 0, 0, TX_WHITE);

        if (Controls (&react) == 1)   {DrawChel_1 (&loc); return 0;};

        if (ReactionEnd1 (&loc) == 1) return score.points - 20 + time;

        counter++;

        if (counter > 2) counter = -2;

        if (counter < 0) DrawChel_1 (&loc);

           else DrawChel_2 (&loc);

        if (GetAsyncKeyState ('M')) sleep--;
		if (sleep < 0) sleep = 0;
        if (GetAsyncKeyState ('P')) sleep++;

        Sleep (sleep);
        }
     }

     time_end = time;

     fclose (Save);

     txDeleteDC (Cover);
}

//-----------------------------------------------------------------------------------------------

int DvigChel_2CHEAT()
{
     int time_end = clock();

     Point_t loc      = {25, 380};

     Score_t score    = {0};

     Chel_t chel      = {&loc, SPEED};

     Reaction_t react = {&loc, &score};

     PointEN_t locEN  = {80, 223, 3, 5};

     int time         = 0;

     int counter      = -2;

     int counteren    = 0;

     DrawLevel();

     HDC Cover        = txLoadImage ("Resourses\\Images\\Cover.bmp");

     txPlaySound ("Resourses\\Music\\track_1.wav", SND_ASYNC);

     DrawArbuz (122, 133);
     DrawArbuz (740, 429);
     DrawArbuz (580, 375);
     DrawArbuz (430,  47);
     DrawArbuz (128, 293);

     FILE* Save;
     Save = fopen ("Save\\Solution_2.txt", "r");

     while (1)
     {
           txBegin();

           DrawTimeTable();

           Interface      (&score, &time, &time_end);

           DrawWalls_2();

           txSetColor     (TX_YELLOW);
           txSetFillColor (TX_YELLOW);
           txRectangle    (locEN.x - 13, locEN.y - 13, locEN.x + 13, locEN.y + 13);

           MoveEnemy (&locEN);

           counteren++;

           if (counteren % 12 < 5) DrawEnemy_1 (&locEN);

           else
               if (counteren % 12 < 9) DrawEnemy_2 (&locEN);

               else DrawEnemy_3 (&locEN);

           txTransparentBlt (txDC(), loc.x - 10, loc.y - 10, 21, 21, Cover, 0, 0, TX_WHITE);

           if ((loc.x < locEN.x + 14) &&
               (loc.x > locEN.x - 12) &&
               (loc.y < locEN.y + 13) &&
               (loc.y > locEN.y - 12)) return 0;

           txTransparentBlt (txDC(), loc.x - 10, loc.y - 10, 21, 21, Cover, 0, 0, TX_WHITE);

           fscanf (Save, "%d  %d  ", &loc.x, &loc.y);

           counter++;

           if (counter > 2) counter = -2;

           if (counter < 0) DrawChel_1 (&loc);

                       else DrawChel_2 (&loc);

           if (GetAsyncKeyState ('M')) sleep--;
           if (sleep < 0) sleep = 0;
           if (GetAsyncKeyState ('P')) sleep++;

           Sleep (sleep);

           if ((loc.y == 150) && (loc.x == 745))

           while (1)
        {
        txBegin();

        DrawTimeTable();

        Interface      (&score, &time, &time_end);

        DrawWalls_2();

                   txSetColor     (TX_YELLOW);
           txSetFillColor (TX_YELLOW);
           txRectangle    (locEN.x - 13, locEN.y - 13, locEN.x + 13, locEN.y + 13);

           MoveEnemy (&locEN);

           counteren++;

           if (counteren % 12 < 5) DrawEnemy_1 (&locEN);

           else
               if (counteren % 12 < 9) DrawEnemy_2 (&locEN);

               else DrawEnemy_3 (&locEN);

           ReactionEnd2 (&loc);

           txTransparentBlt (txDC(), loc.x - 10, loc.y - 10, 21, 21, Cover, 0, 0, TX_WHITE);

           if ((loc.x < locEN.x + 14) &&
               (loc.x > locEN.x - 12) &&
               (loc.y < locEN.y + 13) &&
               (loc.y > locEN.y - 12)) return 0;

        txTransparentBlt (txDC(), loc.x - 10, loc.y - 10, 21, 21, Cover, 0, 0, TX_WHITE);

        if (Controls (&react) == 1)   {DrawChel_1 (&loc); return 0;};

        if (ReactionEnd2 (&loc) == 1) return score.points - 20 + time;

        counter++;

        if (counter > 2) counter = -2;

        if (counter < 0) DrawChel_1 (&loc);

           else DrawChel_2 (&loc);

        if (GetAsyncKeyState ('M')) sleep--;
        if (sleep < 0) sleep = 0;
        if (GetAsyncKeyState ('P')) sleep++;

        Sleep (sleep);
        }
           }
           txDeleteDC (Cover);
           fclose (Save);
}

//-----------------------------------------------------------------------------------------------

int DvigChel_3CHEAT()
{
     int time_end = clock();

     Point_t loc      = {29, 273};

     Score_t score    = {0};

     Chel_t chel      = {&loc, SPEED};

     PointEN_t locEN  = {290, 155, 5, 4};

     Reaction_t react = {&loc, &score};

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

     FILE* Save;
     Save = fopen ("Save\\Solution_3.txt", "r");

     while (1)
     {
           txBegin();

           DrawTimeTable();

           Interface      (&score, &time, &time_end);

           DrawWalls_3();

           txSetColor     (TX_YELLOW);
           txSetFillColor (TX_YELLOW);
           txRectangle    (locEN.x - 13, locEN.y - 13, locEN.x + 13, locEN.y + 13);

           MoveEnemy (&locEN);

           counteren++;

           if (counteren % 12 < 5) DrawEnemy_1 (&locEN);

           else
               if (counteren % 12 < 9) DrawEnemy_2 (&locEN);

               else DrawEnemy_3 (&locEN);

           txTransparentBlt (txDC(), loc.x - 10, loc.y - 10, 21, 21, Cover, 0, 0, TX_WHITE);

           fscanf (Save, "%d %d ", &loc.x, &loc.y);

           counter++;

           if (counter > 2) counter = -2;

           if (counter < 0) DrawChel_1 (&loc);

                       else DrawChel_2 (&loc);

           if (GetAsyncKeyState ('M')) sleep--;
           if (sleep < 0) sleep = 0;
           if (GetAsyncKeyState ('P')) sleep++;

           Sleep (sleep);

           if ((loc.y == 115) && (loc.x == 609))

           while (1)
        {
        txBegin();

        DrawTimeTable();

        Interface      (&score, &time, &time_end);

        DrawWalls_3();

        txSetColor     (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        txRectangle    (locEN.x - 13, locEN.y - 13, locEN.x + 13, locEN.y + 13);

        MoveEnemy (&locEN);

        counteren++;

        if (counteren % 12 < 5) DrawEnemy_1 (&locEN);

        else
            if (counteren % 12 < 9) DrawEnemy_2 (&locEN);

            else DrawEnemy_3 (&locEN);

        txTransparentBlt (txDC(), loc.x - 10, loc.y - 10, 21, 21, Cover, 0, 0, TX_WHITE);

        if (Controls (&react) == 1)   {DrawChel_1 (&loc); return 0;};

        if (ReactionEnd3 (&loc) == 1) return score.points - 20 + time;

        counter++;

        if (counter > 2) counter = -2;

        if (counter < 0) DrawChel_1 (&loc);

           else DrawChel_2 (&loc);

        if (GetAsyncKeyState ('M')) sleep--;
        if (sleep < 0) sleep = 0;
        if (GetAsyncKeyState ('P')) sleep++;

        Sleep (sleep);
        }
           }

           txDeleteDC (Cover);
}
