#include "tc_rt.h"

void fn_8030cea8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r12 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    c0lt = (s32)param_2 < 1;
    r26 = 0u;
    if (param_2 == 1u) {
        r27 = 3u;
        r26 = 1u;
    } else if (c0lt && (s32)param_2 >= 0) {
        r27 = 1u;
    }
    r30 = (u32)param_3;
    r25 = 0u;
    while ((s32)r25 < (s32)rd32((u32)param_3 + 0x8cu)) {
        r29 = r30;
        r24 = 0u;
        while ((s32)r24 < (s32)rd32((u32)param_3 + 0x90u)) {
            r23 = rd32(r29 + 0xcu);
            if (r23 != 0u) {
                if (r23 != param_1) {
                    r3 = rd32(r23);
                    r4 = 0u;
                    if (r3 != 0u && (u32)rd16(r3 + 0x38u) == 1u) {
                        r4 = 1u;
                    }
                    if (r4 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x802462c8u, &a);
                    }
                    r3 = tc_call(0x802f46b8u, &a);
                    a.r[0] = r3;
                    a.r[1] = r23;
                    f1 = tc_callf(0x802f4b60u, &a);
                } else if (r26 == 0u) {
                    r3 = tc_call(0x802f46b8u, &a);
                    a.r[0] = r3;
                    a.r[1] = r23;
                    f1 = tc_callf(0x802f4b60u, &a);
                }
                wr32(r29 + 0xcu, 0u);
            }
            r29 = r29 + 4u;
            r24 = r24 + 1u;
        }
        r30 = r30 + 0x10u;
        r25 = r25 + 1u;
    }
    wr8((u32)param_3 + 0x9fu, 0u);
    wr8((u32)param_3 + 0x9du, 0u);
    wr32((u32)param_3 + 0x8cu, 0u);
    if (r26 != 0u) {
        a.r[0] = (u32)param_3;
        f1 = tc_callf(0x8030bf80u, &a);
    }
    r12 = rd32((u32)param_3 + 0x94u);
    if (r12 != 0u) {
        a.r[0] = (u32)param_3;
        a.r[1] = r27;
        a.r[2] = rd32((u32)param_3 + 0x98u);
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    return;
}
