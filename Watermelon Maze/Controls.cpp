//-----------------------------------------------------------------------------------------------
//FILE_CONTROLS----------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------

int  Controls (Reaction_t* react)
{
     int counter = 0;
     int result = 0;

     if (GetAsyncKeyState (VK_UP))      while (counter < SPEED)
                                        {
                                              DIR = UP;
                                              react->loc->y--;
                                              result = Reaction (react);
                                              if (result == 1) return 1;
                                              counter++;
                                        }
     else
     if (GetAsyncKeyState (VK_DOWN))    while (counter < SPEED)
                                        {
                                              DIR = DOWN;
                                              react->loc->y++;
                                              result = Reaction (react);
                                              if (result == 1) return 1;
                                              counter++;
                                        }
     else
     if (GetAsyncKeyState (VK_LEFT))    while (counter < SPEED)
                                        {
                                              DIR = LEFT;
                                              react->loc->x--;
                                              result = Reaction (react);
                                              if (result == 1) return 1;
                                              counter++;
                                        }
     else
     if (GetAsyncKeyState (VK_RIGHT))   while (counter < SPEED)
                                        {
                                              DIR = RIGHT;
                                              react->loc->x++;
                                              result = Reaction (react);
                                              if (result == 1) return 1;
                                              counter++;
                                        }
     else
result = Reaction (react);
return result;
}
