//-----------------------------------------------------------------------------------------------
//FILE_IPS---------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

void Interface (Score_t* score, int* time, int* time_end)
{
     HDC Lifebar = txLoadImage ("Resourses\\Images\\Lifes.bmp");
     
     *time = clock() - *time_end;

     *time = *time/1000;

     char points_1     [10] = "###"; sprintf (points_1, "Очки: %d", score->points);
     char out          [10] = "###"; sprintf (out, "Время: %d", *time);

     txSelectFont ("Arial Narrow", 30);
     txSetColor   (TX_RED, 5);
     txTextOut    (810, 20, out);
     txTextOut    (810, 70, points_1);
     
     txTransparentBlt (txDC(), 810, 125, HP, 21, Lifebar, 0, 0, TX_WHITE);
     
     txDeleteDC (Lifebar);
}

//-----------------------------------------------------------------------------------------------

int  Pause()
{
     int result = 0;

     while (1)
     {
           if (GetAsyncKeyState (VK_RETURN))         return 1;
           if (GetAsyncKeyState (VK_ESCAPE))         return 2;
           if (GetAsyncKeyState ('F')) abort();
     }

}

//-----------------------------------------------------------------------------------------------

void Sleep (int sleep)
{
	txSleep (sleep);
}
