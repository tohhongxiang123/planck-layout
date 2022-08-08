#pragma once

#define GRAVE_ESC_CTRL_OVERRIDE // Always send Escape if Shift is pressed, so that Ctrl + Shift + Esc works
#define HOLD_ON_OTHER_KEY_PRESS
#define CAPS_WORD_IDLE_TIMEOUT 2000 

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND) }
#endif

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

