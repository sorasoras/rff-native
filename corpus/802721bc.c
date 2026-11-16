#include "tc_rt.h"

s32 fn_802721bc(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdd00u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = 0x817fde3cu;
    wr32(0x817fdffcu, 0u);
    r5 = 0x8033dc8cu;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    ctr = 0x29u;
    do {
        r4 = rd32(r5 + 4u);
        r5 = r5 + 8u;
        r0 = rd32(r5);
        wr32(r6 + 4u, r4);
        wr32(r6 + 8u, r0);
        r6 = r6 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r30 = 0u;
    r4 = 0u;
    if (param_1 >= 0) {
        r3 = (u32)param_1;
    } else {
        ctr = 0x29u;
        do {
            if ((u32)param_1 == rd32(r4 - 0x7e8021c0u)) {
                if ((((u32)param_1 == 0xffffff8eu || (u32)param_1 == 0xffffff8cu) || ((u32)param_1 == 0xffffff8bu || (u32)param_1 == 0xfffffff7u)) || (u32)param_1 == 0xfffffff4u) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0x817fddc0u;
                    a.r[1] = 0x8038f5e8u;
                    a.r[2] = (u32)param_1;
                    a.r[3] = r6;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    f1 = tc_callf(0x8025b994u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0u;
                    a.r[1] = 0x817fddc0u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80273118u, &a);
                }
                (void)tc_call(0x802721b8u, &a);
                r3 = rd32((((r30 + 1u) << 2u) & 0xfffffffcu) - 0x7e8021c0u);
                return (s32)r3;
            }
            r30 = r30 + 2u;
            r4 = r4 + 8u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x8038f5fcu;
        a.r[1] = (u32)param_1;
        a.r[2] = 0x817fde40u;
        a.r[3] = r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x80228554u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fdd40u;
        a.r[1] = 0x8038f630u;
        a.r[2] = (u32)param_1;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8025b994u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0u;
        a.r[1] = 0x817fdd40u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80273118u, &a);
        (void)tc_call(0x802721b8u, &a);
        r3 = 0xffffffc0u;
    }
    return (s32)r3;
}
