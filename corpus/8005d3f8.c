#include "tc_rt.h"

void fn_8005d3f8(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr8(0x80488d68u, 0u);
    r3 = tc_call(0x800545e4u, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x14u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r31 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x14u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x14u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r31 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x800f7384u, &a);
    }
    wr32(0x80571178u, (u32)param_2);
    f1 = (f64)rdf32(0x80572434u);
    wr32(0x8057117cu, param_3);
    wr32((u32)param_1 + 8u, r31);
    a.f[0] = f1;
    a.r[0] = 4u;
    a.r[1] = 0x24u;
    (void)tc_call(0x800523b0u, &a);
    wr32((u32)param_1 + 0xcu, 2u);
    wr32(0x80571180u, 8u);
    a.r[0] = 0x80486da8u;
    (void)tc_call(0x800b8708u, &a);
    a.r[0] = 0x803d0320u;
    (void)tc_call(0x80146d58u, &a);
    wr32((u32)param_1 + 0x24u, 1u);
    if ((u32)param_2 == 4u) {
        wr32((u32)param_1 + 0x10u, 0x10u);
    }
    r3 = rd32(0x804863d8u);
    wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x40000000u);
    return;
}
