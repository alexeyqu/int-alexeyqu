//-----------------------------------------------------------------------------------------------
//FILE_PROTOTYPES--------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

struct Point_t
       {
       int x, y;
       };

struct Chel_t
       {
       Point_t* loc;
       int speed;
       };

struct Score_t
       {
       int points;
       };

struct Reaction_t
       {
       Point_t* loc;
       Score_t* points;
       };

struct PointEN_t
       {
       int x, y;
       int SPEEDENX, SPEEDENY;
       };

//-----------------------------------------------------------------------------------------------

int DIR;

int sleep = 0;

const int SPEED = 10;

const int ManR = 11;

double HP = 105.0;

//-----------------------------------------------------------------------------------------------

int  Reaction   (Reaction_t* react);

int ReactionEnd1(Point_t* loc);

int ReactionEnd2(Point_t* loc);

int ReactionEnd3(Point_t* loc);

void MenuInGame (Point_t* loc, int levnum);

void Sleep		(int sleep);

int  Pause      ();

void Interface  (Score_t* score, int* time, int* time_end);

void DrawLevel  ();

void DrawWalls_1();

void DrawWalls_2();

void DrawWalls_3();

void DrawEnemy_1(PointEN_t* locEN);

void DrawEnemy_2(PointEN_t* locEN);

void DrawEnemy_3(PointEN_t* locEN);

void DrawChel_1 (Point_t* loc);

void DrawChel_2 (Point_t* loc);

void DrawArbuz  (int x, int y);

void DrawTimeTable();

int  Controls   (Reaction_t* react);

int  DvigChel_1CHEAT ();

int  DvigChel_2CHEAT ();

int  DvigChel_3CHEAT ();

void MoveEnemy (PointEN_t* locEN);

int  DvigChel_3 (int x, int y);

int  DvigChel_2 (int x, int y);

int  DvigChel_1 (int x, int y);

int  Game (int counter, int x, int y);

void SaveGame (int levnum, Point_t* loc);

void LoadGame (int* levnum, Point_t* loc);

void Bonus (Score_t* score);
