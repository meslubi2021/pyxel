#ifndef PYXELCORE_CONSTANTS_H_
#define PYXELCORE_CONSTANTS_H_

#include <cstdint>

namespace pyxelcore {

//
// Common
//
const char VERSION[] = "1.1.0";

const int32_t COLOR_COUNT = 16;

const char DEFAULT_CAPTION[] = "Pyxel";
const int32_t DEFAULT_SCALE = 0;
const int32_t DEFAULT_FPS = 30;
const int32_t DEFAULT_BORDER_WIDTH = 8;
const int32_t DEFAULT_BORDER_COLOR = 0x101018;
const int32_t DEFAULT_PALETTE[COLOR_COUNT] = {
    0x000000, 0x1D2B53, 0x7E2553, 0x008751, 0xAB5236, 0x5F574F,
    0xC2C3C7, 0xFFF1E8, 0xFF004D, 0xFFA300, 0xFFEC27, 0x00E436,
    0x29ADFF, 0x83769C, 0xFF77A8, 0xFFCCAA,
};

//
// System
//
const int32_t MIN_SCREEN_SIZE = 64;
const int32_t MAX_SCREEN_SIZE = 256;

const int32_t MAX_FRAME_SKIP_COUNT = 9;
const int32_t MEASURE_FRAME_COUNT = 10;

const int32_t ICON_WIDTH = 16;
const int32_t ICON_HEIGHT = 16;
const char ICON_DATA[ICON_HEIGHT][ICON_WIDTH + 1] = {
    "0000000110000000", "0000011F71100000", "00011FF11FF11000",
    "011FF111111FF110", "1AE1111111111C71", "1E1EE111111CC1C1",
    "1E111EE11CC111C1", "1E11111E711111C1", "1E111111C11111C1",
    "1E111111C11111C1", "1E111111C11111C1", "1AE11111C1111C71",
    "011EE111C11CC110", "00011EE1CCC11000", "0000011E71100000",
    "0000000110000000",
};

const int32_t APP_GIF_CAPTURE_COUNT = 900;
const int32_t APP_GIF_CAPTURE_SCALE = 2;

//
// Graphics
//
const int32_t IMAGE_BANK_COUNT = 4;
const int32_t IMAGE_BANK_WIDTH = 256;
const int32_t IMAGE_BANK_HEIGHT = 256;
const int32_t IMAGE_BANK_FOR_SYSTEM = IMAGE_BANK_COUNT - 1;

const int32_t TILEMAP_BANK_COUNT = 8;
const int32_t TILEMAP_BANK_WIDTH = 256;
const int32_t TILEMAP_BANK_HEIGHT = 256;
const int32_t TILEMAP_CHIP_WIDTH = 8;
const int32_t TILEMAP_CHIP_HEIGHT = 8;

const int32_t MOUSE_CURSOR_X = 2;
const int32_t MOUSE_CURSOR_Y = 2;
const int32_t MOUSE_CURSOR_WIDTH = 8;
const int32_t MOUSE_CURSOR_HEIGHT = 8;
const char MOUSE_CURSOR_DATA[MOUSE_CURSOR_HEIGHT][MOUSE_CURSOR_WIDTH + 1] = {
    "00000011", "07776011", "07760111", "07676011",
    "06067601", "00106760", "11110601", "11111011",
};

const int32_t MIN_FONT_CODE = 32;
const int32_t MAX_FONT_CODE = 127;
const int32_t FONT_X = 12;
const int32_t FONT_Y = 0;
const int32_t FONT_WIDTH = 4;
const int32_t FONT_HEIGHT = 6;
const int32_t FONT_ROW_COUNT = 48;
const int32_t FONT_COLOR = 7;
const uint32_t FONT_DATA[] = {
    0x000000, 0x444040, 0xAA0000, 0xAEAEA0, 0x6C6C40, 0x824820, 0x4A4AC0,
    0x440000, 0x244420, 0x844480, 0xA4E4A0, 0x04E400, 0x000480, 0x00E000,
    0x000040, 0x224880, 0x6AAAC0, 0x4C4440, 0xC248E0, 0xC242C0, 0xAAE220,
    0xE8C2C0, 0x68EAE0, 0xE24880, 0xEAEAE0, 0xEAE2C0, 0x040400, 0x040480,
    0x248420, 0x0E0E00, 0x842480, 0xE24040, 0x4AA860, 0x4AEAA0, 0xCACAC0,
    0x688860, 0xCAAAC0, 0xE8E8E0, 0xE8E880, 0x68EA60, 0xAAEAA0, 0xE444E0,
    0x222A40, 0xAACAA0, 0x8888E0, 0xAEEAA0, 0xCAAAA0, 0x4AAA40, 0xCAC880,
    0x4AAE60, 0xCAECA0, 0x6842C0, 0xE44440, 0xAAAA60, 0xAAAA40, 0xAAEEA0,
    0xAA4AA0, 0xAA4440, 0xE248E0, 0x644460, 0x884220, 0xC444C0, 0x4A0000,
    0x0000E0, 0x840000, 0x06AA60, 0x8CAAC0, 0x068860, 0x26AA60, 0x06AC60,
    0x24E440, 0x06AE24, 0x8CAAA0, 0x404440, 0x2022A4, 0x8ACCA0, 0xC444E0,
    0x0EEEA0, 0x0CAAA0, 0x04AA40, 0x0CAAC8, 0x06AA62, 0x068880, 0x06C6C0,
    0x4E4460, 0x0AAA60, 0x0AAA40, 0x0AAEE0, 0x0A44A0, 0x0AA624, 0x0E24E0,
    0x64C460, 0x444440, 0xC464C0, 0x6C0000, 0xEEEEE0,
};

//
// Input
//
enum {
  KEY_SPACE,
  KEY_APOSTROPHE,
  KEY_COMMA,
  KEY_MINUS,
  KEY_PERIOD,
  KEY_SLASH,
  KEY_0,
  KEY_1,
  KEY_2,
  KEY_3,
  KEY_4,
  KEY_5,
  KEY_6,
  KEY_7,
  KEY_8,
  KEY_9,
  KEY_SEMICOLON,
  KEY_EQUAL,
  KEY_A,
  KEY_B,
  KEY_C,
  KEY_D,
  KEY_E,
  KEY_F,
  KEY_G,
  KEY_H,
  KEY_I,
  KEY_J,
  KEY_K,
  KEY_L,
  KEY_M,
  KEY_N,
  KEY_O,
  KEY_P,
  KEY_Q,
  KEY_R,
  KEY_S,
  KEY_T,
  KEY_U,
  KEY_V,
  KEY_W,
  KEY_X,
  KEY_Y,
  KEY_Z,
  KEY_LEFT_BRACKET,
  KEY_BACKSLASH,
  KEY_RIGHT_BRACKET,
  KEY_GRAVE_ACCENT,
  KEY_ESCAPE,
  KEY_ENTER,
  KEY_TAB,
  KEY_BACKSPACE,
  KEY_INSERT,
  KEY_DELETE,
  KEY_RIGHT,
  KEY_LEFT,
  KEY_DOWN,
  KEY_UP,
  KEY_PAGE_UP,
  KEY_PAGE_DOWN,
  KEY_HOME,
  KEY_END,
  KEY_CAPS_LOCK,
  KEY_SCROLL_LOCK,
  KEY_NUM_LOCK,
  KEY_PRINT_SCREEN,
  KEY_PAUSE,
  KEY_F1,
  KEY_F2,
  KEY_F3,
  KEY_F4,
  KEY_F5,
  KEY_F6,
  KEY_F7,
  KEY_F8,
  KEY_F9,
  KEY_F10,
  KEY_F11,
  KEY_F12,
  KEY_KP_0,
  KEY_KP_1,
  KEY_KP_2,
  KEY_KP_3,
  KEY_KP_4,
  KEY_KP_5,
  KEY_KP_6,
  KEY_KP_7,
  KEY_KP_8,
  KEY_KP_9,
  KEY_KP_DECIMAL,
  KEY_KP_DIVIDE,
  KEY_KP_MULTIPLY,
  KEY_KP_SUBTRACT,
  KEY_KP_ADD,
  KEY_KP_ENTER,
  KEY_KP_EQUAL,
  KEY_LEFT_SHIFT,
  KEY_LEFT_CONTROL,
  KEY_LEFT_ALT,
  KEY_LEFT_SUPER,
  KEY_RIGHT_SHIFT,
  KEY_RIGHT_CONTROL,
  KEY_RIGHT_ALT,
  KEY_RIGHT_SUPER,
  KEY_MENU,

  SDL_KEY_COUNT,

  KEY_SHIFT = SDL_KEY_COUNT,
  KEY_CONTROL,
  KEY_ALT,
  KEY_SUPER,

  MOUSE_LEFT_BUTTON,
  MOUSE_MIDDLE_BUTTON,
  MOUSE_RIGHT_BUTTON,

  GAMEPAD_1_A,
  GAMEPAD_1_B,
  GAMEPAD_1_X,
  GAMEPAD_1_Y,
  GAMEPAD_1_LEFT_SHOULDER,
  GAMEPAD_1_RIGHT_SHOULDER,
  GAMEPAD_1_SELECT,
  GAMEPAD_1_START,
  GAMEPAD_1_UP,
  GAMEPAD_1_RIGHT,
  GAMEPAD_1_DOWN,
  GAMEPAD_1_LEFT,

  GAMEPAD_2_A,
  GAMEPAD_2_B,
  GAMEPAD_2_X,
  GAMEPAD_2_Y,
  GAMEPAD_2_LEFT_SHOULDER,
  GAMEPAD_2_RIGHT_SHOULDER,
  GAMEPAD_2_SELECT,
  GAMEPAD_2_START,
  GAMEPAD_2_UP,
  GAMEPAD_2_RIGHT,
  GAMEPAD_2_DOWN,
  GAMEPAD_2_LEFT,

  KEY_COUNT,
};

//
// Audio
//
const int32_t AUDIO_SAMPLE_RATE = 22050;
const int32_t AUDIO_BLOCK_SIZE = 2205;
const int32_t AUDIO_CHANNEL_COUNT = 4;
const int32_t AUDIO_ONE_SPEED = AUDIO_SAMPLE_RATE / 120;
const int32_t AUDIO_ONE_VOLUME = 0x7FFF / (AUDIO_CHANNEL_COUNT * 7);

const int32_t SOUND_BANK_COUNT = 65;
const int32_t SOUND_BANK_FOR_SYSTEM = SOUND_BANK_COUNT - 1;

const int32_t MUSIC_BANK_COUNT = 8;

//
// Sound class
//
enum {
  SOUND_TONE_TRIANGLE,
  SOUND_TONE_SQUARE,
  SOUND_TONE_PULSE,
  SOUND_TONE_NOISE,
};

enum {
  SOUND_EFFECT_NONE,
  SOUND_EFFECT_SLIDE,
  SOUND_EFFECT_VIBRATO,
  SOUND_EFFECT_FADEOUT,
};

enum {
  SOUND_NOTE_C = 0,
  SOUND_NOTE_D = 2,
  SOUND_NOTE_E = 4,
  SOUND_NOTE_F = 5,
  SOUND_NOTE_G = 7,
  SOUND_NOTE_A = 9,
  SOUND_NOTE_B = 11,
};

/*
  SOUND_TONE_TABLE = {
      "t": SOUND_TONE_TRIANGLE,
      "s": SOUND_TONE_SQUARE,
      "p": SOUND_TONE_PULSE,
      "n": SOUND_TONE_NOISE,
  }
  SOUND_EFFECT_TABLE = {
      "n": SOUND_EFFECT_NONE,
      "s": SOUND_EFFECT_SLIDE,
      "v": SOUND_EFFECT_VIBRATO,
      "f": SOUND_EFFECT_FADEOUT,
  }
*/

int32_t GetConstantNumber(const char* name);
const char* GetConstantString(const char* name);

}  // namespace pyxelcore

#endif  // PYXELCORE_AUDIO_H_
