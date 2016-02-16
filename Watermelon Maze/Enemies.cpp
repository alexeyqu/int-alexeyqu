//-----------------------------------------------------------------------------------------------
//FILE_ENEMIES-----------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

void MoveEnemy (PointEN_t* locEN)
{
       int counter = 0;

       while (counter < abs(locEN->SPEEDENX) || counter < abs(locEN->SPEEDENY))
       {
           locEN->x+=(locEN->SPEEDENX/abs(locEN->SPEEDENX));
           locEN->y+=(locEN->SPEEDENY/abs(locEN->SPEEDENY));
    
           if (txGetPixel (locEN->x + 13, locEN->y) == TX_WALLS ||
               txGetPixel (locEN->x - 13, locEN->y) == TX_WALLS)
               locEN->SPEEDENX *= -1;
    
           if (txGetPixel (locEN->x, locEN->y + 13) == TX_WALLS ||
               txGetPixel (locEN->x, locEN->y - 13) == TX_WALLS)
               locEN->SPEEDENY *= -1;
    
           counter++;
       }
}
