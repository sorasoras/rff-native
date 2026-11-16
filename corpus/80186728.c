#include "tc_rt.h"

void fn_80186728(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xab4u);
    if (r0 > 0xau) {
        return;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    r4 = rd32(r0 - 0x7fc90a50u);
    sw_ = r4;
    switch (sw_) {
    case 0x8018674cu:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80187f60u, &a);
        return;
    case 0x80186758u:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80187bc0u, &a);
        return;
    case 0x80186754u:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80187d38u, &a);
        return;
    case 0x80186750u:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801880ecu, &a);
        return;
    case 0x8018675cu:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80187a34u, &a);
        return;
    case 0x80186760u:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801877a4u, &a);
        return;
    case 0x80186764u:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801876c8u, &a);
        return;
    case 0x80186768u:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80187530u, &a);
        return;
    case 0x8018676cu:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8018732cu, &a);
        return;
    case 0x80186770u:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801870ecu, &a);
        return;
    case 0x80186774u:
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80186f40u, &a);
        return;
    default:
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.f[0] = 0.0;
        r3 = tc_call(sw_, &a);
        r0 = 0u;
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        r11 = 0u;
        r12 = 0u;
        f0 = 0.0;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
        f9 = 0.0;
        f10 = 0.0;
        f11 = 0.0;
        f12 = 0.0;
        f13 = 0.0;
        ctr = 0u;
        return;
    }
}
