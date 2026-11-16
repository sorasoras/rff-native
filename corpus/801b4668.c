#include "tc_rt.h"

void fn_801b4668(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x24u);
    a.r[1] = 0x8033b6f6u;
    a.r[2] = 0u;
    r3 = tc_call(0x800fe848u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800ff574u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x801b4340u, &a);
    a.r[0] = r3;
    (void)tc_call(0x8014b890u, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xb98u;
    a.r[1] = 0u;
    (void)tc_call(0x8020f18cu, &a);
    r4 = rd32((u32)param_1 + 0x1cu);
    r0 = rd32(r4 + 0x1284u);
    if (r0 == 0x21u) {
        a.r[0] = rd32(r4 + 0x1cu) + 0xbd0u;
        a.r[1] = 0x19u;
        (void)tc_call(0x8020f18cu, &a);
    } else {
        r0 = r0 * 0x38u;
        r0 = (u32)rd8(r0 - 0x7fb64fc9u);
        if ((r0 & 2u) != 0u) {
            a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xbd0u;
            a.r[1] = 0x13u;
            (void)tc_call(0x8020f18cu, &a);
        } else {
            r0 = r0 & 4u;
            if (r0 == 0u) {
                a.r[0] = rd32(r4 + 0x1cu) + 0xbd0u;
                a.r[1] = 0x19u;
                (void)tc_call(0x8020f18cu, &a);
            } else {
                a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xbd0u;
                a.r[1] = 0x13u;
                (void)tc_call(0x8020f18cu, &a);
            }
        }
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0xc08u;
    a.r[1] = 0x19u;
    (void)tc_call(0x8020f18cu, &a);
    return;
}
