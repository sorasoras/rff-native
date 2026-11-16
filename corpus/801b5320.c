#include "tc_rt.h"

void fn_801b5320(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r28 = 0, r30 = 0, r31 = 0;
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
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = 0u;
    r31 = rd32((u32)param_1 + 0x10u);
    do {
        r5 = rd32((u32)param_1 + (((r30 + r31) << 2u) & 0xfffffffcu) + 0x3cu);
        if ((r5 == 7u || r5 == 0x1eu) || r5 == 0x1fu) {
            r0 = rd32(0x8033b6d4u);
            r3 = rd32(0x8033b6d8u);
            r6 = (r5 * 0x38u) - 0x7fb65020u;
            wr32(0x817fdfb8u, rd32(0x8033b6d0u));
            r4 = (u32)rd8(r6 + 0x55u);
            wr32(0x817fdfbcu, r0);
            wr32(0x817fdfc0u, r3);
            r4 = rd32(((r4 << 2u) & 0xfffffffcu) - 0x7e802048u);
        } else {
            if (r5 == 0x21u) {
                r4 = 0x8033b70fu;
            } else {
                r4 = 0x8033b71au;
            }
        }
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = 0x817fdfc8u;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        f1 = tc_callf(0x8025b994u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32((u32)param_1 + 0xb4u);
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801ebe1cu, &a);
        a.r[0] = r3;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x801ed080u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        r3 = tc_call(0x801b5420u, &a);
        f1 = tc_lastf();
        r28 = r3;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32((u32)param_1 + 0xb4u);
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801ebe1cu, &a);
        a.r[0] = r3;
        a.r[1] = r28;
        f1 = tc_callf(0x801ec6bcu, &a);
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
        r30 = r30 + 1u;
    } while ((s32)r30 < 6);
    return;
}
