//FILE_FILL

void Fill (int array[], int modefill)
{
     switch (modefill)
     {
         case 1: Fill_incr (array); break;
         case 2: Fill_decr (array); break;
         case 3: Fill_rndp (array); break;
         case 4: Fill_rand (array); break;
     }
}

void Fill_incr (int array[])
{     
     for (int i = 0; i < ARR_SIZE; i++)
     {
         array[i] = i + 1;
     }
}

void Fill_decr (int array[])
{
     for (int i = 0; i < ARR_SIZE; i++)
     {
         array[i] = ARR_SIZE - i;
     }
}

void Fill_rndp (int array[])
{
     for (int i = 0; i < ARR_SIZE; i++)
     {
         array[i] = rand()%5;
     }
}

void Fill_rand (int array[])
{
     for (int i = 0; i < ARR_SIZE; i++)
     {
         array[i] = rand();
     }
}
