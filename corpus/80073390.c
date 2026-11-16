#include "tc_rt.h"

static void px_rec(u32 sp_, s32 param_1)
{
    u32 r1 = 0, r3 = 0, r4 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(sp_ - 0x20u, sp_);
    r1 = sp_ - 0x20u;
    wr32(r1 + 0x24u, 0x817ff000u);
    wr32(r1 + 0x1cu, 0u);
    wr32(r1 + 0x18u, 0u);
    wr32(r1 + 0x14u, 0u);
    r29 = ((u32)param_1 << 2u) & 0xfffffffcu;
    wr32(r1 + 0x10u, 0u);
    r3 = rd32(r29 - 0x7fb79c28u);
    if (rd32(r3 + 0x260u) != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80074bc0u, &a);
        a.r[0] = 0x8046b7e4u;
        a.r[1] = rd32(r29 - 0x7fb79c28u);
        a.r[2] = 0u;
        r3 = tc_call(0x8007b0f4u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            a.r[0] = 0x8046b7e4u;
            a.r[1] = r3;
            f1 = tc_callf(0x8007aff0u, &a);
            r4 = tc_lastr4();
        }
        r3 = rd32(rd32(r29 - 0x7fb79c28u) + 0x268u);
        if (r3 != 0u) {
            a.r[0] = r3;
            f1 = tc_callf(0x800cf790u, &a);
            r4 = tc_lastr4();
        }
        r3 = rd32(r29 - 0x7fb79c28u);
        r31 = rd32(r3 + 0xacu);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x18u), &a);
        a.r[0] = r31;
        r3 = tc_call(0x8007dad4u, &a);
        a.r[0] = 0x80469958u;
        a.r[1] = rd32(r3 + 8u);
        a.r[2] = 1u;
        (void)tc_call(0x80057c10u, &a);
        a.r[0] = r31;
        r3 = tc_call(0x8007dad4u, &a);
        a.r[0] = 0x8046a200u;
        a.r[1] = rd32(r3 + 0xcu);
        a.r[2] = 1u;
        (void)tc_call(0x80058f78u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80073544u, &a);
        if ((u32)param_1 == 0xbu) {
            px_rec(r1, 0x18u);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80073544u, &a);
    }
    return;
}

void fn_80073390(s32 param_1)
{
    px_rec(0x817fe000u, param_1);
}
