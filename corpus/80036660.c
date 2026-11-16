#include "tc_rt.h"

void fn_80036660(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x80570fc4u, 0u);
    r3 = tc_call(0x80037910u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r0 = r3 + 1u;
    if (r0 <= 0xcu) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fcb0a14u);
        sw_ = r3;
        switch (sw_) {
        case 0x8003669cu:
            wr32(0x80570fc4u, 1u);
            break;
        case 0x800366c8u:
            break;
        case 0x800366a8u:
            wr32(0x80570fc4u, 4u);
            break;
        case 0x800366b4u:
            wr32(0x80570fc4u, 3u);
            break;
        case 0x800366c0u:
            wr32(0x80570fc4u, 2u);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
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
    r0 = rd32(0x80570fc4u);
    if (r0 != 0u) {
        wr32(0x80570fc8u, r0);
    }
    return;
}
