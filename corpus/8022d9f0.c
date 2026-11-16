#include "tc_rt.h"

void fn_8022d9f0(u32 param_r3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((s32)param_r3 >= 5) {
        if ((s32)param_r3 >= 7) {
            r28 = 1u;
        } else {
            r28 = 0u;
        }
    } else if (param_r3 == 0u) {
        r28 = 0u;
    } else {
        r28 = 1u;
    }
    f1 = tc_callf(0x8022762cu, &a);
    if (r28 == 0u) {
        a.r[0] = 1u;
        r3 = tc_call(0x80242b64u, &a);
        f1 = tc_lastf();
        r29 = r3;
    }
    do {
        r30 = rd32(0x80571500u);
        r3 = 0u;
        r31 = 0u;
        while (r30 != 0u && (r31 == 0u || r3 == rd32(r30 + 4u))) {
            a.r[0] = 0u;
            a.r[1] = param_r3;
            a.f[0] = f1;
            r3 = tc_call(rd32(r30), &a);
            f1 = tc_lastf();
            r0 = ppc_cntlzw(r3);
            r3 = rd32(r30 + 4u);
            r0 = (r0 >> 5u) & 0x7ffffffu;
            r30 = rd32(r30 + 8u);
            r31 = r31 | r0;
        }
        r3 = tc_call(0x8022e858u, &a);
        f1 = tc_lastf();
        r31 = r31 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
    } while (r31 != 0u);
    do {
        r3 = tc_call(0x8022e858u, &a);
    } while (r3 == 0u);
    f1 = tc_callf(0x8022c2b0u, &a);
    r31 = rd32(0x80571500u);
    r3 = 0u;
    r30 = 0u;
    while (r31 != 0u && (r30 == 0u || r3 == rd32(r31 + 4u))) {
        a.r[0] = 1u;
        a.r[1] = param_r3;
        a.f[0] = f1;
        r3 = tc_call(rd32(r31), &a);
        f1 = tc_lastf();
        r0 = ppc_cntlzw(r3);
        r3 = rd32(r31 + 4u);
        r0 = (r0 >> 5u) & 0x7ffffffu;
        r31 = rd32(r31 + 8u);
        r30 = r30 | r0;
    }
    (void)tc_call(0x8022e858u, &a);
    (void)tc_call(0x8022794cu, &a);
    if (r28 == 0u) {
        a.r[0] = r29;
        (void)tc_call(0x80242b64u, &a);
    }
    r3 = rd32(0x800000dcu);
    while (r3 != 0u) {
        r0 = (u32)rd16(r3 + 0x2c8u);
        r30 = rd32(r3 + 0x2fcu);
        c0lt = (s32)r0 < 4;
        if (r0 != 4u) {
            if (!c0lt) {
                r3 = r30;
                continue;
            }
            if (r0 != 1u) {
                r3 = r30;
                continue;
            }
        }
        a.r[0] = r3;
        (void)tc_call(0x8022f8a0u, &a);
        r3 = r30;
    }
    return;
}
