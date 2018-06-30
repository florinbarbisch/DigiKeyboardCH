#include "DigiKeyboard.h"
#ifndef DIGIKEYBOARDCH_H
#define DIGIKEYBOARDCH_H


#define CH_MOD_CONTROL_LEFT    (1<<8)
#define CH_MOD_SHIFT_LEFT      (1<<9)
#define CH_MOD_ALT_LEFT        (1<<10)
#define CH_MOD_GUI_LEFT        (1<<11)
#define CH_MOD_CONTROL_RIGHT   (1<<12)
#define CH_MOD_SHIFT_RIGHT     (1<<13)
#define CH_MOD_ALT_RIGHT       (1<<14)
#define CH_MOD_GUI_RIGHT       (1<<15)

#define CH_ENTER  0x28
#define CH_SPACE  0x20

const uint16_t _ascii_ch_map[256] PROGMEM =
        {
                0x00,             // NUL
                0x00,             // SOH
                0x00,             // STX
                0x00,             // ETX
                0x00,             // EOT
                0x00,             // ENQ
                0x00,             // ACK
                0x00,             // BEL
                0x2a,     // BS Backspace
                0x2b,     // TAB  Tab
                0x28,     // LF Enter
                0x00,             // VT
                0x00,             // FF
                0x00,             // CR
                0x00,             // SO
                0x00,             // SI
                0x00,             // DEL
                0x00,             // DC1
                0x00,             // DC2
                0x00,             // DC3
                0x00,             // DC4
                0x00,             // NAK
                0x00,             // SYN
                0x00,             // ETB
                0x00,             // CAN
                0x00,             // EM
                0x00,             // SUB
                0x00,             // ESC
                0x00,             // FS
                0x00,             // GS
                0x00,             // RS
                0x00,             // US
                0x2c,                      //  ' '
                0x30|CH_MOD_SHIFT_LEFT,    // !
                0x1F|CH_MOD_SHIFT_LEFT,    // "
                0x20|CH_MOD_ALT_RIGHT,     // #
                0x32,                      // $
                0x22|CH_MOD_SHIFT_LEFT,    // %
                0x23|CH_MOD_SHIFT_LEFT,    // &
                0x2d,                      // '
                0x25|CH_MOD_SHIFT_LEFT,    // (
                0x26|CH_MOD_SHIFT_LEFT,    // )
                0x20|CH_MOD_SHIFT_LEFT,    // *
                0x1e|CH_MOD_SHIFT_LEFT,    // +
                0x36,          // ,
                0x38,          // -
                0x37,          // .
                0x24|CH_MOD_SHIFT_LEFT,          // /
                0x27,          // 0
                0x1e,          // 1
                0x1f,          // 2
                0x20,          // 3
                0x21,          // 4
                0x22,          // 5
                0x23,          // 6
                0x24,          // 7
                0x25,          // 8
                0x26,          // 9
                0x37|CH_MOD_SHIFT_LEFT,      // :
                0x36|CH_MOD_SHIFT_LEFT,          // ;
                0x64,      // <
                0x27|CH_MOD_SHIFT_LEFT,          // =
                0x64|CH_MOD_SHIFT_LEFT,      // >
                0x2D|CH_MOD_SHIFT_LEFT,      // ?
                0x1f|CH_MOD_ALT_RIGHT,      // @ 
                0x04|CH_MOD_SHIFT_LEFT,      // A
                0x05|CH_MOD_SHIFT_LEFT,      // B
                0x06|CH_MOD_SHIFT_LEFT,      // C
                0x07|CH_MOD_SHIFT_LEFT,      // D
                0x08|CH_MOD_SHIFT_LEFT,      // E
                0x09|CH_MOD_SHIFT_LEFT,      // F
                0x0a|CH_MOD_SHIFT_LEFT,      // G
                0x0b|CH_MOD_SHIFT_LEFT,      // H
                0x0c|CH_MOD_SHIFT_LEFT,      // I
                0x0d|CH_MOD_SHIFT_LEFT,      // J
                0x0e|CH_MOD_SHIFT_LEFT,      // K
                0x0f|CH_MOD_SHIFT_LEFT,      // L
                0x10|CH_MOD_SHIFT_LEFT,      // M
                0x11|CH_MOD_SHIFT_LEFT,      // N
                0x12|CH_MOD_SHIFT_LEFT,      // O
                0x13|CH_MOD_SHIFT_LEFT,      // P
                0x14|CH_MOD_SHIFT_LEFT,      // Q
                0x15|CH_MOD_SHIFT_LEFT,      // R
                0x16|CH_MOD_SHIFT_LEFT,      // S
                0x17|CH_MOD_SHIFT_LEFT,      // T
                0x18|CH_MOD_SHIFT_LEFT,      // U
                0x19|CH_MOD_SHIFT_LEFT,      // V
                0x1a|CH_MOD_SHIFT_LEFT,      // W
                0x1b|CH_MOD_SHIFT_LEFT,      // X
                0x1d|CH_MOD_SHIFT_LEFT,      // Y
                0x1c|CH_MOD_SHIFT_LEFT,      // Z
                0x2f|CH_MOD_ALT_RIGHT,          // [
                0x64|CH_MOD_ALT_RIGHT,          // bslash
                0x30|CH_MOD_ALT_RIGHT,          // ]
                0x2e,    // ^
                0x38|CH_MOD_SHIFT_LEFT,    // _
                0x2E|CH_MOD_SHIFT_LEFT,          // `
                0x04,          // a
                0x05,          // b
                0x06,          // c
                0x07,          // d
                0x08,          // e
                0x09,          // f
                0x0a,          // g
                0x0b,          // h
                0x0c,          // i
                0x0d,          // j
                0x0e,          // k
                0x0f,          // l
                0x10,          // m
                0x11,          // n
                0x12,          // o
                0x13,          // p
                0x14,          // q
                0x15,          // r
                0x16,          // s
                0x17,          // t
                0x18,          // u
                0x19,          // v
                0x1a,          // w
                0x1b,          // x
                0x1d,          // y
                0x1c,          // z
                0x34|CH_MOD_ALT_RIGHT,    // {
                0x24|CH_MOD_ALT_RIGHT,    // |
                0x32|CH_MOD_ALT_RIGHT,    // }
                0x2e|CH_MOD_ALT_RIGHT,    // ~
                0,       // DEL
				0, //128
                0, //129
                0, //130
                0, //131
                0, //Ä
                0, //133
                0, //134
                0, //135
                0, //136
                0, //137
                0, //138
                0, //139
                0, //140
                0, //141
                0, //142
                0, //143
                0, //144
                0, //145
                0, //146
                0, //147
                0, //148
                0, //149
                0, //150
                0, //151
                0, //152
                0, //153
                0, //154
                0, //155
                0, //156
                0, //157
                0, //158
                0, //159
                0, //160
                0, //161
                0x25|CH_MOD_ALT_RIGHT, //¢
                0x32|CH_MOD_SHIFT_LEFT, // dollar
                0x34, //ä
                0, //165
                0x1e|CH_MOD_ALT_RIGHT, //¦ ugly pipe
                0x35, //§
                0x30, //¨ 
                0, //169
                0, //170
                0, //171
                0, //x23|CH_MOD_ALT_RIGHT, //¬ the "Not Sign" causes "€" to be displayed/typed as "€¬"
                0, //173
                0, //174
                0, //175
                0x35|CH_MOD_SHIFT_LEFT, //°
                0, //177
                0, //178
                0, //179
                0x2d|CH_MOD_ALT_RIGHT, //´ 
                0, //181
                0x33, //ö
                0, //183
                0, //184
                0, //185
                0, //186
                0, //187
                0x2f, //ü
                0, //189
                0, //190
                0, //191
                0, //192
                0, //193
                0, //194
                0, //195
                0, //196
                0, //197
                0, //198
                0, //199
                0, //200
                0, //201
                0, //202
                0, //203
                0, //204
                0, //205
                0, //206
                0, //207
                0, //208
                0, //209
                0, //210
                0, //211
                0, //212
                0, //213
                0, //214
                0, //215
                0, //216
                0, //217
                0, //218
                0, //219
                0, //220
                0, //221
                0, //222
                0, //223
                0, //224
                0, //225
                0x08|CH_MOD_ALT_RIGHT, //€
                0, //227
                0, //228
                0, //229
                0, //230
                0, //231
                0, //232
                0, //233
                0, //234
                0, //235
                0, //236
                0, //237
                0, //238
                0, //239
                0, //240
                0, //241
                0, //242
                0, //243
                0, //244
                0, //245
                0, //246
                0, //247
                0, //248
                0, //249
                0, //250
                0, //251
                0, //252
                0, //253
                0, //254
                0 //255

        };

class DigiKeyboardDeviceCH : public DigiKeyboardDevice{
    public:
    size_t write(uint8_t chr) {
        unsigned int temp = pgm_read_word_near(_ascii_ch_map + chr);
        unsigned char low = temp & 0xFF;
        unsigned char high = (temp >> 8) & 0xFF;
        sendKeyStroke(low,high);
        return 1;
    }
    void sendKeyReport(uchar *array,const unsigned int size){
        while (!usbInterruptIsReady()) {
            // Note: We wait until we can send keyPress
            //       so we know the previous keyPress was
            //       sent.
            usbPoll();
            _delay_ms(5);
        }

        usbSetInterrupt(array, size);
    }
};
DigiKeyboardDeviceCH DigiKeyboardCH = DigiKeyboardDeviceCH();
#endif //DIGIKEYBOARDCH_H
