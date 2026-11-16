#include "tc_rt.h"

void fn_800ccecc(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_1 + 0x30u;
    r3 = tc_call(0x800ccd6cu, &a);
    if (r3 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = 0x817fdfe8u;
        r3 = tc_call(0x800cce20u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = param_2;
            (void)tc_call(0x800cc540u, &a);
        } else {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800cd5b8u, &a);
            if (r3 != 0u) {
                wr8((u32)param_1 + 0x24u, rd8(0x817fdfe8u));
                wr8((u32)param_1 + 0x25u, rd8(0x817fdfe9u));
                wr8((u32)param_1 + 0x26u, rd8(0x817fdfeau));
                wr8((u32)param_1 + 0x27u, rd8(0x817fdfebu));
            }
        }
    } else {
        f0 = (f64)rdf32((u32)param_1 + 0x44u);
        f1 = (f64)rdf32((u32)param_1 + 0x30u);
        if (!(f1 > f0)) {
            f1 = f0;
        }
        wrf32d((u32)param_1 + 0x44u, f1);
    }
    return;
}
