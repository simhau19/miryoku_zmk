// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_NAV_VI

#if !defined (MIRYOKU_LAYOUTMAPPING_LILY58)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_LILY58( \
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
&kp GRAVE  &kp N1  &kp N2  &kp N3  &kp N4  &kp N5                    &kp N6  &kp N7  &kp N8  &kp N9  &kp N0  &kp SEMI \
&kp TAB    K00     K01     K02     K03     K04                       K05     K06     K07     K08     K09     &kp RA(W) \
&kp LCTRL  K10     K11     K12     K13     K14                       K15     K16     K17     K18     K19     &kp RA(Z) \
&kp LSHFT  K20     K21     K22     K23     K24    &kp LBKT &kp RBKT  K25     K26     K27     K28     K29     &kp RA(L) \
                   XXX     K32     K33     K34                       K35     K36     K37     XXX

#endif