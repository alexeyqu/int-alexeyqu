//FILE_SORT

void Sort (int array[], int modesort)
{
     switch (modesort)
     {
         case 1: Sort_Selection (array); break;
         case 2: Sort_Bubble (array); break;
         case 3: Sort_Shaker (array); break;
         case 4: Sort_Simple_Ins (array); break;
         case 5: Sort_Binary_Ins (array); break;
         case 6: Sort_Quick (array, 0, ARR_SIZE - 1); break;
         case 7: Sort_Heap (array); break;
         case 8: Sort_Merge (array, 0, ARR_SIZE - 1); break;
//         case 9: qsort (array, ARR_SIZE, sizeof (int), compare); break;
     }
}

void Sort_Selection (int array[])
{
      int i;
      int buf;
      int counter = 0;
      int minpos = 0;

      while (counter < ARR_SIZE)
      {
           minpos = Search (array, counter);

           Ncomps++;

           if (minpos != counter)
           {
              Nswaps++;

              buf = array[minpos];
              array[minpos] = array[counter];
              array[counter] = buf;
           }

           counter++;
      }
}

int  Search (int array[], int counter)
{
     int i;
     int min;
     int k = counter;

     min = array[counter];

     for (i = counter + 1; i < ARR_SIZE; i++)
     {
         Ncomps++;

         if (array[i] < min) {min = array[i]; k = i;};
     }

     return k;
}

void Sort_Bubble (int array[])
{
     int i = 0;
     int buf;
     int MAX = 1;
     int Nchecks = 0;

     while (Nchecks < ARR_SIZE)
     {
           MAX = 0;

           for (i = 0; i < ARR_SIZE - Nchecks - 1; i++)
           {

           Ncomps++;

           if (array[i] > array[i + 1]) {buf = array[i];
                                         array[i] = array[i + 1];
                                         array[i + 1] = buf;
                                         MAX++;}
           }

           Nchecks++;
           Nswaps += MAX;
           Ncomps;
     }
}

void Sort_Shaker (int array[])
{
     int i = 0;
     int buf;
     int MAX = 1;
     int Nchecks = 0;

     while (MAX != 0)
     {
           MAX = 0;

           for (i = Nchecks; i < ARR_SIZE - Nchecks - 1; i++)
           {

           Ncomps++;

           if (array[i] > array[i + 1]) {buf = array[i];
                                         array[i] = array[i + 1];
                                         array[i + 1] = buf;
                                         MAX++;}
           }

           Nswaps += MAX;
     }
     
     while (MAX != 0)
     {
           MAX = 0;

           for (i = ARR_SIZE - Nchecks; i > Nchecks; i--)
           {

           Ncomps++;

           if (array[i] < array[i - 1]) {buf = array[i];
                                         array[i] = array[i - 1];
                                         array[i - 1] = buf;
                                         MAX++;}
           }

           Nchecks++;
           
           Nswaps += MAX;
     }
}

void Sort_Simple_Ins (int array[])
{
      int i;
      int counter;

      for (counter = 1; counter < ARR_SIZE; counter++)
      {
          for (i = 0; i < counter; i++)
          {
              Ncomps++;

              if (array[counter] < array[i])
              {
                 ROL (array, i, counter);
                 break;
              }
          }

      }
}

void Sort_Binary_Ins (int array[])
{
     int counter;

     for (counter = 1; counter < ARR_SIZE; counter++)
     {
         int left = 0;
         int right = counter;

         while (left < right)
         {
             int middle = (left + right) / 2;

             Ncomps++;

             if (array[counter] >= array[middle]) left = middle + 1;

             else

             right = middle;
         }

         if (right != counter) ROL (array, right, counter);
     }
}

void ROL (int array[], int start, int finish)
{
     int i = 0;
     int buf;

     buf = array[finish];

     for (i = finish; i > start; i--)
     {
         array[i] = array[i - 1];

         Nswaps++;
     }

     Nswaps++;

     array[start] = buf;
}

void Sort_Quick (int array[], int start, int finish)
{
	int l = start;
    int r = finish;
	int middle = (start + finish)/2;

    while (l <= r)
    {
		while (Ncomps++, array[l] < array[middle]) {l++;}
		while (Ncomps++, array[r] > array[middle]) {r--;}

        if (l <= r)
		{
            if (l != r)
            {
			    int buf = array[l];
    			array[l] = array[r];
    			array[r] = buf;

    			Nswaps++;
            }
    			l++; r--;
		}
	}

    if (start < r)  Sort_Quick(array, start, r);
    if (l < finish) Sort_Quick(array, l, finish);
}

void Sort_Heap (int array[])
{
     int k = ARR_SIZE;

     for (int i = ARR_SIZE/2; i >= 1; i--)
     {
         SiftDown (array, i, ARR_SIZE);
     }

     while (k > 1)
     {
         Swap (array, k, 1);

         Nswaps++;

         SiftDown (array, 1, k - 1);

         k--;
     }
}

void SiftDown (int array[], int k, int n)
{
     int newElt;
     int child;

     newElt=array[k];

     while (k <= n/2)
     {
         child = 2*k;

         if((child < n) && (array[child] < array[child+1])) child++;

         Ncomps++;

         if(newElt >= array[child]) break;

         Ncomps++;

         array[k] = array[child];
         k = child;

         Nswaps++;

         Ncomps++;
     }

     array[k] = newElt;
}

void Swap (int array[], int start, int finish)
{
     int buf = array[start];

     array[start] = array[finish];

     array[finish] = buf;
}

void Sort_Merge (int array[], int start, int finish)
{
    int middle = (start + finish)/2;

    if (start < middle) Sort_Merge (array, start, middle);

    if (middle + 1 < finish) Sort_Merge (array, middle + 1, finish);

    int arr1[ARR_SIZE];

    int arr2[ARR_SIZE];

    for (int i = start; i <= middle; i++)
    {
        arr1[i] = array[i];
    }

    for (int i = middle + 1; i <= finish; i++)
    {
        arr2[i] = array[i];
    }

    int i = start;

    int j = middle + 1;

    int k = start;

    while (i <= middle && j <= finish)
    {
          if (arr1[i] < arr2[j]) {array[k] = arr1[i]; i++; k++;}
          else                   {array[k] = arr2[j]; j++; k++;}

          Ncomps++;
          Nswaps++;
    }

    while (i <= middle)
    {
          array[k] = arr1[i];

          Nswaps++;

          k++;
          i++;
    }

    while (j <= finish)
    {
          array[k] = arr2[j];

          Nswaps++;

          k++;
          j++;
    }
}

int compare( const void *arg1, const void *arg2 )
{
    Ncomps++;

    if(*(int*)arg1 > *(int*)arg2)
    {
        return 1;
    }
    if(*(int*)arg1 < *(int*)arg2)
    {
        return -1;
    }
    if(*(int*)arg1 == *(int*)arg2)
    {
        return 0;
    }
}
