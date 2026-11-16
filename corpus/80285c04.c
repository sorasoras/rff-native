#include "tc_rt.h"

void fn_80285c04(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r0 = (u32)rd8(0x8050f10du);
    wr8(0x8050f10cu, 0u);
    if (r0 <= 8u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fc6e6f4u);
        sw_ = r3;
        switch (sw_) {
        case 0x80285d44u:
            break;
        case 0x80285c54u:
            a.r[0] = 0u;
            a.r[1] = 0u;
            (void)tc_call(0x8028feccu, &a);
            wr8(0x8050f10du, 2u);
            break;
        case 0x80285c6cu:
            r3 = tc_call(0x80285ab8u, &a);
            wr8(0x8050f10du, (u8)r3);
            break;
        case 0x80285c78u:
            r3 = tc_call(0x80285b50u, &a);
            wr8(0x8050f10du, (u8)r3);
            break;
        case 0x80285c84u:
            r3 = tc_call(0x80273734u, &a);
            if (r3 == 1u) break;
            a.r[0] = 0x8050f850u;
            a.r[1] = 0u;
            a.r[2] = 0x461u;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = 0x80510e60u;
            a.r[1] = 0u;
            a.r[2] = 0x205u;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = 0x8050f850u;
            r3 = tc_call(0x80275290u, &a);
            r31 = r3;
            a.r[0] = 0x80510e60u;
            r3 = tc_call(0x802752a8u, &a);
            if ((r31 | r3) == 0u) {
                wr8(0x8050f10du, 8u);
                break;
            }
            wr8(0x8050f10du, 6u);
            a.r[0] = 0x80284c8cu;
            (void)tc_call(0x80274aa4u, &a);
            break;
        case 0x80285cf0u:
            r3 = tc_call(0x8022c2b0u, &a);
            r30 = (u32)rd8(0x8050f7eau);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            r3 = tc_call(0x8022c2b0u, &a);
            wr8(0x8050f7ebu, 0u);
            wr8(0x8050f7eau, (u8)r30);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            a.r[0] = 0u;
            a.r[1] = r30;
            (void)tc_call(0x8028feccu, &a);
            a.r[0] = 0x8050f810u;
            f1 = tc_callf(0x80226a70u, &a);
            r4 = tc_lastr4();
            r12 = rd32(0x8050f108u);
            wr8(0x8050f10du, 0u);
            if (r12 != 0u) {
                a.r[0] = 1u;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
            wr8(0x8050f10du, 0u);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = 0u;
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
    return;
}
