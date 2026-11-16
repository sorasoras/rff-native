#include "tc_rt.h"

s32 fn_801f39a4(u32 param_1, s32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r22 = 0, r27 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = (u32)param_2 + 4u;
    r27 = 0u;
    r31 = rd32((u32)param_2 + 4u);
    for (;;) {
        if (r31 == r30) {
            return (s32)r27;
        }
        if (r31 == 0u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x80376b00u;
            a.r[1] = 0x23du;
            a.r[2] = 0x80376adcu;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x802e41c0u, &a);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
        }
        if (r31 == 0u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x80376aa0u;
            a.r[1] = 0x193u;
            a.r[2] = 0x80376a7cu;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            f1 = tc_callf(0x802e41c0u, &a);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
        }
        if (rd32(r31 + 8u) == 0u) {
            r22 = 1u;
            do {
                a.r[0] = rd32(r31 + 0x18u);
                a.r[1] = (u32)(s8)r22;
                r3 = tc_call(0x8013f678u, &a);
                f1 = tc_lastf();
                r3 = r3 & 0xffffu;
                if (r3 == rd32((u32)param_3 + 0x18u)) {
                    r27 = r31 + 0x24u;
                    if ((u32)param_3 == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80376ad0u;
                        a.r[1] = 0x233u;
                        a.r[2] = 0x80376aacu;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x802e41c0u, &a);
                    }
                    wr32(0x817fdfccu, r27);
                    a.r[0] = r31 + 0x20u;
                    a.r[1] = 0x817fdfccu;
                    a.r[2] = (u32)param_3;
                    f1 = tc_callf(0x802deba4u, &a);
                    r27 = 1u;
                    break;
                }
                r22 = r22 + 1u;
            } while ((s32)r22 < 4);
            if (r27 != 0u) {
                return (s32)r27;
            }
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_1;
            a.r[1] = r31 + 0x20u;
            a.r[2] = (u32)param_3;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x801f3b18u, &a);
            f1 = tc_lastf();
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r27 = r3;
            if (r3 != 0u) break;
        }
        r31 = rd32(r31);
    }
    r30 = r31 + 0x24u;
    if ((u32)param_3 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80376ad0u;
        a.r[1] = 0x233u;
        a.r[2] = 0x80376aacu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802e41c0u, &a);
    }
    wr32(0x817fdfc8u, r30);
    a.r[0] = r31 + 0x20u;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = (u32)param_3;
    (void)tc_call(0x802deba4u, &a);
    return (s32)r27;
}
