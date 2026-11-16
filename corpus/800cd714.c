#include "tc_rt.h"

void fn_800cd714(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r11 = 0, r12 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80573018u);
    r7 = 0x804a1a3cu;
    wrf32d(0x804a1a20u, f0);
    wrf32d(0x804a1a1cu, f0);
    wrf32d(0x804a1a18u, f0);
    wrf32d(0x804a1a2cu, f0);
    wrf32d(0x804a1a28u, f0);
    wrf32d(0x804a1a24u, f0);
    wrf32d(0x804a1a38u, f0);
    wrf32d(0x804a1a34u, f0);
    wrf32d(0x804a1a30u, f0);
    r0 = (u32)((s32)ppc_mulhw(1321528399, 38687) >> 4);
    r11 = r0 + ((r0 >> 0x1fu) & 1u);
    r12 = r11 + 1u;
    if ((s32)r12 > 8) {
        r3 = 0u;
        r8 = r11 & 0x80000000u;
        r4 = 1u;
        if (r8 == 0u && r8 != (r12 & 0x80000000u)) {
            r4 = 0u;
        }
        if (r4 != 0u) {
            r3 = 1u;
        }
        if (r3 != 0u) {
            f0 = (f64)rdf32(0x80573018u);
            ctr = ppc_divwu(0x96ebu, 0x1a0u);
            do {
                wrf32d(r7 + 0x18u, f0);
                wrf32d(r7 + 0x14u, f0);
                wrf32d(r7 + 0x10u, f0);
                wrf32d(r7 + 0x24u, f0);
                wrf32d(r7 + 0x20u, f0);
                wrf32d(r7 + 0x1cu, f0);
                wrf32d(r7 + 0x30u, f0);
                wrf32d(r7 + 0x2cu, f0);
                wrf32d(r7 + 0x28u, f0);
                wrf32d(r7 + 0x4cu, f0);
                wrf32d(r7 + 0x48u, f0);
                wrf32d(r7 + 0x44u, f0);
                wrf32d(r7 + 0x58u, f0);
                wrf32d(r7 + 0x54u, f0);
                wrf32d(r7 + 0x50u, f0);
                wrf32d(r7 + 0x64u, f0);
                wrf32d(r7 + 0x60u, f0);
                wrf32d(r7 + 0x5cu, f0);
                wrf32d(r7 + 0x80u, f0);
                wrf32d(r7 + 0x7cu, f0);
                wrf32d(r7 + 0x78u, f0);
                wrf32d(r7 + 0x8cu, f0);
                wrf32d(r7 + 0x88u, f0);
                wrf32d(r7 + 0x84u, f0);
                wrf32d(r7 + 0x98u, f0);
                wrf32d(r7 + 0x94u, f0);
                wrf32d(r7 + 0x90u, f0);
                wrf32d(r7 + 0xb4u, f0);
                wrf32d(r7 + 0xb0u, f0);
                wrf32d(r7 + 0xacu, f0);
                wrf32d(r7 + 0xc0u, f0);
                wrf32d(r7 + 0xbcu, f0);
                wrf32d(r7 + 0xb8u, f0);
                wrf32d(r7 + 0xccu, f0);
                wrf32d(r7 + 0xc8u, f0);
                wrf32d(r7 + 0xc4u, f0);
                wrf32d(r7 + 0xe8u, f0);
                wrf32d(r7 + 0xe4u, f0);
                wrf32d(r7 + 0xe0u, f0);
                wrf32d(r7 + 0xf4u, f0);
                wrf32d(r7 + 0xf0u, f0);
                wrf32d(r7 + 0xecu, f0);
                wrf32d(r7 + 0x100u, f0);
                wrf32d(r7 + 0xfcu, f0);
                wrf32d(r7 + 0xf8u, f0);
                wrf32d(r7 + 0x11cu, f0);
                wrf32d(r7 + 0x118u, f0);
                wrf32d(r7 + 0x114u, f0);
                wrf32d(r7 + 0x128u, f0);
                wrf32d(r7 + 0x124u, f0);
                wrf32d(r7 + 0x120u, f0);
                wrf32d(r7 + 0x134u, f0);
                wrf32d(r7 + 0x130u, f0);
                wrf32d(r7 + 0x12cu, f0);
                wrf32d(r7 + 0x150u, f0);
                wrf32d(r7 + 0x14cu, f0);
                wrf32d(r7 + 0x148u, f0);
                wrf32d(r7 + 0x15cu, f0);
                wrf32d(r7 + 0x158u, f0);
                wrf32d(r7 + 0x154u, f0);
                wrf32d(r7 + 0x168u, f0);
                wrf32d(r7 + 0x164u, f0);
                wrf32d(r7 + 0x160u, f0);
                wrf32d(r7 + 0x184u, f0);
                wrf32d(r7 + 0x180u, f0);
                wrf32d(r7 + 0x17cu, f0);
                wrf32d(r7 + 0x190u, f0);
                wrf32d(r7 + 0x18cu, f0);
                wrf32d(r7 + 0x188u, f0);
                wrf32d(r7 + 0x19cu, f0);
                wrf32d(r7 + 0x198u, f0);
                wrf32d(r7 + 0x194u, f0);
                r7 = r7 + 0x1a0u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    f0 = (f64)rdf32(0x80573018u);
    ctr = ppc_divwu(0x804ab15bu - r7, 0x34u);
    if (r7 < 0x804ab128u) {
        do {
            wrf32d(r7 + 0x18u, f0);
            wrf32d(r7 + 0x14u, f0);
            wrf32d(r7 + 0x10u, f0);
            wrf32d(r7 + 0x24u, f0);
            wrf32d(r7 + 0x20u, f0);
            wrf32d(r7 + 0x1cu, f0);
            wrf32d(r7 + 0x30u, f0);
            wrf32d(r7 + 0x2cu, f0);
            wrf32d(r7 + 0x28u, f0);
            r7 = r7 + 0x34u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    a.r[0] = 0x8049f1b0u;
    a.r[1] = 0x800cda14u;
    a.r[2] = 0x8049f1a0u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x804ab138u;
    a.r[1] = 0x800cda54u;
    a.r[2] = 0x804ab128u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x804ac6a4u;
    a.r[1] = 0x800cda94u;
    a.r[2] = 0x804ac698u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x804ac83cu;
    a.r[1] = 0x800cdad4u;
    a.r[2] = 0x804ac830u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
