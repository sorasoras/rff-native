#include "tc_rt.h"

s32 fn_8014261c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x14u;
    if ((s32)rd32((u32)param_1 + 0x2cu) <= 1) {
        r31 = 0x32u;
    }
    r0 = (u32)rd8(0x80492b98u);
    if (r0 != 0u) {
        if (r0 != 1u) {
            if (r0 == 2u) {
                r31 = r31 + 0x14u;
            }
        } else {
            r31 = r31 + 0x14u;
        }
    } else {
        r3 = tc_call(0x80081324u, &a);
        if (r3 == 0u) {
            r3 = tc_call(0x80081370u, &a);
            if (r3 == 0u) {
                r3 = tc_call(0x800813c0u, &a);
                if (r3 == 0u) {
                    r3 = tc_call(0x800813fcu, &a);
                    if (r3 != 0u) {
                        r31 = r31 + 5u;
                    }
                } else {
                    r31 = r31 + 0x14u;
                }
            } else {
                r31 = r31 + 0x1eu;
            }
        } else {
            r31 = r31 + 0xau;
        }
    }
    if ((rd32(0x80492c58u) & 0x40u) != 0u) {
        r31 = r31 + 0x64u;
    }
    r0 = (u32)rd8(0x80492824u);
    r4 = (u32)rd8(0x80492825u);
    if (r0 > (u32)rd8(0x8049282au) || r4 > (u32)rd8(0x8049282bu) || r0 < (u32)rd8(0x80492828u) || r4 < (u32)rd8(0x80492829u)) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    if (r0 != 0u) {
        r31 = r31 + 0x32u;
    }
    return (s32)r31;
}
