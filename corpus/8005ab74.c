#include "tc_rt.h"

void fn_8005ab74(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x2c0u) == 0u || rd32((u32)param_1 + 0x2bcu) == 0u) {
        r28 = param_2 & 0x10u;
        if (r28 != 0u) {
            a.r[0] = 0x10u;
            r3 = tc_call(0x80082730u, &a);
            if (r3 != 0u) {
                a.r[0] = 0x8046d8c8u;
                a.r[1] = param_3;
                (void)tc_call(0x8008c9d8u, &a);
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        (void)tc_call(0x8005b3c0u, &a);
    } else {
        r28 = param_2 & 0x10u;
        if (r28 != 0u) {
            a.r[0] = 0x10u;
            r3 = tc_call(0x80082730u, &a);
            if (r3 != 0u) {
                a.r[0] = 0x8046d8c8u;
                a.r[1] = param_3;
                (void)tc_call(0x8008c9d8u, &a);
            }
        }
        if (rd32(0x805710ecu) == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            (void)tc_call(0x8005b3c0u, &a);
        } else {
            a.r[0] = (u32)param_1 + 0xc4u;
            (void)tc_call(0x800450d8u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            (void)tc_call(0x8005b3c0u, &a);
            a.r[0] = 0u;
            (void)tc_call(0x800450d8u, &a);
        }
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = param_3;
    (void)tc_call(0x8005b5a4u, &a);
    if (r28 != 0u) {
        a.r[0] = 0x10u;
        r3 = tc_call(0x80082730u, &a);
        if (r3 != 0u) {
            r27 = rd32(0x805710ecu);
            wr32(0x805710ecu, 0u);
            a.r[0] = 0u;
            f1 = tc_callf(0x8003d790u, &a);
            r26 = rd32(0x8046adc4u);
            while (r26 != 0u) {
                r3 = r26;
                r26 = rd32(r26);
                r3 = rd32(r3 + 8u);
                if (rd32(r3 + 0x7cu) != 0u) {
                    a.r[0] = r3;
                    a.r[1] = param_3;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
                }
            }
            wr32(0x805710ecu, r27);
            a.r[0] = (((0u - r27) | r27) >> 0x1fu) & 1u;
            (void)tc_call(0x8003d790u, &a);
        }
    }
    if (r28 != 0u) {
        a.r[0] = 0x10u;
        r3 = tc_call(0x80082730u, &a);
        if (r3 != 0u) {
            if (rd32((u32)param_1 + 0x2c0u) == 0u || rd32((u32)param_1 + 0x2bcu) == 0u) {
                a.r[0] = 0x8046d8c8u;
                a.r[1] = param_3;
                (void)tc_call(0x8008bf14u, &a);
            } else if (rd32(0x805710ecu) == 0u) {
                a.r[0] = 0x8046d8c8u;
                a.r[1] = param_3;
                (void)tc_call(0x8008bf14u, &a);
            } else {
                a.r[0] = (u32)param_1 + 0xc4u;
                (void)tc_call(0x800450d8u, &a);
                a.r[0] = 0x8046d8c8u;
                a.r[1] = param_3;
                (void)tc_call(0x8008bf14u, &a);
                a.r[0] = 0u;
                (void)tc_call(0x800450d8u, &a);
            }
        }
    }
    if ((param_2 & 0x40u) != 0u) {
        a.r[0] = 0x10u;
        r3 = tc_call(0x80082730u, &a);
        if (r3 != 0u) {
            a.r[0] = param_3;
            (void)tc_call(0x800778d4u, &a);
        }
    }
    return;
}
