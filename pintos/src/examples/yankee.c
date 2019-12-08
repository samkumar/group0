/* yankee.c

   Plays "Yankee Doodle." */

#include "music.h"

#define YANKEE_PACE PACE_PRESTO
#define E MILLIS_EIGHTH(YANKEE_PACE)
#define Q MILLIS_QUARTER(YANKEE_PACE)
#define DQ MILLIS_DOTTED_QUARTER(YANKEE_PACE)
#define H MILLIS_HALF(YANKEE_PACE)

/*
 * Source for notes:
 * https://www.take-a-piano-sheet-music-break.com/support-files/yankee-doodle.pdf
 */
static void yankee_doodle(void) {
    note(FREQ_G4, Q, "Yan");
    note(FREQ_G4, Q, "kee ");
    note(FREQ_A4, Q, "Doo");
    note(FREQ_B4, Q, "dle ");
    note(FREQ_G4, Q, "went ");
    note(FREQ_B4, Q, "to ");
    note(FREQ_A4, Q, "town\n");
    note(FREQ_D4, Q, "A-");
    note(FREQ_G4, Q, "rid");
    note(FREQ_G4, Q, "ing ");
    note(FREQ_A4, Q, "on ");
    note(FREQ_B4, Q, "a ");
    note(FREQ_G4, H, "po");
    note(FREQ_Gb4, H, "ny,\n");

    note(FREQ_G4, Q, "Stuck ");
    note(FREQ_G4, Q, "a ");
    note(FREQ_A4, Q, "fea");
    note(FREQ_B4, Q, "ther ");
    note(FREQ_C5, Q, "in ");
    note(FREQ_B4, Q, "his ");
    note(FREQ_A4, Q, "cap\n");
    note(FREQ_G4, Q, "And ");
    note(FREQ_Gb4, Q, "called ");
    note(FREQ_D4, Q, "it ");
    note(FREQ_E4, Q, "mac");
    note(FREQ_Gb4, Q, "a");
    note(FREQ_G4, H, "ro");
    note(FREQ_G4, Q, "ni.\n\n");
    rest(Q);

    note(FREQ_E4, DQ, "Yan");
    note(FREQ_Gb4, E, "kee ");
    note(FREQ_E4, Q, "Doo");
    note(FREQ_D4, Q, "dle ");
    note(FREQ_E4, Q, "keep ");
    note(FREQ_Gb4, Q, "it ");
    note(FREQ_G4, H, "up,\n");
    note(FREQ_D4, DQ, "Yan");
    note(FREQ_E4, E, "kee ");
    note(FREQ_D4, Q, "Doo");
    note(FREQ_C4, Q, "dle ");
    note(FREQ_B3, H, "dan");
    note(FREQ_D4, H, "dy,\n");

    note(FREQ_E4, DQ, "Mind ");
    note(FREQ_Gb4, E, "the ");
    note(FREQ_E4, Q, "mu");
    note(FREQ_D4, Q, "sic ");
    note(FREQ_E4, Q, "and ");
    note(FREQ_Gb4, Q, "the ");
    note(FREQ_G4, Q, "step,\n");
    note(FREQ_E4, Q, "And ");
    note(FREQ_D4, Q, "with ");
    note(FREQ_G4, Q, "the ");
    note(FREQ_Gb4, Q, "girls ");
    note(FREQ_A4, Q, "be ");
    note(FREQ_G4, H, "han");
    note(FREQ_G4, Q, "dy.\n\n");
    rest(Q);
}

int main(int argc UNUSED, char** argv UNUSED) {
    yankee_doodle();
}
