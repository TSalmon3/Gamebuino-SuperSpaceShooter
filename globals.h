/* 
 * File:   globals.h
 * Author: Michael
 *
 * Created on 21 July 2014, 20:40
 */

#ifndef GLOBALS_H
#define	GLOBALS_H
#include <Gamebuino.h>

enum DIRECTION {D_NONE, DIR_N, DIR_NE, DIR_E, DIR_SE, DIR_S, DIR_SW, DIR_W, DIR_NW};
enum ENEMY_TYPE {DEAD, BASIC, SPINNER, WEAVER};
enum EFFECT_TYPE {E_NONE, EXPLOSION_SMALL, EXPLOSION_LARGE, FLASH};

typedef struct {
    int8_t x;
    int8_t y;
    int8_t w;
    int8_t h;
}HitBox;
    
#define MAX_BULLETS 64
#define BULLET_SIZE 3
#define DIAG_BULLET_SIZE 2
#define MAX_ENEMIES 10

#define SRC_PLAYER 0
#define SRC_ENEMY 1

#endif	/* GLOBALS_H */

