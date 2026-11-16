#include "tc_rt.h"

u32 fn_802c08c4(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r30 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80348638u);
    wr32(param_1, (u32)param_2);
    wr8(param_1 + 0x1cu, 0u);
    wrf32d(param_1 + 4u, f0);
    wr32(param_1 + 0x20u, (u32)param_3);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x28u, 0u);
    wr8(param_1 + 0x40u, 0u);
    wr8(param_1 + 0x41u, 0u);
    wr8(param_1 + 0x44u, 1u);
    if (param_2 < 4) {
        r30 = (u32)param_2 * 0x30u;
        wr8((u32)param_2 - 0x7fab8d28u, 0u);
        a.r[0] = r30 - 0x7fab8d20u;
        (void)tc_call(0x8022671cu, &a);
        a.r[0] = r30 - 0x7fab8c60u;
        (void)tc_call(0x8022671cu, &a);
        wr32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fab8ba0u, param_1);
    }
    return param_1;
}
