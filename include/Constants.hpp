#pragma once

#include <SDL.h>

namespace kn
{
typedef SDL_Scancode KEYS;
typedef SDL_Event Event;
typedef SDL_Color Color;

const SDL_Scancode S_0 = SDL_SCANCODE_0;
const SDL_Scancode S_1 = SDL_SCANCODE_1;
const SDL_Scancode S_2 = SDL_SCANCODE_2;
const SDL_Scancode S_3 = SDL_SCANCODE_3;
const SDL_Scancode S_4 = SDL_SCANCODE_4;
const SDL_Scancode S_5 = SDL_SCANCODE_5;
const SDL_Scancode S_6 = SDL_SCANCODE_6;
const SDL_Scancode S_7 = SDL_SCANCODE_7;
const SDL_Scancode S_8 = SDL_SCANCODE_8;
const SDL_Scancode S_9 = SDL_SCANCODE_9;
const SDL_Scancode S_a = SDL_SCANCODE_A;
const SDL_Scancode S_b = SDL_SCANCODE_B;
const SDL_Scancode S_c = SDL_SCANCODE_C;
const SDL_Scancode S_d = SDL_SCANCODE_D;
const SDL_Scancode S_e = SDL_SCANCODE_E;
const SDL_Scancode S_f = SDL_SCANCODE_F;
const SDL_Scancode S_g = SDL_SCANCODE_G;
const SDL_Scancode S_h = SDL_SCANCODE_H;
const SDL_Scancode S_i = SDL_SCANCODE_I;
const SDL_Scancode S_j = SDL_SCANCODE_J;
const SDL_Scancode S_k = SDL_SCANCODE_K;
const SDL_Scancode S_l = SDL_SCANCODE_L;
const SDL_Scancode S_m = SDL_SCANCODE_M;
const SDL_Scancode S_n = SDL_SCANCODE_N;
const SDL_Scancode S_o = SDL_SCANCODE_O;
const SDL_Scancode S_p = SDL_SCANCODE_P;
const SDL_Scancode S_q = SDL_SCANCODE_Q;
const SDL_Scancode S_r = SDL_SCANCODE_R;
const SDL_Scancode S_s = SDL_SCANCODE_S;
const SDL_Scancode S_t = SDL_SCANCODE_T;
const SDL_Scancode S_u = SDL_SCANCODE_U;
const SDL_Scancode S_v = SDL_SCANCODE_V;
const SDL_Scancode S_w = SDL_SCANCODE_W;
const SDL_Scancode S_x = SDL_SCANCODE_X;
const SDL_Scancode S_y = SDL_SCANCODE_Y;
const SDL_Scancode S_z = SDL_SCANCODE_Z;
const SDL_Scancode S_DOWN = SDL_SCANCODE_DOWN;
const SDL_Scancode S_LEFT = SDL_SCANCODE_LEFT;
const SDL_Scancode S_RIGHT = SDL_SCANCODE_RIGHT;
const SDL_Scancode S_UP = SDL_SCANCODE_UP;
const SDL_Scancode S_LALT = SDL_SCANCODE_LALT;
const SDL_Scancode S_LCTRL = SDL_SCANCODE_LCTRL;
const SDL_Scancode S_LSHIFT = SDL_SCANCODE_LSHIFT;
const SDL_Scancode S_RALT = SDL_SCANCODE_RALT;
const SDL_Scancode S_RCTRL = SDL_SCANCODE_RCTRL;
const SDL_Scancode S_RETURN = SDL_SCANCODE_RETURN;
const SDL_Scancode S_RSHIFT = SDL_SCANCODE_RSHIFT;
const SDL_Scancode S_SPACE = SDL_SCANCODE_SPACE;
const SDL_Scancode S_TAB = SDL_SCANCODE_TAB;

const SDL_EventType QUIT = SDL_QUIT;
const SDL_EventType DISPLAYEVENT = SDL_DISPLAYEVENT;
const SDL_EventType WINDOWEVENT = SDL_WINDOWEVENT;
const SDL_EventType SYSWMEVENT = SDL_SYSWMEVENT;
const SDL_EventType KEYDOWN = SDL_KEYDOWN;
const SDL_EventType KEYUP = SDL_KEYUP;
const SDL_EventType TEXTEDITING = SDL_TEXTEDITING;
const SDL_EventType TEXTINPUT = SDL_TEXTINPUT;
const SDL_EventType KEYMAPCHANGED = SDL_KEYMAPCHANGED;
const SDL_EventType MOUSEMOTION = SDL_MOUSEMOTION;
const SDL_EventType MOUSEBUTTONDOWN = SDL_MOUSEBUTTONDOWN;
const SDL_EventType MOUSEBUTTONUP = SDL_MOUSEBUTTONUP;
const SDL_EventType MOUSEWHEEL = SDL_MOUSEWHEEL;
const SDL_EventType JOYAXISMOTION = SDL_JOYAXISMOTION;
const SDL_EventType JOYBALLMOTION = SDL_JOYBALLMOTION;
const SDL_EventType JOYHATMOTION = SDL_JOYHATMOTION;
const SDL_EventType JOYBUTTONDOWN = SDL_JOYBUTTONDOWN;
const SDL_EventType JOYBUTTONUP = SDL_JOYBUTTONUP;
const SDL_EventType JOYDEVICEADDED = SDL_JOYDEVICEADDED;
const SDL_EventType JOYDEVICEREMOVED = SDL_JOYDEVICEREMOVED;
const SDL_EventType CONTROLLERAXISMOTION = SDL_CONTROLLERAXISMOTION;
const SDL_EventType CONTROLLERBUTTONDOWN = SDL_CONTROLLERBUTTONDOWN;
const SDL_EventType CONTROLLERBUTTONUP = SDL_CONTROLLERBUTTONUP;
const SDL_EventType CONTROLLERDEVICEADDED = SDL_CONTROLLERDEVICEADDED;
const SDL_EventType CONTROLLERDEVICEREMOVED = SDL_CONTROLLERDEVICEREMOVED;
const SDL_EventType CONTROLLERDEVICEREMAPPED = SDL_CONTROLLERDEVICEREMAPPED;
const SDL_EventType CLIPBOARDUPDATE = SDL_CLIPBOARDUPDATE;
const SDL_EventType DROPFILE = SDL_DROPFILE;
const SDL_EventType DROPTEXT = SDL_DROPTEXT;
const SDL_EventType DROPBEGIN = SDL_DROPBEGIN;
const SDL_EventType DROPCOMPLETE = SDL_DROPCOMPLETE;
const SDL_EventType AUDIODEVICEADDED = SDL_AUDIODEVICEADDED;
const SDL_EventType AUDIODEVICEREMOVED = SDL_AUDIODEVICEREMOVED;
const SDL_EventType USEREVENT = SDL_USEREVENT;

const SDL_KeyCode K_0 = SDLK_0;
const SDL_KeyCode K_1 = SDLK_1;
const SDL_KeyCode K_2 = SDLK_2;
const SDL_KeyCode K_3 = SDLK_3;
const SDL_KeyCode K_4 = SDLK_4;
const SDL_KeyCode K_5 = SDLK_5;
const SDL_KeyCode K_6 = SDLK_6;
const SDL_KeyCode K_7 = SDLK_7;
const SDL_KeyCode K_8 = SDLK_8;
const SDL_KeyCode K_9 = SDLK_9;
const SDL_KeyCode K_a = SDLK_a;
const SDL_KeyCode K_b = SDLK_b;
const SDL_KeyCode K_c = SDLK_c;
const SDL_KeyCode K_d = SDLK_d;
const SDL_KeyCode K_e = SDLK_e;
const SDL_KeyCode K_f = SDLK_f;
const SDL_KeyCode K_g = SDLK_g;
const SDL_KeyCode K_h = SDLK_h;
const SDL_KeyCode K_i = SDLK_i;
const SDL_KeyCode K_j = SDLK_j;
const SDL_KeyCode K_k = SDLK_k;
const SDL_KeyCode K_l = SDLK_l;
const SDL_KeyCode K_m = SDLK_m;
const SDL_KeyCode K_n = SDLK_n;
const SDL_KeyCode K_o = SDLK_o;
const SDL_KeyCode K_p = SDLK_p;
const SDL_KeyCode K_q = SDLK_q;
const SDL_KeyCode K_r = SDLK_r;
const SDL_KeyCode K_s = SDLK_s;
const SDL_KeyCode K_t = SDLK_t;
const SDL_KeyCode K_u = SDLK_u;
const SDL_KeyCode K_v = SDLK_v;
const SDL_KeyCode K_w = SDLK_w;
const SDL_KeyCode K_x = SDLK_x;
const SDL_KeyCode K_y = SDLK_y;
const SDL_KeyCode K_z = SDLK_z;
const SDL_KeyCode K_DOWN = SDLK_DOWN;
const SDL_KeyCode K_LEFT = SDLK_LEFT;
const SDL_KeyCode K_RIGHT = SDLK_RIGHT;
const SDL_KeyCode K_UP = SDLK_UP;
const SDL_KeyCode K_APPLICATION = SDLK_APPLICATION;
const SDL_KeyCode K_AUDIOMUTE = SDLK_AUDIOMUTE;
const SDL_KeyCode K_AUDIONEXT = SDLK_AUDIONEXT;
const SDL_KeyCode K_AUDIOPLAY = SDLK_AUDIOPLAY;
const SDL_KeyCode K_AUDIOPREV = SDLK_AUDIOPREV;
const SDL_KeyCode K_AUDIOSTOP = SDLK_AUDIOSTOP;
const SDL_KeyCode K_BACKSLASH = SDLK_BACKSLASH;
const SDL_KeyCode K_BACKSPACE = SDLK_BACKSPACE;
const SDL_KeyCode K_CAPSLOCK = SDLK_CAPSLOCK;
const SDL_KeyCode K_COMMA = SDLK_COMMA;
const SDL_KeyCode K_DELETE = SDLK_DELETE;
const SDL_KeyCode K_DISPLAYSWITCH = SDLK_DISPLAYSWITCH;
const SDL_KeyCode K_END = SDLK_END;
const SDL_KeyCode K_EQUALS = SDLK_EQUALS;
const SDL_KeyCode K_ESCAPE = SDLK_ESCAPE;
const SDL_KeyCode K_F1 = SDLK_F1;
const SDL_KeyCode K_F2 = SDLK_F2;
const SDL_KeyCode K_F3 = SDLK_F3;
const SDL_KeyCode K_F4 = SDLK_F4;
const SDL_KeyCode K_F5 = SDLK_F5;
const SDL_KeyCode K_F6 = SDLK_F6;
const SDL_KeyCode K_F7 = SDLK_F7;
const SDL_KeyCode K_F8 = SDLK_F8;
const SDL_KeyCode K_F9 = SDLK_F9;
const SDL_KeyCode K_F10 = SDLK_F10;
const SDL_KeyCode K_F11 = SDLK_F11;
const SDL_KeyCode K_F12 = SDLK_F12;
const SDL_KeyCode K_BACKQUOTE = SDLK_BACKQUOTE;
const SDL_KeyCode K_HOME = SDLK_HOME;
const SDL_KeyCode K_INSERT = SDLK_INSERT;
const SDL_KeyCode K_KP_0 = SDLK_KP_0;
const SDL_KeyCode K_KP_1 = SDLK_KP_1;
const SDL_KeyCode K_KP_2 = SDLK_KP_2;
const SDL_KeyCode K_KP_3 = SDLK_KP_3;
const SDL_KeyCode K_KP_4 = SDLK_KP_4;
const SDL_KeyCode K_KP_5 = SDLK_KP_5;
const SDL_KeyCode K_KP_6 = SDLK_KP_6;
const SDL_KeyCode K_KP_7 = SDLK_KP_7;
const SDL_KeyCode K_KP_8 = SDLK_KP_8;
const SDL_KeyCode K_KP_9 = SDLK_KP_9;
const SDL_KeyCode K_KP_DIVIDE = SDLK_KP_DIVIDE;
const SDL_KeyCode K_KP_ENTER = SDLK_KP_ENTER;
const SDL_KeyCode K_KP_MINUS = SDLK_KP_MINUS;
const SDL_KeyCode K_KP_MULTIPLY = SDLK_KP_MULTIPLY;
const SDL_KeyCode K_KP_PERIOD = SDLK_KP_PERIOD;
const SDL_KeyCode K_KP_PLUS = SDLK_KP_PLUS;
const SDL_KeyCode K_LALT = SDLK_LALT;
const SDL_KeyCode K_LCTRL = SDLK_LCTRL;
const SDL_KeyCode K_LEFTBRACKET = SDLK_LEFTBRACKET;
const SDL_KeyCode K_LSHIFT = SDLK_LSHIFT;
const SDL_KeyCode K_MINUS = SDLK_MINUS;
const SDL_KeyCode K_NUMLOCKCLEAR = SDLK_NUMLOCKCLEAR;
const SDL_KeyCode K_PAGEDOWN = SDLK_PAGEDOWN;
const SDL_KeyCode K_PAGEUP = SDLK_PAGEUP;
const SDL_KeyCode K_PERIOD = SDLK_PERIOD;
const SDL_KeyCode K_PRINTSCREEN = SDLK_PRINTSCREEN;
const SDL_KeyCode K_RALT = SDLK_RALT;
const SDL_KeyCode K_RCTRL = SDLK_RCTRL;
const SDL_KeyCode K_RETURN = SDLK_RETURN;
const SDL_KeyCode K_RIGHTBRACKET = SDLK_RIGHTBRACKET;
const SDL_KeyCode K_RSHIFT = SDLK_RSHIFT;
const SDL_KeyCode K_SEMICOLON = SDLK_SEMICOLON;
const SDL_KeyCode K_SLASH = SDLK_SLASH;
const SDL_KeyCode K_SPACE = SDLK_SPACE;
const SDL_KeyCode K_TAB = SDLK_TAB;
const SDL_KeyCode K_AMPERSAND = SDLK_AMPERSAND;
const SDL_KeyCode K_ASTERISK = SDLK_ASTERISK;
const SDL_KeyCode K_AT = SDLK_AT;
const SDL_KeyCode K_CARET = SDLK_CARET;
const SDL_KeyCode K_COLON = SDLK_COLON;
const SDL_KeyCode K_DOLLAR = SDLK_DOLLAR;
const SDL_KeyCode K_EXCLAIM = SDLK_EXCLAIM;
const SDL_KeyCode K_GREATER = SDLK_GREATER;
const SDL_KeyCode K_HASH = SDLK_HASH;
const SDL_KeyCode K_LEFTPAREN = SDLK_LEFTPAREN;
const SDL_KeyCode K_LESS = SDLK_LESS;
const SDL_KeyCode K_PERCENT = SDLK_PERCENT;
const SDL_KeyCode K_PLUS = SDLK_PLUS;
const SDL_KeyCode K_QUESTION = SDLK_QUESTION;
const SDL_KeyCode K_QUOTEDBL = SDLK_QUOTEDBL;
const SDL_KeyCode K_RIGHTPAREN = SDLK_RIGHTPAREN;
const SDL_KeyCode K_UNDERSCORE = SDLK_UNDERSCORE;

const int BUTTON_LEFT = SDL_BUTTON_LEFT;
const int BUTTON_MIDDLE = SDL_BUTTON_MIDDLE;
const int BUTTON_RIGHT = SDL_BUTTON_RIGHT;

} // namespace kn
