#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80162578(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xa8u) != 0u && rd32((u32)param_1 + 0x58u) != 0u) {
        r4 = rd32((u32)param_1 + 0x54u);
        if (r4 != 0u) {
            r4 = rd32(r4);
            wrf32d(rd32((u32)param_1 + 0x5cu) + 0x40u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)rd8(r4 + 0xb9u) | 0x4330000000000000ull) - rdf64(0x80574b08u)), (f64)rdf32(0x80574b00u)));
        }
        a.r[0] = rd32((u32)param_1 + 0xa8u);
        a.r[1] = rd32((u32)param_1 + 0x5cu);
        (void)tc_call(0x8007b03cu, &a);
    }
    return;
}
