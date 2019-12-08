#ifndef MUSIC_H
#define MUSIC_H

#include <stdio.h>
#include <string.h>
#include <syscall.h>

/*
 * Note frequencies
 * Source: https://www.seventhstring.com/resources/notefrequencies.html
 */

#define FREQ_C0 16
#define FREQ_Db0 17
#define FREQ_D0 18
#define FREQ_Eb0 19
#define FREQ_E0 21
#define FREQ_F0 22
#define FREQ_Gb0 23
#define FREQ_G0 25
#define FREQ_Ab0 26
#define FREQ_A0 28
#define FREQ_Bb0 29
#define FREQ_B0 31

#define FREQ_C1 33
#define FREQ_Db1 35
#define FREQ_D1 37
#define FREQ_Eb1 39
#define FREQ_E1 41
#define FREQ_F1 44
#define FREQ_Gb1 46
#define FREQ_G1 49
#define FREQ_Ab1 52
#define FREQ_A1 55
#define FREQ_Bb1 58
#define FREQ_B1 62

#define FREQ_C2 65
#define FREQ_Db2 69
#define FREQ_D2 73
#define FREQ_Eb2 78
#define FREQ_E2 82
#define FREQ_F2 87
#define FREQ_Gb2 93
#define FREQ_G2 98
#define FREQ_Ab2 104
#define FREQ_A2 110
#define FREQ_Bb2 117
#define FREQ_B2 124

#define FREQ_C3 131
#define FREQ_Db3 139
#define FREQ_D3 147
#define FREQ_Eb3 156
#define FREQ_E3 165
#define FREQ_F3 175
#define FREQ_Gb3 185
#define FREQ_G3 196
#define FREQ_Ab3 208
#define FREQ_A3 220
#define FREQ_Bb3 233
#define FREQ_B3 247

#define FREQ_C4 262
#define FREQ_Db4 277
#define FREQ_D4 294
#define FREQ_Eb4 311
#define FREQ_E4 330
#define FREQ_F4 349
#define FREQ_Gb4 370
#define FREQ_G4 392
#define FREQ_Ab4 415
#define FREQ_A4 440
#define FREQ_Bb4 466
#define FREQ_B4 494

#define FREQ_C5 523
#define FREQ_Db5 554
#define FREQ_D5 587
#define FREQ_Eb5 622
#define FREQ_E5 659
#define FREQ_F5 699
#define FREQ_Gb5 740
#define FREQ_G5 784
#define FREQ_Ab5 831
#define FREQ_A5 880
#define FREQ_Bb5 932
#define FREQ_B5 988

#define FREQ_C6 1047
#define FREQ_Db6 1109
#define FREQ_D6 1175
#define FREQ_Eb6 1245
#define FREQ_E6 1319
#define FREQ_F6 1397
#define FREQ_Gb6 1480
#define FREQ_G6 1568
#define FREQ_Ab6 1661
#define FREQ_A6 1760
#define FREQ_Bb6 1865
#define FREQ_B6 1976

#define FREQ_C7 2093
#define FREQ_Db7 2217
#define FREQ_D7 2349
#define FREQ_Eb7 2489
#define FREQ_E7 2637
#define FREQ_F7 2794
#define FREQ_Gb7 2960
#define FREQ_G7 3136
#define FREQ_Ab7 3322
#define FREQ_A7 3520
#define FREQ_Bb7 3729
#define FREQ_B7 3951

#define FREQ_C8 4186
#define FREQ_Db8 4435
#define FREQ_D8 4699
#define FREQ_Eb8 4978
#define FREQ_E8 5274
#define FREQ_F8 5588
#define FREQ_Gb8 5920
#define FREQ_G8 6272
#define FREQ_Ab8 6645
#define FREQ_A8 7040
#define FREQ_Bb8 7459
#define FREQ_B8 7902

/*
 * Tempo
 * Based on https://en.wikipedia.org/wiki/Tempo#Musical_vocabulary
 */

#define PACE_ADAGIO 900
#define PACE_ANDANTE 667
#define PACE_ALLEGRETTO 500
#define PACE_ALLEGRO 400
#define PACE_PRESTO 333

/* Note durations */

#define MILLIS_THIRTYSECOND(PACE) (PACE >> 3)
#define MILLIS_SIXTEENTH(PACE) (PACE >> 2)
#define MILLIS_DOTTED_SIXTEENTH(PACE) (MILLIS_SIXTEENTH(PACE) + MILLIS_THIRTYSECOND(PACE))
#define MILLIS_EIGHTH(PACE) (PACE >> 1)
#define MILLIS_DOTTED_EIGHTH(PACE) (MILLIS_EIGHTH(PACE) + MILLIS_SIXTEENTH(PACE))
#define MILLIS_QUARTER(PACE) (PACE)
#define MILLIS_DOTTED_QUARTER(PACE) (MILLIS_QUARTER(PACE) + MILLIS_EIGHTH(PACE))
#define MILLIS_HALF(PACE) (PACE << 1)
#define MILLIS_DOTTED_HALF(PACE) (MILLIS_HALF(PACE) + MILLIS_QUARTER(PACE))
#define MILLIS_WHOLE(PACE) (PACE << 2)

/* Utility functions to play notes */
static inline void note(int frequency, unsigned milliseconds, const char* lyric) {
    write(STDOUT_FILENO, lyric, strlen(lyric));
    tone(frequency, milliseconds);
}

static inline void rest(unsigned milliseconds) {
    tone(0, milliseconds);
}

#endif
