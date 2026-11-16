#include "tc_rt.h"

void fn_80180988(s32 param_1, s32 param_2)
{
    u32 c0gt = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x804863d8u);
    if ((u32)param_2 != 0u) {
        if (rd32((u32)param_1 + 0x100u) == 0u && rd32((u32)param_1 + 0xfcu) != 0x53u) {
            a.r[0] = r31;
            a.r[1] = 0x53u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x805750ccu);
            (void)tc_call(rd32(rd32(r31) + 0x54u), &a);
            wr32((u32)param_1 + 0xfcu, 0x53u);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80182b24u, &a);
        }
        if ((u32)param_2 != 0xffffffffu) {
            wr32((u32)param_1 + 0x100u, 1u);
        }
    }
    if (rd32((u32)param_1 + 0xfcu) == 0x53u) {
        f31 = (f64)rdf32(rd32(r31 + 0x70u) + 0x54u);
        a.r[0] = r31;
        f1 = tc_callf(0x80064f9cu, &a);
        if (!((f31 > f1) || (f31 == f1))) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80182bf0u, &a);
            return;
        }
        r3 = rd32((u32)param_1 + 0x100u) + 1u;
        c0gt = (s32)r3 > (s32)rd32((u32)param_1 + 0x13cu);
        wr32((u32)param_1 + 0x100u, r3);
        if (!c0gt) {
            wrf32d(rd32(r31 + 0x70u) + 0x54u, (f64)rdf32(0x805750b8u));
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80182bf0u, &a);
            return;
        }
        a.r[0] = r31;
        a.r[1] = 0x52u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x805750ccu);
        (void)tc_call(rd32(rd32(r31) + 0x54u), &a);
        wr32((u32)param_1 + 0xfcu, 0x52u);
        wr32((u32)param_1 + 0x100u, 0u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x80182cbcu, &a);
    } else {
        wr32((u32)param_1 + 0x100u, 0u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80182bf0u, &a);
    return;
}
