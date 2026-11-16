#include "tc_rt.h"

s32 fn_8004aed8(u32 param_1, u32 param_2, u32 param_3, u32 param_r6)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r31 = (u32)rd8(0x803c6244u);
    wr8(0x803c6244u, (u8)(r31 + 1u));
    a.r[0] = r31;
    a.r[1] = param_1;
    a.r[2] = param_2;
    a.r[3] = param_r6;
    f1 = tc_callf(0x80253860u, &a);
    r4 = tc_lastr4();
    if (param_3 <= 0xau) {
        r3 = rd32(((param_3 << 2u) & 0xfffffffcu) - 0x7fcb0704u);
        sw_ = r3;
        switch (sw_) {
        case 0x8004af78u:
            a.r[0] = r31;
            (void)tc_call(0x80049accu, &a);
            break;
        case 0x8004af84u:
            a.r[0] = r31;
            (void)tc_call(0x80049b90u, &a);
            break;
        case 0x8004af38u:
            a.r[0] = r31;
            a.r[1] = 1u;
            (void)tc_call(0x80253360u, &a);
            break;
        case 0x8004af48u:
            a.r[0] = r31;
            a.r[1] = 2u;
            (void)tc_call(0x80253360u, &a);
            break;
        case 0x8004af58u:
            a.r[0] = r31;
            a.r[1] = 3u;
            (void)tc_call(0x80253360u, &a);
            break;
        case 0x8004af68u:
            a.r[0] = r31;
            a.r[1] = 4u;
            (void)tc_call(0x80253360u, &a);
            break;
        case 0x8004af90u:
            a.r[0] = r31;
            (void)tc_call(0x80049c54u, &a);
            break;
        case 0x8004af9cu:
            a.r[0] = r31;
            (void)tc_call(0x80049d18u, &a);
            break;
        case 0x8004afa8u:
            a.r[0] = r31;
            (void)tc_call(0x80049ddcu, &a);
            break;
        case 0x8004afb4u:
            a.r[0] = r31;
            (void)tc_call(0x80049e68u, &a);
            break;
        case 0x8004afc0u:
            a.r[0] = r31;
            (void)tc_call(0x80049ef4u, &a);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
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
            return (s32)r3;
        }
    }
    return (s32)r31;
}
