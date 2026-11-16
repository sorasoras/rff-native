#include "tc_rt.h"

void fn_80301884(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdec0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32(param_1 + 4u);
    a.r[1] = param_2;
    a.r[2] = 0x817fdec8u;
    r3 = tc_call(0x80302130u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r28 = rd32(0x817fdeccu);
        if (r28 == 0u) {
            a.r[0] = param_1;
            a.r[1] = param_3;
            a.r[2] = param_4;
            a.r[3] = rd32(0x817fded8u);
            a.r[4] = rd32(0x817fdedcu);
            a.r[5] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x18u), &a);
        } else {
            r29 = rd32(0x817fdedcu);
            r30 = rd32(0x817fded8u);
            if ((u32)rd8(r28) != 0x2fu) {
                a.r[0] = r28;
                r3 = tc_call(0x802550d4u, &a);
                r31 = r3;
                a.r[0] = param_1 + 8u;
                r3 = tc_call(0x802550d4u, &a);
                if ((r31 + r3) >= 0x100u) {
                    return;
                }
                a.r[0] = 0x817fdee0u;
                a.r[1] = param_1 + 8u;
                a.r[2] = r3 + 1u;
                (void)tc_call(0x8025bdf4u, &a);
                a.r[0] = 0x817fdee0u;
                a.r[1] = r28;
                a.r[2] = r31 + 1u;
                f1 = tc_callf(0x8025be64u, &a);
                r28 = 0x817fdee0u;
            }
            a.r[0] = param_1;
            a.r[1] = param_3;
            a.r[2] = param_4;
            a.r[3] = r28;
            a.r[4] = r30;
            a.r[5] = r29;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
        }
    }
    return;
}
