#include "tc_rt.h"

u32 fn_80183658(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = 0x804d9028u;
    (void)tc_call(0x80183190u, &a);
    a.r[0] = 0x804d9028u;
    a.r[1] = param_1;
    (void)tc_call(0x801832d4u, &a);
    a.r[0] = 0x804d9028u;
    a.r[1] = param_1;
    r3 = tc_call(0x80183608u, &a);
    if (r3 != 0u) {
        a.r[0] = 0x804d9028u;
        a.r[1] = param_1;
        r3 = tc_call(0x801834a8u, &a);
        wr16(0x817fdfeau, (u16)r3);
        r4 = (u32)rd8(0x817fdfeau);
        r0 = (u32)rd8(0x817fdfebu);
        wr16(0x80571330u, (u16)((r3 >> 0x10u) & 0xffffu));
        wr8(0x80571332u, (u8)r4);
        wr8(0x80571333u, (u8)r0);
    } else {
        wr16(0x80571330u, 0x2e8u);
        wr8(0x80571332u, 0u);
        wr8(0x80571333u, 0u);
    }
    a.r[0] = 0x804d9028u;
    (void)tc_call(0x801831a4u, &a);
    return rd32(0x80571330u);
}
