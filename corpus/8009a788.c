#include "tc_rt.h"

void fn_8009a788(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfecu;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = param_1;
    f1 = tc_callf(0x8009a654u, &a);
    r4 = tc_lastr4();
    r0 = rd32(0x817fdfe8u);
    if (r0 <= 0xbu) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fcae828u);
        sw_ = r3;
        switch (sw_) {
        case 0x8009a7d0u:
            a.r[0] = 1u;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a7e4u:
            a.r[0] = 2u;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a7f8u:
            a.r[0] = 3u;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a80cu:
            a.r[0] = 4u;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a820u:
            a.r[0] = 5u;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a834u:
            a.r[0] = 6u;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a848u:
            a.r[0] = 7u;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a85cu:
            a.r[0] = 8u;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a870u:
            a.r[0] = 9u;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a884u:
            a.r[0] = 0xau;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a898u:
            a.r[0] = 0xbu;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        case 0x8009a8acu:
            a.r[0] = 0xcu;
            a.r[1] = param_2;
            a.r[2] = rd32(0x817fdfecu);
            (void)tc_call(0x800a4914u, &a);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
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
            return;
        }
    }
    return;
}
