#include "tc_rt.h"

u32 fn_80153f80(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r27 = (u32)param_1 + 8u;
    r26 = 0u;
    r28 = r27;
    do {
        r31 = 0u;
        if ((u32)rd8(r28) != 0u) {
            r30 = 1u;
            c0eq = rd32(r28 + 4u) == 0u;
            if (!c0eq) {
                r29 = 0u;
                if (!c0eq) {
                    a.r[0] = r28;
                    r3 = tc_call(0x80153c3cu, &a);
                    if (r3 == 0u) {
                        r29 = 1u;
                    }
                }
                if (r29 == 0u) {
                    r30 = 0u;
                }
            }
            if (r30 != 0u) {
                r31 = 1u;
            }
        }
        if (r31 != 0u && rd32(r28 + 4u) == (u32)param_2) {
            r3 = 0u;
            return r3;
        }
        r26 = r26 + 1u;
        r28 = r28 + 0x3cu;
    } while ((s32)r26 < 3);
    r26 = 0u;
    do {
        r29 = 0u;
        if ((u32)rd8(r27) != 0u) {
            r30 = 1u;
            c0eq = rd32(r27 + 4u) == 0u;
            if (!c0eq) {
                r31 = 0u;
                if (!c0eq) {
                    a.r[0] = r27;
                    r3 = tc_call(0x80153c3cu, &a);
                    if (r3 == 0u) {
                        r31 = 1u;
                    }
                }
                if (r31 == 0u) {
                    r30 = 0u;
                }
            }
            if (r30 != 0u) {
                r29 = 1u;
            }
        }
        if (r29 == 0u) {
            a.r[0] = r27;
            a.r[1] = (u32)param_2;
            (void)tc_call(0x80153d58u, &a);
            r3 = 1u;
            return r3;
        }
        r26 = r26 + 1u;
        r27 = r27 + 0x3cu;
    } while ((s32)r26 < 3);
    r3 = 0u;
    return r3;
}
