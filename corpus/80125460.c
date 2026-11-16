#include "tc_rt.h"

void fn_80125460(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r11 = rd32(0x80339d7cu);
    r10 = rd32(0x80339d80u);
    r0 = (rd32(param_1 + 0x40u) << 2u) & 0xfffffffcu;
    r9 = rd32(0x80339d84u);
    r8 = rd32(0x80339d88u);
    r7 = rd32(0x80339d8cu);
    r6 = rd32(0x80339d90u);
    r5 = rd32(0x80339d94u);
    r3 = rd32(0x80339d98u);
    wr32(0x817fdfb8u, rd32(0x80339d78u));
    wr32(0x817fdfbcu, r11);
    wr32(0x817fdfc0u, r10);
    wr32(0x817fdfc4u, r9);
    wr32(0x817fdfc8u, r8);
    wr32(0x817fdfccu, r7);
    wr32(0x817fdfd0u, r6);
    wr32(0x817fdfd4u, r5);
    wr32(0x817fdfd8u, r3);
    a.r[0] = rd32(r0 - 0x7e802048u);
    r3 = tc_call(0x800f92e8u, &a);
    f1 = tc_lastf();
    wr32(param_1 + 0x3cu, r3);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x800fef2cu, &a);
    a.r[0] = param_1 + 0x320u;
    a.r[1] = rd32(param_1 + 0x3cu);
    a.r[2] = (u32)ppc_divw((s32)rd32(param_1 + 0xcu), (s32)rd32(param_1 + 4u)) - rd32(param_1 + 8u) + 1u;
    f1 = tc_callf(0x801906f8u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x80571250u;
    a.r[1] = rd32(param_1 + 0x3cu);
    a.r[2] = 0x80339e01u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x801032a4u, &a);
    a.r[0] = param_1 + 0x3e8u;
    a.r[1] = 0xcu;
    a.r[2] = r3;
    (void)tc_call(0x801e6264u, &a);
    r4 = rd32(param_1 + 0x3cu);
    wr32(param_1 + 0x458u, 0u);
    a.r[0] = param_1 + 0x314u;
    a.r[1] = r4;
    a.r[2] = 0x80571250u;
    (void)tc_call(0x80163f48u, &a);
    a.r[0] = param_1 + 0x44u;
    (void)tc_call(0x801614ccu, &a);
    a.r[0] = param_1 + 0x44u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = param_1 + 0x1acu;
    (void)tc_call(0x801614ccu, &a);
    a.r[0] = param_1 + 0x1acu;
    (void)tc_call(0x8007ae84u, &a);
    r6 = rd32(0x80339da4u);
    r5 = rd32(0x80339da8u);
    r0 = rd32(0x80339dacu);
    wr32(0x817fdfa8u, rd32(0x80339da0u));
    wr32(0x817fdfacu, r6);
    wr32(0x817fdfb0u, r5);
    wr32(0x817fdfb4u, r0);
    a.r[0] = param_1 + 0x1acu;
    a.r[1] = 0x817fdfa8u;
    f1 = tc_callf(0x80161708u, &a);
    r4 = tc_lastr4();
    r0 = rd32(param_1 + 0x40u);
    if (r0 <= 8u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fc9ce30u);
        sw_ = r3;
        switch (sw_) {
        case 0x801255b8u:
            r29 = rd32(param_1 + 0xcu);
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (r29 * 0xd0u) + 0x10u;
            r3 = tc_call(0x801b39d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x80125928u;
                a.r[2] = 0x80125b2cu;
                a.r[3] = 0xd0u;
                a.r[4] = r29;
                r3 = tc_call(0x80255464u, &a);
                f1 = tc_lastf();
            }
            r29 = r3;
            break;
        case 0x8012560cu:
            r28 = rd32(param_1 + 0xcu);
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (r28 * 0xd0u) + 0x10u;
            r3 = tc_call(0x801b39d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x801259c4u;
                a.r[2] = 0x80125b90u;
                a.r[3] = 0xd0u;
                a.r[4] = r28;
                r3 = tc_call(0x80255464u, &a);
                f1 = tc_lastf();
            }
            r29 = r3;
            break;
        case 0x80125660u:
            r28 = rd32(param_1 + 0xcu);
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (r28 * 0xd0u) + 0x10u;
            r3 = tc_call(0x801b39d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x80125a00u;
                a.r[2] = 0x80125bf4u;
                a.r[3] = 0xd0u;
                a.r[4] = r28;
                r3 = tc_call(0x80255464u, &a);
                f1 = tc_lastf();
            }
            r29 = r3;
            break;
        case 0x801256b4u:
            r28 = rd32(param_1 + 0xcu);
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (r28 * 0xd0u) + 0x10u;
            r3 = tc_call(0x801b39d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x80125a3cu;
                a.r[2] = 0x80125c58u;
                a.r[3] = 0xd0u;
                a.r[4] = r28;
                r3 = tc_call(0x80255464u, &a);
                f1 = tc_lastf();
            }
            r29 = r3;
            break;
        case 0x80125708u:
            r28 = rd32(param_1 + 0xcu);
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (r28 * 0xd0u) + 0x10u;
            r3 = tc_call(0x801b39d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x80125a78u;
                a.r[2] = 0x80125cbcu;
                a.r[3] = 0xd0u;
                a.r[4] = r28;
                r3 = tc_call(0x80255464u, &a);
                f1 = tc_lastf();
            }
            r29 = r3;
            break;
        case 0x8012575cu:
            r28 = rd32(param_1 + 0xcu);
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (r28 * 0xd0u) + 0x10u;
            r3 = tc_call(0x801b39d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x80125a00u;
                a.r[2] = 0x80125bf4u;
                a.r[3] = 0xd0u;
                a.r[4] = r28;
                r3 = tc_call(0x80255464u, &a);
                f1 = tc_lastf();
            }
            r29 = r3;
            break;
        case 0x801257b0u:
            r28 = rd32(param_1 + 0xcu);
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (r28 * 0xd0u) + 0x10u;
            r3 = tc_call(0x801b39d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x80125ab4u;
                a.r[2] = 0x80125d20u;
                a.r[3] = 0xd0u;
                a.r[4] = r28;
                r3 = tc_call(0x80255464u, &a);
                f1 = tc_lastf();
            }
            r29 = r3;
            break;
        case 0x80125804u:
            r28 = rd32(param_1 + 0xcu);
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = (r28 * 0xd0u) + 0x10u;
            r3 = tc_call(0x801b39d8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0x80125af0u;
                a.r[2] = 0x80125d84u;
                a.r[3] = 0xd0u;
                a.r[4] = r28;
                r3 = tc_call(0x80255464u, &a);
                f1 = tc_lastf();
            }
            r29 = r3;
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
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
    wr32(param_1 + 0x34u, r29);
    r30 = param_1 + 0x44u;
    r27 = 0u;
    r28 = 0u;
    while ((s32)r27 < (s32)rd32(param_1 + 0xcu)) {
        a.r[0] = r29;
        a.r[1] = r27;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r29 + 0xccu) + 0x14u), &a);
        wr32(rd32(param_1 + 0x2cu) + r28, r29);
        a.r[0] = rd32(rd32(param_1 + 0x2cu) + r28);
        (void)tc_call(0x80161c98u, &a);
        a.r[0] = rd32(rd32(param_1 + 0x2cu) + r28);
        f1 = tc_callf(0x80161a60u, &a);
        r29 = r29 + 0xd0u;
        r27 = r27 + 1u;
        r3 = rd32(rd32(param_1 + 0x2cu) + r28);
        r28 = r28 + 4u;
        wr32(r3 + 0xa8u, r30);
    }
    r29 = 0u;
    r28 = 0u;
    while ((s32)r29 < (s32)rd32(param_1)) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80571250u;
        a.r[1] = rd32(param_1 + 0x3cu);
        a.r[2] = r29;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801033bcu, &a);
        r27 = r3;
        a.r[0] = param_1;
        a.r[1] = r29;
        a.r[2] = r3;
        f1 = tc_callf(0x801894c8u, &a);
        r29 = r29 + 1u;
        r3 = rd32(rd32(param_1 + 0x2cu) + r28);
        r28 = r28 + 4u;
        wr32(r3 + 0x54u, r27);
    }
    return;
}
