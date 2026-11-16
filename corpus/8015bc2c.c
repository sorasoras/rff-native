#include "tc_rt.h"

void fn_8015bc2c(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, f64 param_f1)
{
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)rd8(((u32)param_3 * 0x38u) - 0x7fb64fcbu);
    r29 = param_1;
    r31 = 1u;
    r28 = 0u;
    do {
        if ((param_2 & r31) != 0u) {
            a.f[0] = param_f1;
            a.f[1] = (f64)rdf32(0x80574970u);
            a.r[0] = r29;
            a.r[1] = (u32)param_3;
            a.r[2] = r30;
            a.r[3] = r28;
            a.r[4] = param_4;
            a.r[5] = param_5;
            (void)tc_call(0x8015ab30u, &a);
        } else {
            a.r[0] = r29;
            (void)tc_call(0x8015aaccu, &a);
        }
        r28 = r28 + 1u;
        r31 = (r31 << 1u) & 0xfffffffeu;
        r29 = r29 + 0x24u;
    } while ((s32)r28 < 10);
    wr32(param_1 + 0x168u, param_2);
    wr32(param_1 + 0x178u, param_5);
    wr32(param_1 + 0x16cu, (u32)param_3);
    wr32(param_1 + 0x170u, param_4);
    wrf32d(param_1 + 0x174u, param_f1);
    return;
}
