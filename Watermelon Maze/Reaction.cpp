//-----------------------------------------------------------------------------------------------
//FILE_REACTION----------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------


int  Reaction (Reaction_t* react)
{
     int reaction = 0;
     
     printf ("%d\n", HP);

     if    (txGetPixel  (react->loc->x, react->loc->y)      == TX_WALLS  ||

            txGetPixel  (react->loc->x + 11, react->loc->y + 11) == TX_WALLS  ||
            txGetPixel  (react->loc->x - 11, react->loc->y - 11) == TX_WALLS  ||
            txGetPixel  (react->loc->x - 11, react->loc->y + 11) == TX_WALLS  ||
            txGetPixel  (react->loc->x + 11, react->loc->y - 11) == TX_WALLS  ||

            txGetPixel  (react->loc->x + 6, react->loc->y + 6) == TX_WALLS  ||
            txGetPixel  (react->loc->x - 6, react->loc->y - 6) == TX_WALLS  ||
            txGetPixel  (react->loc->x - 6, react->loc->y + 6) == TX_WALLS  ||
            txGetPixel  (react->loc->x + 6, react->loc->y - 6) == TX_WALLS  ||

            txGetPixel  (react->loc->x + 11, react->loc->y) == TX_WALLS  ||
            txGetPixel  (react->loc->x - 11, react->loc->y) == TX_WALLS  ||
            txGetPixel  (react->loc->x, react->loc->y + 11) == TX_WALLS  ||
            txGetPixel  (react->loc->x, react->loc->y - 11) == TX_WALLS  ||
            
            react->loc->x < 20                                           ||
            react->loc->x > 780                                          ||
            react->loc->y > 580                                          ||
            react->loc->y < 20) 
            
            {
            if (HP <= 0) reaction = 1;
            else {
                      DIR *= -1;
                      if (abs (DIR) == 1) react->loc->y -= abs (DIR)/DIR;
                      else
                          react->loc->x -= abs (DIR)/DIR;
                      HP-=0.05;
                 };
            };

     if  (((txGetPixel  (react->loc->x + 10, react->loc->y) != TX_WALLS)   &&
           (txGetPixel  (react->loc->x + 10, react->loc->y) != TX_YELLOW)  &&
           (txGetPixel  (react->loc->x + 10, react->loc->y) != TX_GREEN)   &&
           (txGetPixel  (react->loc->x + 10, react->loc->y) != TX_DGREEN)  &&
           (txGetPixel  (react->loc->x + 10, react->loc->y) != TX_RED))    ||
          ((txGetPixel  (react->loc->x - 10, react->loc->y) != TX_WALLS)   &&
           (txGetPixel  (react->loc->x - 10, react->loc->y) != TX_YELLOW)  &&
           (txGetPixel  (react->loc->x - 10, react->loc->y) != TX_DGREEN)  &&
           (txGetPixel  (react->loc->x - 10, react->loc->y) != TX_GREEN)   &&
           (txGetPixel  (react->loc->x - 10, react->loc->y) != TX_RED))    ||
          ((txGetPixel  (react->loc->x, react->loc->y + 10) != TX_WALLS)   &&
           (txGetPixel  (react->loc->x, react->loc->y + 10) != TX_YELLOW)  &&
           (txGetPixel  (react->loc->x, react->loc->y + 10) != TX_DGREEN)  &&
           (txGetPixel  (react->loc->x, react->loc->y + 10) != TX_GREEN)   &&
           (txGetPixel  (react->loc->x, react->loc->y + 10) != TX_RED))    ||
          ((txGetPixel  (react->loc->x, react->loc->y - 10) != TX_WALLS)   &&
           (txGetPixel  (react->loc->x, react->loc->y - 10) != TX_YELLOW)  &&
           (txGetPixel  (react->loc->x, react->loc->y - 10) != TX_DGREEN)  &&
           (txGetPixel  (react->loc->x, react->loc->y - 10) != TX_GREEN)   &&
           (txGetPixel  (react->loc->x, react->loc->y - 10) != TX_RED)))

           {react->points->points = react->points->points + 10; };

     return reaction;
}

//---------------------------------------------------------------------------------------------

int ReactionEnd1 (Point_t* loc)
{
     int reaction = 0;

     if   ((352 < loc->x - ManR) &&
           (389 > loc->x + ManR) &&
           (262 < loc->y - ManR) &&
           (298 > loc->y + ManR)) reaction = 1;

     return reaction;
}

int ReactionEnd2 (Point_t* loc)
{
     int reaction = 0;

     if   ((763 < loc->x + ManR) &&
           (799 > loc->x) &&
           (337 < loc->y) &&
           (373 > loc->y)) reaction = 1;

     return reaction;
}

int ReactionEnd3 (Point_t* loc)
{
     int reaction = 0;

     if   ((755 < loc->x + ManR) &&
           (791 > loc->x) &&
           (100 < loc->y) &&
           (129 > loc->y)) reaction = 1;

     return reaction;
}
