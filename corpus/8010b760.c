#include "tc_rt.h"

s32 fn_8010b760(u32 param_1, s32 param_2)
{
    u32 r4 = 0;
    (void)param_1;
    r4 = (u32)param_2;
    if (rd32(0x8057114cu) != 6u) {
        if ((u32)param_2 == 0x2730u) {
            r4 = 0x33fcu;
        }
        if (r4 == 0x2731u) {
            r4 = 0x33b2u;
        }
        if (r4 == 0x2732u) {
            r4 = 0x33fdu;
        }
        if (r4 == 0x2735u) {
            r4 = 0x3389u;
        }
    }
    return (s32)r4;
}
