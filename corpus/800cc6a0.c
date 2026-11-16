#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800cc6a0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    wrf32d((u32)param_1 + 0x30u, (f64)(f32)(px_b2f((u64)rd32(param_2) | 0x4330000000000000ull) - rdf64(0x80572f98u)));
    r6 = (u32)rd8(param_2 + 5u);
    r5 = (u32)rd8(param_2 + 6u);
    r0 = (u32)rd8(param_2 + 7u);
    wr8((u32)param_1 + 0x24u, rd8(param_2 + 4u));
    wr8((u32)param_1 + 0x25u, (u8)r6);
    wr8((u32)param_1 + 0x26u, (u8)r5);
    wr8((u32)param_1 + 0x27u, (u8)r0);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2 + 8u;
    (void)tc_call(0x800cc540u, &a);
    return;
}
