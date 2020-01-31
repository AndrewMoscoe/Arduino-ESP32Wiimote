// Copyright (c) 2020 Daiki Yasuda
//
// This is licensed under
// - Creative Commons Attribution-NonCommercial 3.0 Unported
// - https://creativecommons.org/licenses/by-nc/3.0/
// - Or see LICENSE.md
//
// The short of it is...
//   You are free to:
//     Share — copy and redistribute the material in any medium or format
//     Adapt — remix, transform, and build upon the material
//   Under the following terms:
//     NonCommercial — You may not use the material for commercial purposes.

#ifndef __ESP32_WIIMOTE_H__
#define __ESP32_WIIMOTE_H__

class ESP32Wiimote
{
public:
  enum
  {
    BUTTON_LEFT       = 0x0800,
    BUTTON_RIGHT      = 0x0400,
    BUTTON_UP         = 0x0200,
    BUTTON_DOWN       = 0x0100,
    BUTTON_A          = 0x0008,
    BUTTON_B          = 0x0004,
    BUTTON_PLUS       = 0x1000,
    BUTTON_HOME       = 0x0080,
    BUTTON_MINUS      = 0x0010,
    BUTTON_ONE        = 0x0002,
    BUTTON_TWO        = 0x0001
  };

  ESP32Wiimote(void);

  void init(void);
  void task(void);
  int available(void);
  uint16_t getButtonState(void);

// private:

};

#endif // __ESP32_WIIMOTE_H__