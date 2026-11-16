#include "tc_rt.h"

u32 fn_80141170(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r9 = 0, r10 = 0, r30 = 0, r31 = 0;
    u64 t0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    (void)tc_call(0x80141164u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x801412bcu, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r3 = 1u;
    } else {
        if (param_1 >= rd32(0x804beb2cu)) {
            r3 = 0u;
        } else {
            r4 = rd32(0x804beb34u);
            wr32(0x817fdfe8u, 0u);
            r30 = r4 + ((param_1 << 5u) & 0xffffffe0u);
            r3 = rd32(0x805712c4u);
            wr32(0x817fdfecu, 0xffffffffu);
            wr32(0x817fdff0u, 0u);
            wr32(0x817fdff4u, 0u);
            r9 = rd32(r30 + 0x14u);
            r10 = r9 + 0x1fu;
            t0 = (u64)rd32(r30 + 0x10u) + (u64)((r9 + 0x1fu) < r9);
            r0 = rd32(r30 + 8u) + 3u;
            wr32(0x817fdfe8u, 0u);
            r7 = ((u32)t0 & 0xffffffe0u) | (r10 & 0x1fu);
            wr32(0x817fdfecu, 0xffffffffu);
            wr32(0x817fdff0u, r0 & 0xfffffffcu);
            wr32(0x817fdff4u, ((u32)((u64)((((r10 << 0x1bu) | (r10 >> 5u)) & 0x7ffffffu) | (((u32)t0 << 0x1bu) & 0xf8000000u)) + (u64)(((s32)r7 < 0) && ((r7 & 0x1fu) != 0u))) << 5u) & 0xffffffe0u);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = 0x6bfu;
            a.r[2] = 1u;
            a.r[3] = 0x817fdfe8u;
            a.r[6] = (u32)t0;
            a.r[7] = r10;
            r3 = tc_call(0x80050e70u, &a);
            r31 = r3;
            a.r[0] = r3;
            a.r[1] = 0u;
            r3 = tc_call(0x800510bcu, &a);
            wr32(r30 + 4u, r3);
            r3 = 1u;
            wr32(r30 + 0x18u, r31);
        }
    }
    return r3;
}
