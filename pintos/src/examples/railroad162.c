/* railroad.c

   Plays the CS 162 edition of "I've Been Working on the Railroad." */

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
static void ive_been_working_on_my_pintos(void) {
    note(FREQ_G4, DQ, "I've ");
    note(FREQ_D4, E, "been ");
    note(FREQ_G4, DE, "wor");
    note(FREQ_D4, S, "kin' ");
    note(FREQ_G4, DE, "on ");
    note(FREQ_A4, S, "my ");
    note(FREQ_B4, H, "Pin");
    note(FREQ_G4, H, "tos,\n");
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
    note(FREQ_A4, S, "my ");
    note(FREQ_B4, H, "Pin");
    note(FREQ_G4, Q, "tos,\n");
    note(FREQ_B4, DE, "'Cause ");
    note(FREQ_B4, S, "the ");
    note(FREQ_B4, Q, "proj");
    note(FREQ_A4, Q, "ect's ");
    note(FREQ_A4, Q, "un");
    note(FREQ_B4, Q, "der");
    note(FREQ_A4, W, "way.\n\n");

    note(FREQ_A4, DQ, "Can't ");
    note(FREQ_A4, E, "you ");
    note(FREQ_Ab4, DE, "feel ");
    note(FREQ_A4, S, "the ");
    note(FREQ_B4, DE, "dead");
    note(FREQ_A4, S, "line ");
    note(FREQ_G4, H, "com");
    note(FREQ_D4, H, "ing,\n");
    note(FREQ_C5, Q, "While ");
    note(FREQ_C5, DE, "im");
    note(FREQ_C5, S, "ple");
    note(FREQ_G4, DE, "ment");
    note(FREQ_G4, S, "ing ");
    note(FREQ_A4, DE, "your ");
    note(FREQ_A4, S, "de");
    note(FREQ_B4, W, "sign?\n");

    note(FREQ_E4, DQ, "Don't ");
    note(FREQ_Gb4, E, "wait ");
    note(FREQ_G4, DE, "un");
    note(FREQ_Gb4, S, "til ");
    note(FREQ_G4, DE, "Fri");
    note(FREQ_E4, S, "day ");
    note(FREQ_D4, H, "morn");
    note(FREQ_G4, H, "ing;\n");
    note(FREQ_B4, Q, "Proj");
    note(FREQ_C5, Q, "ect's ");
    note(FREQ_B4, Q, "due ");
    note(FREQ_A4, Q, "at ");
    note(FREQ_G4, W, "nine!\n\n");
}

int main(int argc UNUSED, char** argv UNUSED) {
    ive_been_working_on_my_pintos();
}
