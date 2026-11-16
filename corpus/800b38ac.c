#include "tc_rt.h"

void fn_800b38ac(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        r3 = tc_call(0x800b0d78u, &a);
        f1 = tc_lastf();
        r0 = (u32)((s32)ppc_mulhw(458129845, (s32)r3) >> 4);
        r4 = (r0 >> 0x1fu) & 1u;
        r0 = r0 + r4;
        r0 = r0 * 0x96u;
        r0 = r3 - r0;
        if (r0 == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x130u), &a);
            f1 = tc_lastf();
            r3 = ppc_mulhw(715827883, (s32)r3);
            r4 = 0x817fdfd8u;
            r3 = (u32)((s32)r3 >> 2);
            r5 = (r3 >> 0x1fu) & 1u;
            r3 = r3 + r5;
            c0lt = (s32)r3 < (s32)rd32(0x80570738u);
            wr32(0x817fdfd8u, r3);
            if (c0lt) {
                r4 = 0x80570738u;
            }
            r30 = rd32(r4);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x12cu), &a);
            f1 = tc_lastf();
            if ((s32)r3 > (s32)r30) {
                a.r[0] = 0x817fdfdcu;
                a.r[1] = param_1;
                a.r[2] = param_1 + 0xcf4u;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0xb4u), &a);
                r3 = rd32(0x817fdfe0u);
                r6 = rd32(0x817fdfe4u);
                wr32(0x817fdfe8u, rd32(0x817fdfdcu));
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)r30) >> 5);
                wr32(0x817fdfecu, r3);
                wr32(0x817fdff0u, r6);
                a.r[0] = r0 + ((r0 >> 0x1fu) & 1u);
                a.r[1] = 0x817fdfe8u;
                a.r[2] = 0u;
                f1 = tc_callf(0x800d7d2cu, &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_1) + 0x12cu), &a);
                f1 = tc_lastf();
                a.r[0] = param_1;
                a.r[1] = r3 - r30;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0x134u), &a);
            }
        }
    }
    a.r[0] = param_1;
    a.r[1] = 1u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        (void)tc_call(0x800b0d78u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = 2u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 2u;
        (void)tc_call(0x800b0d78u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = 3u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 3u;
        (void)tc_call(0x800b0d78u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = 4u;
    r3 = tc_call(0x800b1048u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 4u;
        (void)tc_call(0x800b0d78u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = 5u;
    (void)tc_call(0x800b1048u, &a);
    (void)tc_call(0x800b3880u, &a);
    return;
}
