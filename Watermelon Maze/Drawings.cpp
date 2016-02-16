//-----------------------------------------------------------------------------------------------
//FILE_DRAWINGS----------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

void DrawLevel()
{
     HDC Background = txLoadImage ("Resourses\\Images\\Background.bmp");

     txBitBlt       (txDC(), 0, 0, 800, 600, Background, 0, 0, SRCCOPY);

     txDeleteDC(Background);
}

//-----------------------------------------------------------------------------------------------

void DrawWalls_1()
{
     HDC Level_1 = txLoadImage ("Resourses\\Images\\Walls_1.bmp");

     txTransparentBlt      (txDC(), 0, 0, 800, 600, Level_1, 0, 0, TX_WHITE);

     txDeleteDC    (Level_1);
}

void DrawWalls_2()
{
     HDC Level_2 = txLoadImage ("Resourses\\Images\\Walls_2.bmp");

     txTransparentBlt      (txDC(), 0, 0, 800, 600, Level_2, 0, 0, TX_WHITE);

     txDeleteDC            (Level_2);
}

void DrawWalls_3()
{
     HDC Level_3 = txLoadImage ("Resourses\\Images\\Walls_3.bmp");

     txTransparentBlt      (txDC(), 0, 0, 800, 600, Level_3, 0, 0, TX_WHITE);

     txDeleteDC            (Level_3);
}

//-----------------------------------------------------------------------------------------------

void DrawChel_1 (Point_t* loc)
{
     HDC Chel_1 = txLoadImage ("Resourses\\Images\\Chel_1a.bmp");

     txTransparentBlt (txDC(), loc->x - 10, loc->y - 10, 21, 21, Chel_1, 0, 0, TX_WHITE);

     txDeleteDC (Chel_1);
}

void DrawChel_2 (Point_t* loc)
{
     HDC Chel_2 = txLoadImage ("Resourses\\Images\\Chel_2a.bmp");

     txTransparentBlt (txDC(), loc->x - 10, loc->y - 10, 21, 21, Chel_2, 0, 0, TX_WHITE);

     txDeleteDC (Chel_2);
}

//---------------------------------------------------------------------------------------------

void DrawEnemy_1 (PointEN_t* locEN)
{
     HDC Enemy = txLoadImage ("Resourses\\Images\\Enemy.bmp");

     txBitBlt  (txDC(), locEN->x - 12, locEN->y - 12, 25, 25, Enemy, 0, 0, SRCCOPY);

     txDeleteDC(Enemy);
}

void DrawEnemy_2 (PointEN_t* locEN)
{
     HDC Enemy = txLoadImage ("Resourses\\Images\\Enemy_1.bmp");

     txBitBlt  (txDC(), locEN->x - 12, locEN->y - 12, 25, 25, Enemy, 0, 0, SRCCOPY);

     txDeleteDC(Enemy);
}

void DrawEnemy_3 (PointEN_t* locEN)
{
     HDC Enemy = txLoadImage ("Resourses\\Images\\Enemy_2.bmp");

     txBitBlt  (txDC(), locEN->x - 12, locEN->y - 12, 25, 25, Enemy, 0, 0, SRCCOPY);

     txDeleteDC(Enemy);
}

//-----------------------------------------------------------------------------------------------

void DrawArbuz (int x, int y)
{
     HDC Arbuz = txLoadImage ("Resourses\\Images\\Arbuz.bmp");

     txBitBlt (txDC(), x, y, 26, 25, Arbuz, 0, 0, SRCCOPY);

     txDeleteDC (Arbuz);
}

//-----------------------------------------------------------------------------------------------

void DrawTimeTable()
{
     HDC Timetable = txLoadImage ("Resourses\\Images\\Wallpapers.bmp");

     txBitBlt        (txDC(), 800, 0, 150, 600, Timetable, 0, 0, SRCCOPY);

     txSetFillColor  (TX_YELLOW);
     txRectangle     (805, 15, 920, 55);

     txSetFillColor  (TX_YELLOW);
     txRectangle     (805, 65, 920, 105);

     txSetFillColor  (TX_YELLOW);
     txRectangle     (805, 115, 920, 155);

     txDeleteDC      (Timetable);
}
