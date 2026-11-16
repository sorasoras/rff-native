#include "tc_rt.h"

void fn_8007d874(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r27 = 0, r30 = 0, r31 = 0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x8007dabcu, &a);
    r5 = (u32)rd8(0x80499099u) + rd32(0x8049e140u);
    if ((s32)r5 <= 0) {
        r5 = 0u;
    }
    if ((s32)r5 >= 999) {
        r5 = 0x3e7u;
    }
    if ((s32)r5 < 0) {
        r5 = 0u;
    }
    wr32(param_1 + 0x19cu, 0u);
    r27 = r5 & 0xffffu;
    r4 = (u32)rd8(0x8049e1a1u);
    r26 = 0x1au;
    if ((r4 & 1u) != 0u) {
        r26 = 0x10001au;
    }
    if ((r4 & 2u) != 0u) {
        r26 = r26 | 0x200000u;
    }
    if ((r4 & 4u) != 0u) {
        r26 = r26 | 0x400000u;
    }
    if ((r4 & 8u) != 0u) {
        r26 = r26 | 0x800000u;
    }
    f31 = rdf64(0x80572858u);
    a.r[0] = param_2;
    a.r[1] = 0u;
    a.r[2] = param_1 + 0x190u;
    a.r[3] = 0x817fdfc8u;
    r3 = tc_call(0x800bef64u, &a);
    if (r3 != 0u) {
        wr32(0x817fdfd0u, 0x43300000u);
        r6 = rd32(0x804863d8u);
        wr32(0x817fdfd4u, r27 ^ 0x80000000u);
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)(f32)(rdf64(0x817fdfd0u) - f31);
        a.r[0] = param_1 + 0xacu;
        a.r[1] = 0u;
        a.r[2] = param_3;
        a.r[3] = r6;
        a.r[4] = 6u;
        a.r[5] = r26;
        (void)tc_call(0x8006e674u, &a);
        wr32(param_1 + 0x19cu, rd32(param_1 + 0x19cu) + 1u);
    }
    r26 = 0u;
    r30 = 0u;
    r31 = 0u;
    while (r26 < rd32(param_1 + 0x19cu)) {
        a.r[0] = param_1 + r30 + 0xacu;
        a.r[1] = rd32(param_1 + 0x70u);
        a.r[2] = 0u;
        a.r[3] = param_1 + r31 + 0x190u;
        (void)tc_call(0x80070108u, &a);
        r26 = r26 + 1u;
        r30 = r30 + 0xe4u;
        r31 = r31 + 0xcu;
    }
    return;
}
