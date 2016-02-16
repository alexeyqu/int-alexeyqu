//-----------------------------------------------------------------------------------------------
//FILE_1st_LEVEL---------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

int DvigChel_1 (int x, int y)
{
     int time_end     = clock();

     Point_t loc      = {x, y};

     Score_t score    = {0};

     Chel_t chel      = {&loc, SPEED};

     Reaction_t react = {&loc, &score};

     PointEN_t locEN  = {291, 195, 5, 5};

     PointEN_t locEN2 = {500, 500, 1, 1};

     PointEN_t locEN3 = {400, 550, 4, 4};

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

     while (1)
     {
        txBegin();

        DrawTimeTable();

        Interface      (&score, &time, &time_end);

        DrawWalls_1();

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

        if ((loc.x < locEN.x + 14) &&
            (loc.x > locEN.x - 12) &&
            (loc.y < locEN.y + 13) &&
            (loc.y > locEN.y - 12)) return 0;

        txSetColor     (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        txRectangle    (locEN2.x - 13, locEN2.y - 13, locEN2.x + 13, locEN2.y + 13);

        MoveEnemy (&locEN2);

        counteren++;

        if (counteren % 12 < 5) DrawEnemy_1 (&locEN2);

        else
            if (counteren % 12 < 9) DrawEnemy_2 (&locEN2);

            else DrawEnemy_3 (&locEN2);

        if ((loc.x < locEN2.x + 14) &&
            (loc.x > locEN2.x - 12) &&
            (loc.y < locEN2.y + 13) &&
            (loc.y > locEN2.y - 12)) return 0;

        txSetColor     (TX_YELLOW);
        txSetFillColor (TX_YELLOW);
        txRectangle    (locEN3.x - 13, locEN3.y - 13, locEN3.x + 13, locEN3.y + 13);

        MoveEnemy (&locEN3);

        counteren++;

        if (counteren % 12 < 5) DrawEnemy_1 (&locEN3);

        else
            if (counteren % 12 < 9) DrawEnemy_2 (&locEN3);

            else DrawEnemy_3 (&locEN3);

        if ((loc.x < locEN3.x + 14) &&
            (loc.x > locEN3.x - 12) &&
            (loc.y < locEN3.y + 13) &&
            (loc.y > locEN3.y - 12)) return 0;

        txTransparentBlt (txDC(), loc.x - 10, loc.y - 10, 21, 21, Cover, 0, 0, TX_WHITE);

        if (Controls (&react) == 1)   {DrawChel_1 (&loc); return 0;};

        if (ReactionEnd1 (&loc) == 1) 
                         {
                                if (score.points > 400) return score.points + 20 - time;
                         };
                         
        if (time > 40) return 0;

        counter++;

        if (counter > 2) counter = -2;

        if (counter < 0) DrawChel_1 (&loc);

           else DrawChel_2 (&loc);

		if (GetAsyncKeyState ('M')) sleep--;
		if (sleep < 0) sleep = 0;
        if (GetAsyncKeyState ('P')) sleep++;

        if (GetAsyncKeyState (VK_ESCAPE)) MenuInGame(&loc, 1);

        Sleep (sleep);
     }

     time_end = time;

     txDeleteDC (Cover);
}
