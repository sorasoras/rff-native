#include "tc_rt.h"

void fn_80050ca4(u32 param_1, s32 param_2, u32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r29 = 0;
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
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r29 = 0u;
    while (r29 == 0u) {
        r3 = tc_call(0x800509ccu, &a);
        f1 = tc_lastf();
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
        r29 = r3;
    }
    if ((u32)param_2 != 0u) {
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = (u32)param_2;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x800371a8u, &a);
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x80037178u, &a);
    }
    wr32(r29 + 4u, param_1);
    wr32(r29 + 8u, (u32)param_2);
    wr32(r29 + 0xcu, 0u);
    wr32(r29 + 0x10u, param_4);
    wr32(r29 + 0x14u, 0u);
    wr32(r29 + 0x18u, 0x800509c0u);
    wr32(r29 + 0x1cu, 0x800508bcu);
    wr32(r29 + 0x28u, 0u);
    wr32(r29 + 0x2cu, (rd32(0x803c8648u) + 3u) & 0xfffffffcu);
    wr32(r29 + 0x30u, (rd32(0x803c864cu) + 0x1fu) & 0xffffffe0u);
    wr32(r29 + 0x38u, param_3);
    wr32(r29 + 0x48u, r3);
    a.r[0] = param_4;
    a.r[1] = r3;
    (void)tc_call(0x80227738u, &a);
    a.r[0] = 0x803c865cu;
    a.r[1] = r29;
    r3 = tc_call(0x8007b03cu, &a);
    wr32(r29, r3);
    wr32(r29 + 0x40u, rd32(0x803c8640u));
    wr32(r29 + 0x44u, rd32(0x803c8644u));
    return;
}
