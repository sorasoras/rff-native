#include "tc_rt.h"

void fn_800b1b3c(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
    wr32(0x817fdfe4u, r3);
    a.r[0] = 0x817fdfe4u;
    a.r[1] = param_2;
    r3 = tc_call(0x8014967cu, &a);
    wr32(0x817fdfe0u, r3);
    a.r[0] = 0x817fdfe0u;
    r3 = tc_call(0x80149c8cu, &a);
    f1 = tc_lastf();
    f31 = (f64)rdf32(0x80572bf8u);
    r31 = 0xffffffffu;
    if (r3 <= 6u) {
        r4 = rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fcabd8cu);
        sw_ = r4;
        switch (sw_) {
        case 0x800b1cd8u:
            break;
        case 0x800b1bb4u:
            r31 = 0u;
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
            wr32(0x817fdfdcu, r3);
            a.r[0] = 0x817fdfdcu;
            f1 = tc_callf(0x80149944u, &a);
            f31 = f1;
            break;
        case 0x800b1be0u:
            r3 = tc_call(0x80040b64u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r31 = 3u;
            if ((r3 & 1u) != 0u) {
                r31 = 2u;
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
            wr32(0x817fdfd8u, r3);
            a.r[0] = 0x817fdfd8u;
            f1 = tc_callf(0x80149944u, &a);
            f31 = f1;
            break;
        case 0x800b1c1cu:
            r31 = 1u;
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
            wr32(0x817fdfd4u, r3);
            a.r[0] = 0x817fdfd4u;
            f1 = tc_callf(0x80149944u, &a);
            f31 = f1;
            break;
        case 0x800b1c48u:
            r31 = 0u;
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
            wr32(0x817fdfd0u, r3);
            a.r[0] = 0x817fdfd0u;
            f1 = tc_callf(0x8014995cu, &a);
            f31 = f1;
            break;
        case 0x800b1c74u:
            r3 = tc_call(0x80040b64u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r31 = 3u;
            if ((r3 & 1u) != 0u) {
                r31 = 2u;
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
            wr32(0x817fdfccu, r3);
            a.r[0] = 0x817fdfccu;
            f1 = tc_callf(0x8014995cu, &a);
            f31 = f1;
            break;
        case 0x800b1cb0u:
            r31 = 1u;
            a.r[0] = param_1;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
            wr32(0x817fdfc8u, r3);
            a.r[0] = 0x817fdfc8u;
            f1 = tc_callf(0x8014995cu, &a);
            f31 = f1;
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            a.f[1] = 0.0;
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
    a.r[0] = 0x817fdfe0u;
    r3 = tc_call(0x80149c44u, &a);
    if ((s32)r3 > 0) {
        a.r[0] = param_1;
        a.r[1] = 0x1au;
        (void)tc_call(0x800b1ad8u, &a);
        a.r[0] = 0x817fdfe0u;
        r3 = tc_call(0x80149c44u, &a);
        wr32(param_1 + 0xea8u, r3);
        a.r[0] = param_1;
        a.r[1] = 0x1bu;
        (void)tc_call(0x800b1ad8u, &a);
    }
    if (r31 != 0xffffffffu) {
        a.r[0] = 0x817fdfe0u;
        f1 = tc_callf(0x80149cbcu, &a);
        f31 = (f64)(f32)(f31 * f1);
        a.r[0] = 0x817fdfe0u;
        f1 = tc_callf(0x80149ca4u, &a);
        a.f[0] = f1;
        a.f[1] = f31;
        a.r[0] = param_1;
        a.r[1] = r31;
        (void)tc_call(0x800b2200u, &a);
    }
    a.r[0] = param_1;
    a.r[1] = 0x1au;
    (void)tc_call(0x800b1ad8u, &a);
    return;
}
