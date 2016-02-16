//FILE_PROTOTYPES

int ARR_SIZE;
int Nswaps;
int Ncomps;
int modefill = 0;
int modesort = 0;

void CheckButtons();
void Fill (int array[], int modefill);
void Fill_incr (int array[]);
void Fill_decr (int array[]);
void Fill_rndp (int array[]);
void Fill_rand (int array[]);
void Menu();
void Sort (int array[], int modesort);
void Sort_Selection (int array[]);
void Sort_Bubble (int array[]);
void Sort_Shaker (int array[]);
void Sort_Simple_Ins (int array[]);
void Sort_Binary_Ins (int array[]);
void Sort_Quick (int array[], int start, int finish);
void Sort_Heap (int array[]);
void Sort_Merge (int array[], int start, int finish);
void ReFill (int array[], int start, int counter);
void ROL (int array[], int start, int finish);
void ROR (int array[], int start, int finish);
void Swap (int array[], int start, int finish);
void Show (int array[], int modesort);
void SiftDown (int array[], int i, int n);
int  Search (int array[], int counter);
int  compare( const void *arg1, const void *arg2 ); 
void Print (int arr_sizes[], int arr_swaps[], int arr_comps[]);
