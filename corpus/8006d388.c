#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8006d388(s32 param_1)
{
    u32 r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0xa08u);
    if ((s32)r6 < 33) {
        r5 = rd32((u32)param_1 + 0x70u);
        r4 = rd32((r6 * 0x58u) - 0x7fb971bcu);
        if (r4 != 0xffffffffu) {
            f0 = (f64)rdf32(r5 + 0x54u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            if (r4 == (u32)px_f2b(f0)) {
                if ((r6 - 0x1fu) <= 1u) {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x80186cf8u, &a);
                } else {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x8019ca20u, &a);
                }
            }
        }
    }
    return;
}
