#include "tc_rt.h"

void fn_802fdc00(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (rd32((u32)param_1 + 0x114u) != 0u) {
        wr32(0x817fdfd8u, (u32)param_1 + 0x15cu);
        wr32(0x817fdfdcu, 0x805486c8u);
        a.r[0] = (u32)param_3;
        a.r[1] = 0u;
        r3 = tc_call(0x802ffe00u, &a);
        f1 = tc_lastf();
        wr32(0x817fdfe0u, r3);
        wr8(0x817fdfe4u, rd8((u32)param_3 + 0x58u));
        a.r[0] = param_2;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = rd32((u32)param_1 + 0x118u);
        a.f[0] = f1;
        (void)tc_call(rd32((u32)param_1 + 0x114u), &a);
        wr8((u32)param_3 + 0x58u, rd8(0x817fdfe4u));
    }
    return;
}
