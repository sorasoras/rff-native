#include "tc_rt.h"

void fn_802c731c(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        r30 = 0u;
        r31 = 0x80399728u;
        do {
            if (((s32)r30 <= 0 || (s32)r30 >= 7) && r30 != 9u) {
                r3 = rd32(rd32(param_1 + 0x238u) + 0x10u);
                a.r[0] = r3;
                a.r[1] = rd32(r31);
                a.r[2] = 1u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                f1 = tc_lastf();
                r4 = r3;
                r3 = rd32(param_1 + 0x250u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x4cu), &a);
                f1 = tc_lastf();
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x50u), &a);
            } else {
                r3 = rd32(rd32(param_1 + 0x238u) + 0x10u);
                a.r[0] = r3;
                a.r[1] = rd32(r31);
                a.r[2] = 1u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                f1 = tc_lastf();
                r4 = r3;
                r3 = rd32(param_1 + 0x250u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x4cu), &a);
                f1 = tc_lastf();
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x50u), &a);
            }
            r30 = r30 + 1u;
            r31 = r31 + 4u;
        } while ((s32)r30 < 10);
    } else if (!c0lt) {
        if ((s32)r0 < 3) {
            r30 = 0u;
            r31 = 0x80399728u;
            do {
                if ((s32)r30 < 7 || r30 == 9u) {
                    r3 = rd32(rd32(param_1 + 0x238u) + 0x10u);
                    a.r[0] = r3;
                    a.r[1] = rd32(r31);
                    a.r[2] = 1u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                    f1 = tc_lastf();
                    r4 = r3;
                    r3 = rd32(param_1 + 0x250u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r3) + 0x4cu), &a);
                    f1 = tc_lastf();
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r3) + 0x50u), &a);
                } else {
                    r3 = rd32(rd32(param_1 + 0x238u) + 0x10u);
                    a.r[0] = r3;
                    a.r[1] = rd32(r31);
                    a.r[2] = 1u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                    f1 = tc_lastf();
                    r4 = r3;
                    r3 = rd32(param_1 + 0x250u);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r3) + 0x4cu), &a);
                    f1 = tc_lastf();
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    a.r[2] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(rd32(rd32(r3) + 0x50u), &a);
                }
                r30 = r30 + 1u;
                r31 = r31 + 4u;
            } while ((s32)r30 < 10);
        }
    } else if ((s32)r0 >= 0) {
        r30 = 0u;
        r31 = 0x80399728u;
        do {
            if ((s32)r30 < 2 || r30 == 9u) {
                r3 = rd32(rd32(param_1 + 0x238u) + 0x10u);
                a.r[0] = r3;
                a.r[1] = rd32(r31);
                a.r[2] = 1u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                f1 = tc_lastf();
                r4 = r3;
                r3 = rd32(param_1 + 0x250u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x4cu), &a);
                f1 = tc_lastf();
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x50u), &a);
            } else {
                r3 = rd32(rd32(param_1 + 0x238u) + 0x10u);
                a.r[0] = r3;
                a.r[1] = rd32(r31);
                a.r[2] = 1u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                f1 = tc_lastf();
                r4 = r3;
                r3 = rd32(param_1 + 0x250u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x4cu), &a);
                f1 = tc_lastf();
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 0x50u), &a);
            }
            r30 = r30 + 1u;
            r31 = r31 + 4u;
        } while ((s32)r30 < 10);
    }
    return;
}
