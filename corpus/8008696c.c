#include "tc_rt.h"

u32 fn_8008696c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    r7 = 1u;
    if (param_2 <= 0x30u) {
        r6 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fcaed98u);
        sw_ = r6;
        switch (sw_) {
        case 0x8008699cu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x800dd4e4u, &a);
            r7 = r3;
            break;
        case 0x800869acu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x80185f98u, &a);
            r7 = r3;
            break;
        case 0x800869bcu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x801459f0u, &a);
            r7 = r3;
            break;
        case 0x800869dcu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x800de6b4u, &a);
            r7 = r3;
            break;
        case 0x80086a88u:
            break;
        case 0x80086a2cu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x8017b11cu, &a);
            r7 = r3;
            break;
        case 0x80086a1cu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x8017b010u, &a);
            r7 = r3;
            break;
        case 0x80086a3cu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x80196e74u, &a);
            r7 = r3;
            break;
        case 0x800869ccu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x800dd8fcu, &a);
            r7 = r3;
            break;
        case 0x800869ecu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x800dea1cu, &a);
            r7 = r3;
            break;
        case 0x80086a4cu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x801771b4u, &a);
            r7 = r3;
            break;
        case 0x800869fcu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x800dedbcu, &a);
            r7 = r3;
            break;
        case 0x80086a5cu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x801eb93cu, &a);
            r7 = r3;
            break;
        case 0x80086a6cu:
            r3 = tc_call(0x801a9044u, &a);
            r7 = r3;
            break;
        case 0x80086a0cu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x8013e350u, &a);
            r7 = r3;
            break;
        case 0x80086a7cu:
            a.r[0] = param_1;
            a.r[1] = param_3;
            r3 = tc_call(0x802077a4u, &a);
            r7 = r3;
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = 1u;
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
            return r3;
        }
    }
    return r7;
}
