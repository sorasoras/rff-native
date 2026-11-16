#include "tc_rt.h"

void fn_80038630(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = rd32(param_1 + 0x30u) + 0x10u;
    a.r[0] = r30;
    r3 = tc_call(0x80037b5cu, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r5 = rd32(param_1 + 0x30u);
        r4 = rd32(r5 + 0xcu);
        r5 = rd32(r5 + 8u);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fdf28u;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800379a8u, &a);
        a.r[0] = r30;
        a.r[1] = 0x817fdf68u;
        a.r[2] = 0x817fdf28u;
        a.r[3] = 3u;
        r3 = tc_call(0x80037ba0u, &a);
        if (r3 != 0u) {
            wr32(param_1, 0u);
            return;
        }
        r6 = rd32(param_1 + 0x30u);
        r5 = rd32(r6 + 4u);
        r6 = rd32(r6);
        a.r[0] = r30;
        a.r[1] = 0x817fdf68u;
        a.r[2] = r5;
        a.r[3] = r6;
        r3 = tc_call(0x80037d9cu, &a);
        if (r3 != 0u) {
            a.r[0] = 0x817fdf68u;
            (void)tc_call(0x80037cdcu, &a);
            r0 = rd32(r30);
            if ((r0 == 0xfffffff1u || r0 == 0xfffffffbu) || r0 == 0xffffffc0u) {
                wr8(param_1 + rd32(rd32(param_1 + 0x30u) + 8u) + 8u, 0xffu);
            }
            wr32(param_1, 0u);
            return;
        }
        if (rd32(r30) == 0u) {
            wr8(param_1 + rd32(rd32(param_1 + 0x30u) + 8u) + 8u, 1u);
        }
        a.r[0] = r30;
        a.r[1] = 0x817fdf68u;
        (void)tc_call(0x80037c78u, &a);
    }
    wr32(param_1, 0u);
    return;
}
