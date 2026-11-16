#include "tc_rt.h"

u32 fn_8013c7fc(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7854u, &a);
    if (r3 != 0u) {
        if ((u32)param_1 != 0u) {
            if ((u32)param_1 != 1u) {
                c0lt = param_1 < 4;
                r4 = 0u;
                if ((u32)param_1 == 4u) {
                    r4 = r3 + 0x3f4u;
                } else if (!c0lt) {
                    if (param_1 < 6) {
                        r4 = r3 + 0x4a0u;
                    }
                } else {
                    c0lt = param_1 < 2;
                    if ((u32)param_1 == 2u) {
                        r4 = r3 + 0x29cu;
                    } else if (!c0lt) {
                        r4 = r3 + 0x4a0u;
                    }
                }
                if (r4 == 0u) {
                    r3 = 0x2e8u;
                } else {
                    r3 = rd32(r4 + 0x74u);
                }
            } else {
                r3 = r3 + 0x54cu;
                if (r3 == 0u) {
                    r3 = 0x2e8u;
                } else {
                    r3 = rd32(r3 + 0x74u);
                }
            }
        } else {
            r3 = rd32(r3 + 0xa48u);
            if (r3 == 0u) {
                r3 = 0x2e8u;
            } else {
                r3 = rd32(r3 + 0x74u);
            }
        }
    } else {
        r3 = 0x2e8u;
    }
    return r3;
}
