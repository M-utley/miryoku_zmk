// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_BASE \
&hm TAB Q,         &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&hm ESC A,         &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,        \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,\
U_NP,              U_NP,              &mo U_NUM,         &kp SPC,           &kp RET,           &kp LSHIFT,        &kp BSPC,          &mo U_SYM,         U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
U_UND,             U_RDO,             U_CUT,             U_CPY,             U_PST,             &kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp DEL,          \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp ESC,          \
&kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,            U_NA,              U_NA,              U_NA,              U_NA,              U_NA,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp EXCLAMATION,   &kp AT,            &kp HASH,          &kp DOLLAR,        &kp PERCENT,       &kp CARET,         &kp AMPS,          &kp ASTERISK,      &kp UNDER,         &kp SEMICOLON,          \
&kp GRAVE,         &kp TILDE,         &kp LBRC,          &kp LPAR,          &kp LBKT,          &kp COLON,         &sk LGUI,          &sk LALT,          &sk LCTRL,         &sk LSHIFT,         \
&kp LESS_THAN,     &kp GREATER_THAN,  &kp RBRC,          &kp RPAR,          &kp RBKT,          &kp PIPE,          &kp MINUS,         &kp EQUAL,         &kp PLUS,          &kp BACKSLASH,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
&u_bootloader,     &to U_TAP,         &to U_EXTRA,       &to U_BASE,        U_NA,              &u_rgb_tog,        &u_rgb_eff,        &u_rgb_hui,        &u_rgb_sai,        &u_rgb_bri,        \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_ep_tog,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP
