#include "tc_rt.h"

void fn_800f73f0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r26 = 0, r27 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    (void)tc_call(0x801e5980u, &a);
    a.r[0] = 1u;
    (void)tc_call(0x80050c04u, &a);
    a.r[0] = 0x804b9e80u;
    (void)tc_call(0x80121510u, &a);
    r31 = 1u;
    a.f[0] = (f64)rdf32(0x80573be0u);
    a.f[1] = (f64)rdf32(0x80573be4u);
    f1 = tc_callf(0x80059c9cu, &a);
    r4 = tc_lastr4();
    if (param_2 <= 0xbu) {
        r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc9fbe0u);
        sw_ = r3;
        switch (sw_) {
        case 0x800f745cu:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0xcd0u;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x800f99a8u, &a);
            }
            wr32(param_1 + 0x10u, r26);
            break;
        case 0x800f7488u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0x68cu;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                wr32(r3 + 0x40u, 0x8036045cu);
                r3 = r3 + 4u;
                a.r[0] = r3;
                (void)tc_call(0x800f82d0u, &a);
                wr32(r26 + 0x40u, 0x80363470u);
                a.r[0] = r26 + 0x44u;
                (void)tc_call(0x801e6108u, &a);
                a.r[0] = r26 + 0xb8u;
                (void)tc_call(0x801e6108u, &a);
                a.r[0] = r26 + 0x12cu;
                (void)tc_call(0x801e6108u, &a);
                a.r[0] = r26 + 0x1a0u;
                (void)tc_call(0x80129f3cu, &a);
                a.r[0] = r26 + 0x1e8u;
                (void)tc_call(0x80119b14u, &a);
                a.r[0] = r26 + 0x5f0u;
                (void)tc_call(0x800f82d0u, &a);
                a.r[0] = r26 + 0x638u;
                (void)tc_call(0x801f0da4u, &a);
            }
            wr32(param_1 + 0x10u, r26);
            r31 = 0u;
            break;
        case 0x800f7510u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0xf28u;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                wr32(r3 + 0x40u, 0x8036045cu);
                r3 = r3 + 4u;
                a.r[0] = r3;
                (void)tc_call(0x800f82d0u, &a);
                wr32(r26 + 0x40u, 0x803632f0u);
                a.r[0] = r26 + 0x44u;
                (void)tc_call(0x80119b14u, &a);
                a.r[0] = r26 + 0x44cu;
                (void)tc_call(0x8014aea0u, &a);
                a.r[0] = r26 + 0x5c8u;
                (void)tc_call(0x80208f44u, &a);
                a.r[0] = r26 + 0x5e0u;
                (void)tc_call(0x80190c4cu, &a);
                a.r[0] = r26 + 0x7b4u;
                (void)tc_call(0x801884f4u, &a);
                a.r[0] = r26 + 0xb9cu;
                a.r[1] = 0x8020eeecu;
                a.r[2] = 0x8020ef0cu;
                a.r[3] = 0x38u;
                a.r[4] = 3u;
                (void)tc_call(0x80255624u, &a);
                a.r[0] = r26 + 0xc50u;
                a.r[1] = 0x80161490u;
                a.r[2] = 0x800f7ba4u;
                a.r[3] = 0x168u;
                a.r[4] = 2u;
                (void)tc_call(0x80255624u, &a);
            }
            wr32(param_1 + 0x10u, r26);
            break;
        case 0x800f75c4u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0xddcu;
            r3 = tc_call(0x801b39d8u, &a);
            r27 = r3;
            if (r3 != 0u) {
                wr32(r3 + 0x40u, 0x8036045cu);
                r3 = r3 + 4u;
                a.r[0] = r3;
                (void)tc_call(0x800f82d0u, &a);
                wr32(r27 + 0x40u, 0x803630d0u);
                a.r[0] = r27 + 0x44u;
                (void)tc_call(0x80119b14u, &a);
                r26 = r27 + 0x450u;
                a.r[0] = r26 + 0x24u;
                (void)tc_call(0x80163efcu, &a);
                a.r[0] = r26 + 0x30u;
                (void)tc_call(0x800f82d0u, &a);
                a.r[0] = r26 + 0x84u;
                a.r[1] = 0x801e6108u;
                a.r[2] = 0x801e6158u;
                a.r[3] = 0x74u;
                a.r[4] = 2u;
                (void)tc_call(0x80255624u, &a);
                wr32(r26 + 0x18u, 0u);
                wr32(r26 + 0x1cu, 0u);
                wr32(r26 + 0x20u, 0u);
                wr32(r26 + 0x170u, 0u);
                wr32(r26 + 0x16cu, 0u);
                a.r[0] = r27 + 0x5c8u;
                (void)tc_call(0x8014aea0u, &a);
                a.r[0] = r27 + 0x744u;
                (void)tc_call(0x80190c4cu, &a);
                a.r[0] = r27 + 0x914u;
                (void)tc_call(0x80208f44u, &a);
                a.r[0] = r27 + 0x92cu;
                (void)tc_call(0x80123a00u, &a);
                a.r[0] = r27 + 0xd1cu;
                a.r[1] = 0x8020eeecu;
                a.r[2] = 0x8020ef0cu;
                a.r[3] = 0x38u;
                a.r[4] = 3u;
                (void)tc_call(0x80255624u, &a);
            }
            wr32(param_1 + 0x10u, r27);
            break;
        case 0x800f76a0u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0x8f8u;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                wr32(r3 + 0x40u, 0x8036045cu);
                r3 = r3 + 4u;
                a.r[0] = r3;
                (void)tc_call(0x800f82d0u, &a);
                wr32(r26 + 0x40u, 0x803639c8u);
                a.r[0] = r26 + 0x48u;
                (void)tc_call(0x80119b14u, &a);
                a.r[0] = r26 + 0x464u;
                (void)tc_call(0x80221a28u, &a);
                a.r[0] = r26 + 0x47cu;
                (void)tc_call(0x80190c4cu, &a);
                a.r[0] = r26 + 0x64cu;
                (void)tc_call(0x8014aea0u, &a);
                a.r[0] = r26 + 0x7c8u;
                a.r[1] = 0x8020eeecu;
                a.r[2] = 0x8020ef0cu;
                a.r[3] = 0x38u;
                a.r[4] = 5u;
                (void)tc_call(0x80255624u, &a);
            }
            wr32(param_1 + 0x10u, r26);
            break;
        case 0x800f7728u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0xd44u;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                wr32(r3 + 0x40u, 0x8036045cu);
                r3 = r3 + 4u;
                a.r[0] = r3;
                (void)tc_call(0x800f82d0u, &a);
                wr32(r26 + 0x40u, 0x80363798u);
                a.r[0] = r26 + 0x44u;
                (void)tc_call(0x8012fb58u, &a);
                a.r[0] = r26 + 0x900u;
                (void)tc_call(0x80119b14u, &a);
                a.r[0] = r26 + 0xd08u;
                (void)tc_call(0x800f82d0u, &a);
            }
            wr32(param_1 + 0x10u, r26);
            break;
        case 0x800f7788u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0x89cu;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8012b688u, &a);
            }
            wr32(param_1 + 0x10u, r26);
            break;
        case 0x800f77b4u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0x5fcu;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                wr32(r3 + 0x40u, 0x8036045cu);
                r3 = r3 + 4u;
                a.r[0] = r3;
                (void)tc_call(0x800f82d0u, &a);
                wr32(r26 + 0x40u, 0x80363cc8u);
                a.r[0] = r26 + 0x68u;
                a.r[1] = 0x8013aebcu;
                a.r[2] = 0x800f7c1cu;
                a.r[3] = 0x8cu;
                a.r[4] = 2u;
                (void)tc_call(0x80255624u, &a);
                a.r[0] = r26 + 0x198u;
                (void)tc_call(0x80119b14u, &a);
                a.r[0] = r26 + 0x5a4u;
                (void)tc_call(0x80163efcu, &a);
                a.r[0] = r26 + 0x5b0u;
                (void)tc_call(0x800f82d0u, &a);
            }
            wr32(param_1 + 0x10u, r26);
            break;
        case 0x800f7834u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0x7a4u;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x801388f8u, &a);
            }
            wr32(param_1 + 0x10u, r26);
            r31 = 0u;
            break;
        case 0x800f7864u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0x31cu;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8012a504u, &a);
            }
            wr32(param_1 + 0x10u, r26);
            break;
        case 0x800f7890u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0x88u;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x80220f0cu, &a);
            }
            wr32(param_1 + 0x10u, r26);
            r31 = 0u;
            break;
        case 0x800f78c0u:
            a.r[0] = 0u;
            r3 = tc_call(0x801b3a7cu, &a);
            a.r[0] = r3;
            a.r[1] = 0x15d8u;
            r3 = tc_call(0x801b39d8u, &a);
            r26 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x8021d7c4u, &a);
            }
            wr32(param_1 + 0x10u, r26);
            r31 = 0u;
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
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
    a.r[0] = r31;
    (void)tc_call(0x801c0ef8u, &a);
    f7 = (f64)rdf32(0x803d2790u);
    f3 = (f64)rdf32(0x803d27a0u);
    f10 = (f64)rdf32(0x803d2784u);
    f9 = (f64)rdf32(0x803d2788u);
    f8 = (f64)rdf32(0x803d278cu);
    f6 = (f64)rdf32(0x803d2794u);
    f5 = (f64)rdf32(0x803d2798u);
    f4 = (f64)rdf32(0x803d279cu);
    f2 = (f64)rdf32(0x803d27a4u);
    f1 = (f64)rdf32(0x803d27a8u);
    f0 = (f64)rdf32(0x803d27acu);
    wrf32d(0x817fdfd8u, (f64)rdf32(0x803d2780u));
    r3 = rd32(0x80571398u);
    wrf32d(0x817fdfdcu, f10);
    r4 = rd32(0x805710e8u);
    wrf32d(0x817fdfe0u, f9);
    r5 = rd32(0x805710ecu);
    wrf32d(0x817fdfe4u, f8);
    wrf32d(0x817fdfc8u, f7);
    wrf32d(0x817fdfccu, f6);
    wrf32d(0x817fdfd0u, f5);
    wrf32d(0x817fdfd4u, f4);
    wrf32d(0x817fdfb8u, f3);
    wrf32d(0x817fdfbcu, f2);
    wrf32d(0x817fdfc0u, f1);
    wrf32d(0x817fdfc4u, f0);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0x817fdfd8u;
    a.r[4] = 0x817fdfc8u;
    a.r[5] = 0x817fdfb8u;
    (void)tc_call(0x801bfd64u, &a);
    wr32(param_1 + 0xcu, 0u);
    if ((rd32(0x8057118cu) & 2u) != 0u) {
        wr32(param_1 + 0xcu, 1u);
        wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffffffdu);
    }
    a.r[0] = 0x804d9048u;
    (void)tc_call(0x801944a8u, &a);
    f1 = tc_callf(0x801ebb90u, &a);
    r3 = rd32(param_1 + 0x10u);
    a.r[0] = r3;
    a.r[1] = param_3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    f1 = tc_callf(rd32(rd32(r3 + 0x40u) + 0xcu), &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x801e5998u, &a);
    return;
}
