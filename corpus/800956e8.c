#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800956e8(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x805706e8u) == (u32)rd8((u32)param_1 + 4u)) {
        r4 = rd32((u32)param_1 + 0xd4u) & 0xbfffffffu;
        wr32((u32)param_1 + 0xd4u, r4);
        if ((u32)((s32)r4 >> 31) != 0u) {
            f1 = (f64)rdf32((u32)param_1 + 0x104u);
            f0 = (f64)rdf32(0x80572a38u);
            if (!((f1 < f0) || (f1 == f0))) {
                wrf32d((u32)param_1 + 0x104u, (f64)(f32)(f1 - (f64)rdf32(0x80572a3cu)));
            } else {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                (void)tc_call(0x80096620u, &a);
            }
            r3 = (u32)rd16((u32)param_1 + 0x100u);
            if ((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80572a48u)) > (f64)rdf32(0x80572a40u)) {
                wr16((u32)param_1 + 0x100u, (u16)(r3 - 1u));
            }
            r0 = rd32((u32)param_1 + 0xd0u);
            c0lt = (s32)r0 < 2;
            if (r0 == 2u) {
                if (rd32((u32)param_1 + 0xf8u) == 0u) {
                    wr32((u32)param_1 + 0xd0u, 0u);
                }
            } else if (c0lt) {
                c0lt = (s32)r0 < 0;
                if (r0 == 0u) {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x8009580cu, &a);
                    if (r3 != 0u) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x800958f0u, &a);
                    }
                } else if (!c0lt) {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x80095854u, &a);
                    if (r3 == 0u) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x800958f0u, &a);
                    } else {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x800958dcu, &a);
                    }
                }
            }
        }
    }
    return;
}
