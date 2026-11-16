#include "tc_rt.h"

u32 fn_8018e8b8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801a0d9cu, &a);
    r0 = rd32((u32)param_1 + 0x94u) - 1u;
    wr32((u32)param_1 + 0x94u, r0);
    if (r0 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        (void)tc_call(0x8018f8c0u, &a);
    }
    r0 = rd32((u32)param_1 + 0x90u) - 1u;
    wr32((u32)param_1 + 0x90u, r0);
    if (r0 == 0u) {
        r3 = rd32(0x804b9dfcu);
        f1 = (f64)(f32)((f64)rdf32(0x80575340u) * (f64)rdf32(0x804b9e00u));
        if (r3 != 0u) {
            a.f[0] = f1;
            a.r[0] = r3;
            a.r[1] = 2u;
            (void)tc_call(0x802f7194u, &a);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8018f404u, &a);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8018fe40u, &a);
        r5 = rd32(0x804863d8u);
        wr32(r5 + 0x9cu, rd32(r5 + 0x9cu) & 0xbfffffffu);
        wr32((u32)param_1 + 0x90u, 0xffffffc4u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8018f980u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8018fe9cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801902e8u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8018fd04u, &a);
    return 1u;
}
