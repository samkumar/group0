/* railroad.c

   Plays "I've Been Working on the Railroad." */

#include "music.h"

#define RAILROAD_PACE PACE_ALLEGRETTO
#define S MILLIS_SIXTEENTH(RAILROAD_PACE)
#define E MILLIS_EIGHTH(RAILROAD_PACE)
#define DE MILLIS_DOTTED_EIGHTH(RAILROAD_PACE)
#define Q MILLIS_QUARTER(RAILROAD_PACE)
#define DQ MILLIS_DOTTED_QUARTER(RAILROAD_PACE)
#define H MILLIS_HALF(RAILROAD_PACE)
#define W MILLIS_WHOLE(RAILROAD_PACE)

/*
 * Source for notes:
 * https://www.8notes.com/scores/6974.asp
 */
static void ive_been_working_on_the_railroad(void) {
    note(FREQ_G4, DQ, "I've ");
    note(FREQ_D4, E, "been ");
    note(FREQ_G4, DE, "wor");
    note(FREQ_D4, S, "kin' ");
    note(FREQ_G4, DE, "on ");
    note(FREQ_A4, S, "the ");
    note(FREQ_B4, H, "rail");
    note(FREQ_G4, H, "road,\n");
    note(FREQ_C5, DQ, "All ");
    note(FREQ_C5, E, "the ");
    note(FREQ_G4, Q, "live");
    note(FREQ_A4, Q, "long ");
    note(FREQ_B4, W, "day.\n");

    note(FREQ_G4, DQ, "I've ");
    note(FREQ_D4, E, "been ");
    note(FREQ_G4, DE, "wor");
    note(FREQ_D4, S, "kin' ");
    note(FREQ_G4, DE, "on ");
    note(FREQ_A4, S, "the ");
    note(FREQ_B4, H, "rail");
    note(FREQ_G4, Q, "road,\n");
    note(FREQ_B4, DE, "Just ");
    note(FREQ_B4, S, "to ");
    note(FREQ_B4, Q, "pass ");
    note(FREQ_A4, Q, "the ");
    note(FREQ_A4, Q, "time ");
    note(FREQ_B4, Q, "a");
    note(FREQ_A4, W, "way.\n\n");

    note(FREQ_A4, DQ, "Can't ");
    note(FREQ_A4, E, "you ");
    note(FREQ_Ab4, DE, "hear ");
    note(FREQ_A4, S, "the ");
    note(FREQ_B4, DE, "whis");
    note(FREQ_A4, S, "tle ");
    note(FREQ_G4, H, "blow");
    note(FREQ_D4, H, "ing,\n");
    note(FREQ_C5, Q, "Rise ");
    note(FREQ_C5, DE, "up ");
    note(FREQ_C5, S, "so ");
    note(FREQ_G4, DE, "ear");
    note(FREQ_G4, S, "ly ");
    note(FREQ_A4, DE, "in ");
    note(FREQ_A4, S, "the ");
    note(FREQ_B4, W, "morn?\n");

    note(FREQ_E4, DQ, "Can't ");
    note(FREQ_Gb4, E, "you ");
    note(FREQ_G4, DE, "hear ");
    note(FREQ_Gb4, S, "the ");
    note(FREQ_G4, DE, "cap");
    note(FREQ_E4, S, "tain ");
    note(FREQ_D4, H, "shout");
    note(FREQ_G4, H, "ing,\n");
    note(FREQ_B4, Q, "\"Di");
    note(FREQ_C5, Q, "nah ");
    note(FREQ_B4, Q, "blow ");
    note(FREQ_A4, Q, "your ");
    note(FREQ_G4, W, "horn!\"\n\n");
}

int main(int argc UNUSED, char** argv UNUSED) {
    ive_been_working_on_the_railroad();
}
