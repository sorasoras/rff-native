#include "tc_rt.h"

u32 fn_8018e6bc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r8 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x94u) == 0xfu) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x8018f8c0u, &a);
    }
    r0 = rd32((u32)param_1 + 0x94u) - 1u;
    wr32((u32)param_1 + 0x94u, r0);
    if (r0 == 0u) {
        r0 = rd32(0x8036ff84u);
        wr32((u32)param_1 + 0x38u, rd32(0x8036ff80u));
        wr32((u32)param_1 + 0x3cu, r0);
        wr32((u32)param_1 + 0x40u, rd32(0x8036ff88u));
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x113bu;
        (void)tc_call(0x8010a74cu, &a);
        r3 = rd32(0x804b9dfcu);
        f1 = (f64)(f32)((f64)rdf32(0x80575330u) * (f64)rdf32(0x804b9e00u));
        if (r3 != 0u) {
            a.f[0] = f1;
            a.r[0] = r3;
            a.r[1] = 2u;
            (void)tc_call(0x802f7194u, &a);
        }
        wr32((u32)param_1 + 0x94u, 0x3cu);
        r8 = rd32(0x804863d8u);
        wr32(r8 + 0x9cu, rd32(r8 + 0x9cu) & 0xbfffffffu);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = 5u;
        a.r[3] = 1u;
        a.r[4] = 0u;
        (void)tc_call(0x8018fb18u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8018fd04u, &a);
    return 1u;
}
