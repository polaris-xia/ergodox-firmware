/* ----------------------------------------------------------------------------
* ergoDOX layout : COLEMAK JC Sticky Keys Mod
*     created by Ryan Prince
* Description: This layout is designed for programming with a focus on
*     minimizing/elimnating the need to take the hands out of home-row position
*     to reach other keys. Layer sticky keys are used to reduce the average
*     number of keystrokes required to access keys in other layers. Some
*     redundancy of navigation and spacing keys is added to the left hand to
*     allow for greater one-handed access when using a mouse with the right
*     hand.
*   The alpha key layout is COLEMAK with sticky layer keys on the thumb
*     switches for a symbol layer and a ten-key/function
*     layer.
*   Modifiers are symetric on each hand with the exception of the Alt
*     key because my primary machine is a Mac which utilizes command and ctrl
*     for chorded shortcuts more frequenty than ctrl and alt. The layer sticky
*     keys compliment standard modifier sticky keys (for shift, ctrl, command,
*     alt) to allow fast touch typing with minimal chording in favor of
*     sequential keying (preferably on alternate hands) for multi-key shortcuts
*     as chording introduces strain and fatigue and takes your hands out of
*     home row position increasing the likelihood of mistyping.
*   Sticky keys for standard modifiers are used as an operating system setting
*     for the benefit of key state visualization, though this can interfere
*     with the kbfun_shift_press_release() behavior which implicitly adds the
*     shift down modifier to output symbols that require it without knowledge
*     of the virtual sticky state maintained by the operating system.
*   The ErgoDox Layout Configurator layout that best approximates the layout
*     defined in this file is available here:
*     https://www.massdrop.com/ext/ergodox/?referer=EAZJPJ&hash=f26761358ba99e21ae937173da512849
*     The differences are mainly the use of layer toggles instead of sticky
*     layer keys and many of the symbols add the kbfun_shift_press_release()
*     which is not accessible for all keys in the cofigurator (as of
*     2013-04-10).
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>,
*    2013 Ryan Prince <judascleric@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  popall   &kbfun_layer_pop_all
#define  pr       &kbfun_press_release
#define  kprpst   &kbfun_press_release_preserve_sticky
#define  mprrel   &kbfun_mediakey_press_release
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lsticky1   &kbfun_layer_sticky_1
#define  lsticky2   &kbfun_layer_sticky_2
#define  lsticky4   &kbfun_layer_sticky_4
#define  lsticky5   &kbfun_layer_sticky_5 
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  dbtldr   &kbfun_jump_to_bootloader
#define  shpr  &kbfun_shift_press_release
#define  ctpr    &kbfun_control_press_release
#define  alpr  &kbfun_alt_press_release
#define  gupr  &kbfun_gui_press_release
#define  capr  &kbfun_control_alt_press_release
#define  sapr  &kbfun_shift_alt_press_release
#define  cagpr &kbfun_control_alt_gui_press_release
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
#include "keycode.layout"
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
#include "keypress.layout"
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
#include "keyrelease.layout"
};
// ----------------------------------------------------------------------------
