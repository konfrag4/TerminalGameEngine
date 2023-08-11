#ifndef ASSETS_H
#define ASSETS_H

/*                y  x */
char playerSprite[3][5] =  {
    {' ', ' ', '!', ' ', ' '},
    {'#', '#', '#', '#', '#'},
    {'#', '#', '#', '#', '#'}
};

/*               y  x */
char enemySprite[3][4] = {
    {' ', '@', '@', ' '},
    {'@', '@', '@', '@'},
    {' ', '@', '@', ' '}
};

/*                y  x */
char bulletSprite[1][1] = {
    {'^'}
};

#endif