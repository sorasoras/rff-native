#include "tc_rt.h"

s32 fn_8003734c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0xcu);
    r0 = rd32(r6 + 0xcu);
    if (r0 == 0u) {
        if ((((u32)rd8(0x803acbccu) >> 5u) & 1u) == 0u) {
            r4 = rd32((u32)param_1 + 0x18u);
        } else {
            r4 = rd32((u32)param_1 + 0x14u);
        }
        r0 = rd32(r6 + 8u);
        r5 = rd32((u32)param_1 + 0x10u);
        c0lt = (s32)r0 < 2;
        if (r0 == 2u) {
            r6 = rd32(r6 + 0x24u);
            a.r[0] = 1u;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040cd8u, &a);
            return (s32)r3;
        }
        if (!c0lt) {
            if ((s32)r0 < 4) {
                r6 = rd32(r6 + 0x24u);
                a.r[0] = 1u;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040db8u, &a);
                return (s32)r3;
            }
        } else {
            c0lt = (s32)r0 < 0;
            if (r0 == 0u) {
                r6 = rd32(r6 + 0x24u);
                a.r[0] = 0u;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040cd8u, &a);
                return (s32)r3;
            }
            if (!c0lt) {
                r6 = rd32(r6 + 0x24u);
                a.r[0] = 0u;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040db8u, &a);
                return (s32)r3;
            }
        }
        return 0;
    }
    return (s32)r0;
}
