#include "tc_rt.h"

void fn_8012d164(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_2 + 0x3ecu);
    r3 = (u32)param_1 + (rd32((u32)param_1 + 0x810u) * 0x114u) + 0x3cu;
    a.r[0] = r3;
    a.r[1] = (u32)param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0xcu), &a);
    if (r31 == rd32((u32)param_2 + 0x3ecu)) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32((u32)param_1 + 0x28u) + 0x10u), &a);
    }
    if (rd32((u32)param_1 + 0xcu) == 6u) {
        r6 = rd32((u32)param_1 + 0x810u);
        r5 = ppc_mulhw(1431655766, (s32)r6);
        wr32(rd32(0x80571398u) + 0x1a0u, ((r6 - ((r5 + ((r5 >> 0x1fu) & 1u)) * 3u)) * 0xau) + rd32((u32)param_2 + 0x3ecu));
    } else {
        wr32(rd32(0x80571398u) + 0x1a0u, (rd32((u32)param_1 + 0x810u) * 0xau) + rd32((u32)param_2 + 0x3ecu));
    }
    return;
}
