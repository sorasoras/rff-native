#include "tc_rt.h"

s32 fn_8030fb98(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    f1 = tc_callf(0x8022d56cu, &a);
    r3 = rd32((u32)param_1 + 0xfcu);
    a.r[0] = r3;
    a.r[1] = 0x817fdf58u;
    a.r[2] = 0x817fdf64u;
    a.r[3] = 0x817fdf78u;
    a.r[4] = rd32((u32)param_1 + 0x104u);
    a.r[5] = rd32((u32)param_1 + 0x108u);
    a.r[6] = 0u;
    a.r[7] = rd32((u32)param_1 + 0x100u);
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
    r31 = r3;
    if (r3 != 0u) {
        r3 = (u32)rd8(0x817fdf7cu);
        wr8(param_2, (u8)((((0u - r3) | r3) >> 0x1fu) & 1u));
        wr32(param_2 + 4u, rd32(0x817fdf84u));
        wr32(param_2 + 8u, rd32(0x817fdf88u));
        wr32(param_2 + 0xcu, rd32(0x817fdf8cu));
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return (s32)r31;
}
