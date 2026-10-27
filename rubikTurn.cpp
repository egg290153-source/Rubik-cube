#include <Arduino.h>
#include "rubikTurn.h"
#include "Motors.h"

void allMoves(String word) {
    if (word.length() == 0) return;

    int M_STEPS;
    int M_DIRS;
    int M_ENS;

    switch (word[0]) {
        case 'R':
            M_STEPS = 54;
            M_DIRS = 55;
            M_ENS = 38;
            break;

        case 'L':
            M_STEPS = 60;
            M_DIRS = 61;
            M_ENS = 56;
            break;

        case 'U':
            M_STEPS = 46;
            M_DIRS = 48;
            M_ENS = 62;
            break;

        case 'D':
            M_STEPS = 26;
            M_DIRS = 28;
            M_ENS = 24;
            break;

        case 'F':
            M_STEPS = 36;
            M_DIRS = 34;
            M_ENS = 30;
            break;

        case 'B':
            M_STEPS = 40;
            M_DIRS = 42;
            M_ENS = 44;
            break;

        default:
            return;
    }

    if (word.length() == 1) {
        turnClock(M_STEPS, M_DIRS, M_ENS);
    }
    else if (word[1] == '\'') {
        turnCounter(M_STEPS, M_DIRS, M_ENS);
    }
    else if (word[1] == '2') {
        turn180Clock(M_STEPS, M_DIRS, M_ENS);
    }
}
