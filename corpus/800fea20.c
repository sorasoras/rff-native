#include "tc_rt.h"

void fn_800fea20(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = rd32(rd32(param_1 + 0xc0u) + 0xf0u);
    a.r[0] = r29;
    (void)tc_call(0x800f7f80u, &a);
    a.r[0] = r29;
    a.r[1] = 0u;
    (void)tc_call(0x800f7f48u, &a);
    a.r[0] = r29;
    a.r[1] = 0x80339200u;
    (void)tc_call(0x800f7ed8u, &a);
    r28 = rd32(r29);
    r27 = 0u;
    r31 = 0u;
    while ((s32)r31 < (s32)r28) {
        a.r[0] = r29;
        a.r[1] = r31;
        a.r[2] = param_2;
        r3 = tc_call(0x800f8060u, &a);
        if (r3 != 0u) {
            r27 = r27 + 1u;
        }
        r31 = r31 + 1u;
    }
    wr32(param_1 + 0xb8u, r27);
    a.r[0] = (r27 * 0x4cu) + 0x10u;
    r3 = tc_call(0x800fe364u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x800fe4ccu;
        a.r[2] = 0u;
        a.r[3] = 0x4cu;
        a.r[4] = r27;
        r3 = tc_call(0x80255464u, &a);
    }
    wr32(param_1 + 0xb4u, r3);
    r27 = r3;
    r30 = 0u;
    while ((s32)r30 < (s32)r28) {
        wr32(r27, param_1);
        a.r[0] = r29;
        a.r[1] = r30;
        a.r[2] = param_2;
        r3 = tc_call(0x800f8060u, &a);
        if (r3 != 0u) {
            a.r[0] = r29;
            a.r[1] = r30;
            r3 = tc_call(0x800f7e70u, &a);
            wr32(r27 + 8u, r3);
            a.r[0] = r29;
            a.r[1] = r30;
            r3 = tc_call(0x800f7fecu, &a);
            f1 = tc_lastf();
            r5 = r3;
            r3 = rd32(param_1 + 0xfcu);
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
            f1 = tc_lastf();
            r26 = r3;
            if (r3 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803391c9u;
                a.r[1] = 0x214u;
                a.r[2] = 0x80339205u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802e41c0u, &a);
            }
            a.r[0] = r27 + 0x14u;
            a.r[1] = r26;
            (void)tc_call(0x802ee708u, &a);
            a.r[0] = r29;
            a.r[1] = r30;
            r3 = tc_call(0x800f7fecu, &a);
            a.r[0] = r27 + 0x2cu;
            a.r[1] = r3;
            f1 = tc_callf(0x8025bd34u, &a);
            a.r[0] = param_1;
            a.r[1] = r27 + 0x14u;
            a.r[2] = rd32(param_1 + 0xfcu);
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = r27 + 0x14u;
            r3 = tc_call(0x802ee818u, &a);
            wr32(r27 + 4u, r3 & 0xffffu);
        }
        r30 = r30 + 1u;
        r27 = r27 + 0x4cu;
    }
    return;
}
