/* auld.c

   Plays "Auld Lang Syne." */

#include "music.h"

#define AULD_PACE PACE_ADAGIO
#define S MILLIS_SIXTEENTH(AULD_PACE)
#define DS MILLIS_DOTTED_SIXTEENTH(AULD_PACE)
#define E MILLIS_EIGHTH(AULD_PACE)
#define DE MILLIS_DOTTED_EIGHTH(AULD_PACE)
#define Q MILLIS_QUARTER(AULD_PACE)
#define DQ MILLIS_DOTTED_QUARTER(AULD_PACE)
#define H MILLIS_HALF(AULD_PACE)
#define DH MILLIS_DOTTED_HALF(AULD_PACE)

/*
 * Source for notes:
 * https://www.8notes.com/scores/1476.asp
 * Source for words:
 * https://en.wikipedia.org/wiki/Auld_Lang_Syne
 */
static void auld_lang_syne(void) {
    note(FREQ_C4, Q, "Should ");
    note(FREQ_F4, DQ, "old ");
    note(FREQ_F4, E, "ac");
    note(FREQ_F4, Q, "quain");
    note(FREQ_A4, Q, "tance ");
    note(FREQ_G4, DQ, "be ");
    note(FREQ_F4, E, "for");
    note(FREQ_G4, Q, "got,\n");
    note(FREQ_A4, Q, "And ");
    note(FREQ_F4, DQ, "ne");
    note(FREQ_F4, E, "ver ");
    note(FREQ_A4, Q, "brought ");
    note(FREQ_C5, Q, "to ");
    note(FREQ_D5, DH, "mind?\n");

    note(FREQ_D5, Q, "Should ");
    note(FREQ_C5, DQ, "old ");
    note(FREQ_A4, E, "ac");
    note(FREQ_A4, Q, "quain");
    note(FREQ_F4, Q, "tance ");
    note(FREQ_G4, DQ, "be ");
    note(FREQ_F4, E, "for");
    note(FREQ_G4, Q, "got,\n");
    note(FREQ_A4, Q, "And ");
    note(FREQ_F4, DQ, "old");
    note(FREQ_D4, E, " ");
    note(FREQ_D4, Q, "lang");
    note(FREQ_C4, Q, " ");
    note(FREQ_F4, DH, "syne?\n\n");

    note(FREQ_D5, Q, "For ");
    note(FREQ_C5, DQ, "auld");
    note(FREQ_A4, E, " ");
    note(FREQ_A4, Q, "lang");
    note(FREQ_F4, Q, " ");
    note(FREQ_G4, DQ, "syne, ");
    note(FREQ_F4, E, "my ");
    note(FREQ_G4, Q, "dear,\n");
    note(FREQ_D5, Q, "For ");
    note(FREQ_C5, DQ, "auld");
    note(FREQ_A4, E, " ");
    note(FREQ_A4, Q, "lang");
    note(FREQ_C5, Q, " ");
    note(FREQ_D5, DH, "syne,\n");

    note(FREQ_F5, Q, "We'll ");
    note(FREQ_C5, DQ, "take ");
    note(FREQ_A4, E, "a ");
    note(FREQ_A4, Q, "cup ");
    note(FREQ_F4, Q, "of ");
    note(FREQ_G4, DQ, "kind");
    note(FREQ_F4, E, "ness ");
    note(FREQ_G4, Q, "yet,\n");
    note(FREQ_A4, E, "For");
    note(FREQ_G4, E, " ");
    note(FREQ_F4, DQ, "auld");
    note(FREQ_D4, E, " ");
    note(FREQ_D4, Q, "lang");
    note(FREQ_C4, Q, " ");
    note(FREQ_F4, DH, "syne.\n\n");
}

int main(int argc UNUSED, char** argv UNUSED) {
    auld_lang_syne();
}
