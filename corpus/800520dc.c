#include "tc_rt.h"

void fn_800520dc(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r6 = rd32(0x805706d0u);
    if (r6 > 6u) {
        return;
    }
    r3 = rd32(((r6 << 2u) & 0xfffffffcu) - 0x7fcb04d8u);
    sw_ = r3;
    switch (sw_) {
    case 0x80052100u:
        r3 = (u32)rd8(0x805710bbu) - (u32)rd8(0x805710b4u);
        r3 = r3 & ~(u32)((s32)r3 >> 31);
        wr8(0x805710bbu, (u8)r3);
        if ((r3 & 0xffu) != 0u) {
            return;
        }
        wr32(0x805706d0u, 7u);
        wr32(0x805710c8u, 1u);
        return;
    case 0x80052170u:
        r4 = (u32)rd8(0x805710b4u);
        r5 = 0xffu;
        r0 = (u32)rd8(0x805710bbu) + r4;
        if ((s32)r0 <= 255) {
            r5 = r0;
        }
        wr8(0x805710bbu, (u8)r5);
        if ((r5 & 0xffu) != 0xffu) {
            return;
        }
        if (rd32(0x805710d8u) == 0u) {
            wr32(0x805706d0u, 7u);
            wr32(0x805710c8u, 1u);
            return;
        }
        wr32(0x805710d8u, 0u);
        if (r6 != 1u) {
            if (r6 != 3u) {
                a.f[0] = (f64)rdf32(0x805710b0u);
                a.r[0] = 5u;
                a.r[1] = r4;
                (void)tc_call(0x800523b0u, &a);
                return;
            }
            a.f[0] = (f64)rdf32(0x805710b0u);
            a.r[0] = 2u;
            a.r[1] = r4;
            (void)tc_call(0x800523b0u, &a);
            return;
        }
        a.f[0] = (f64)rdf32(0x805710b0u);
        a.r[0] = 0u;
        a.r[1] = r4;
        (void)tc_call(0x800523b0u, &a);
        return;
    case 0x80052268u:
        r3 = 0xffu;
        r0 = (u32)rd8(0x805710d4u) + (u32)rd8(0x805710b4u);
        if ((s32)r0 <= 255) {
            r3 = r0;
        }
        wr8(0x805710d4u, (u8)r3);
        if ((r3 & 0xffu) != 0xffu) {
            return;
        }
        wr32(0x805706d0u, 7u);
        wr32(0x805710c8u, 1u);
        return;
    case 0x80052138u:
        r3 = (u32)rd8(0x805710bfu) - (u32)rd8(0x805710b4u);
        r3 = r3 & ~(u32)((s32)r3 >> 31);
        wr8(0x805710bfu, (u8)r3);
        if ((r3 & 0xffu) != 0u) {
            return;
        }
        wr32(0x805706d0u, 7u);
        wr32(0x805710c8u, 1u);
        return;
    case 0x80052200u:
        r4 = (u32)rd8(0x805710b4u);
        r5 = 0xffu;
        r0 = (u32)rd8(0x805710bfu) + r4;
        if ((s32)r0 <= 255) {
            r5 = r0;
        }
        wr8(0x805710bfu, (u8)r5);
        if ((r5 & 0xffu) != 0xffu) {
            return;
        }
        if (rd32(0x805710d8u) == 0u) {
            wr32(0x805706d0u, 7u);
            wr32(0x805710c8u, 1u);
            return;
        }
        f1 = (f64)rdf32(0x805710b0u);
        wr32(0x805710d8u, 0u);
        a.f[0] = f1;
        a.r[0] = 5u;
        a.r[1] = r4;
        (void)tc_call(0x800523b0u, &a);
        return;
    default:
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = r6;
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
