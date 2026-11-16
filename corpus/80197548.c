#include "tc_rt.h"

s32 fn_80197548(s32 param_1, s32 param_2)
{
    u32 fl_ = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = (u32)rd16((u32)param_2 + 0xbcu);
        r3 = tc_call(0x800cd704u, &a);
        f1 = tc_lastf();
        r27 = r3 & 0xffu;
        r26 = 0u;
        r28 = 0u;
        for (;;) {
            if ((s32)r26 >= (s32)rd32((u32)param_1 + 0xcu)) {
                fl_ = 1u;
                break;
            }
            r29 = rd32(rd32((u32)param_1 + 0x2cu) + r28);
            a.r[0] = r29;
            a.r[1] = (u32)rd16((u32)param_2 + 0xbcu);
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r29 + 0xccu) + 0x10u), &a);
            f1 = tc_lastf();
            if (r3 != 0u && (u32)rd16(r29 + 0xbcu) == (u32)rd16((u32)param_2 + 0xbcu) && (u32)rd8(r29 + 0xbfu) == (u32)rd8((u32)param_2 + 0xbfu) && (s32)r27 >= (s32)((u32)rd8((u32)param_2 + 0xbeu) + (u32)rd8(r29 + 0xbeu))) {
                r3 = r29;
                return (s32)r3;
            }
            r28 = r28 + 4u;
            r26 = r26 + 1u;
        }
        if (fl_ == 1u) {
            fl_ = 0u;
        }
    }
    r26 = 0u;
    r29 = 0u;
    for (;;) {
        if ((s32)r26 >= (s32)rd32((u32)param_1 + 0xcu)) {
            r3 = 0u;
            return (s32)r3;
        }
        r28 = rd32(rd32((u32)param_1 + 0x2cu) + r29);
        if ((u32)rd16(r28 + 0xbcu) == 0x2e8u) {
            if ((u32)param_2 == 0u) break;
            a.r[0] = r28;
            a.r[1] = (u32)rd16((u32)param_2 + 0xbcu);
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r28 + 0xccu) + 0x10u), &a);
            f1 = tc_lastf();
            if (r3 != 0u) break;
        }
        r29 = r29 + 4u;
        r26 = r26 + 1u;
    }
    r3 = r28;
    return (s32)r3;
}
