#include "tc_rt.h"

u32 fn_8018bf38(s32 param_1)
{
    u32 r0 = 0, r6 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = rd32(0x804863d8u);
    (void)tc_call(0x800c4b50u, &a);
    f1 = tc_callf(0x8018cc50u, &a);
    f1 = (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0x58u));
    a.f[0] = f1;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8018ccb0u, &a);
    r30 = rd32(0x804863d8u);
    if ((r30 + 0x54cu) != 0u) {
        wr32((u32)param_1 + 0x64u, rd32(r30 + 0x5c0u));
        wr8((u32)param_1 + 0x68u, rd8(rd32(0x804863d8u) + 0x5c4u));
    }
    a.r[0] = r30;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x800693a8u, &a);
    a.r[0] = r30;
    a.r[1] = 0x23au;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.r[4] = 1u;
    (void)tc_call(0x8006c6c0u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x8018d5ecu, &a);
    r6 = rd32(0x8036fe28u);
    r0 = rd32(0x8036fe2cu);
    wr32(0x817fdfd8u, rd32(0x8036fe24u));
    wr32(0x817fdfdcu, r6);
    wr32(0x817fdfe0u, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0x817fdfd8u;
    (void)tc_call(0x8018ca94u, &a);
    return 1u;
}
