#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

u32 fn_800a51f8(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = (u32)param_2;
    wr32(0x817fdff8u, 0u);
    if (param_2 < 0) {
        r3 = tc_call(0x800a7460u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r31 = r3;
    }
    if (param_1 > 0x8au) {
        r3 = 0u;
    } else {
        r3 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fcad914u);
        sw_ = r3;
        switch (sw_) {
        case 0x800a5ef8u:
            r3 = 0u;
            return r3;
        case 0x800a5244u:
            r3 = (u32)rd16((r31 * 0x38u) - 0x7fb65000u);
            return r3;
        case 0x800a525cu:
            r3 = (u32)rd16((r31 * 0x38u) - 0x7fb64ffeu);
            return r3;
        case 0x800a5274u:
            a.r[0] = r31;
            r3 = tc_call(0x800a6954u, &a);
            return r3;
        case 0x800a5280u:
            a.r[0] = r31;
            r3 = tc_call(0x800a69a4u, &a);
            return r3;
        case 0x800a528cu:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x60u);
            a.r[0] = r3;
            a.r[1] = r31;
            r3 = tc_call(0x80215188u, &a);
            return r3;
        case 0x800a52a0u:
            r3 = tc_call(0x800a4040u, &a);
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = 0x817fdfd9u;
            a.r[3] = 0u;
            (void)tc_call(0x801191c4u, &a);
            r3 = (u32)(s8)rd8(0x817fdfd9u);
            return r3;
        case 0x800a52c0u:
            r3 = tc_call(0x800a4040u, &a);
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = 0u;
            a.r[3] = 0x817fdfd8u;
            (void)tc_call(0x801191c4u, &a);
            r3 = (u32)(s8)rd8(0x817fdfd8u);
            return r3;
        case 0x800a52e0u:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x60u);
            a.r[0] = r3;
            a.r[1] = r31;
            r3 = tc_call(0x80215140u, &a);
            if (r3 == 0u) {
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x60u);
                if (rd32(r3 + 0x58u) != 0u) {
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3 + 0x60u);
                    a.r[0] = r3;
                    a.r[1] = r31;
                    r3 = tc_call(0x8021353cu, &a);
                    if (r3 != 0u) {
                        r3 = tc_call(0x80097da4u, &a);
                        r3 = rd32(r3 + 0x60u);
                        a.r[0] = r3;
                        a.r[1] = r31;
                        r3 = tc_call(0x802151d0u, &a);
                        if ((s32)r3 >= 0) {
                            return r3;
                        }
                        r3 = 0xf4u;
                        return r3;
                    }
                    r3 = 0xf4u;
                    return r3;
                }
                r3 = 0xf4u;
                return r3;
            }
            r3 = 0xe7u;
            return r3;
        case 0x800a535cu:
            a.r[0] = r31;
            f1 = tc_callf(0x800a4630u, &a);
            wrf64(0x817fdff0u, px_ctiw(f1, ppc_fctiwz(f1)));
            r3 = rd32(0x817fdff4u);
            return r3;
        case 0x800a5374u:
            r3 = ((u32)rd8((r31 * 0x38u) - 0x7fb64fc9u) >> 1u) & 1u;
            return r3;
        case 0x800a5390u:
            r3 = ((u32)rd8((r31 * 0x38u) - 0x7fb64fc9u) >> 2u) & 1u;
            return r3;
        case 0x800a53acu:
            r3 = ((u32)rd8((r31 * 0x38u) - 0x7fb64fc9u) >> 3u) & 1u;
            return r3;
        case 0x800a53c8u:
            r3 = (u32)rd8(0x80492820u);
            return r3;
        case 0x800a53d8u:
            r3 = tc_call(0x800a5160u, &a);
            return r3;
        case 0x800a53e0u:
            r3 = tc_call(0x800a5188u, &a);
            return r3;
        case 0x800a53e8u:
            r3 = tc_call(0x800a51d0u, &a);
            return r3;
        case 0x800a53f0u:
            r3 = (u32)rd8(0x80492824u);
            return r3;
        case 0x800a5400u:
            r3 = (u32)rd8(0x80492825u);
            return r3;
        case 0x800a5410u:
            r3 = tc_call(0x800a77f8u, &a);
            return r3;
        case 0x800a5418u:
            r3 = (u32)rd8(0x80492b98u);
            return r3;
        case 0x800a5428u:
            r3 = rd32(0x80499090u);
            return r3;
        case 0x800a5438u:
            r3 = (u32)rd16(0x8049908eu);
            return r3;
        case 0x800a5448u:
            r3 = rd32(0x80499178u);
            return r3;
        case 0x800a5458u:
            r3 = (u32)rd16(0x80492836u);
            return r3;
        case 0x800a57ccu:
            r3 = (u32)rd8(0x80492b9au);
            return r3;
        case 0x800a5894u:
            r3 = (u32)rd8(0x80492b99u);
            return r3;
        case 0x800a5864u:
            r3 = tc_call(0x8013f72cu, &a);
            r3 = r3 & 0xffu;
            return r3;
        case 0x800a5870u:
            r3 = tc_call(0x8013f7b8u, &a);
            r3 = r3 & 0xffu;
            return r3;
        case 0x800a587cu:
            r3 = tc_call(0x8013f844u, &a);
            r3 = r3 & 0xffu;
            return r3;
        case 0x800a5888u:
            r3 = tc_call(0x8013f8d0u, &a);
            r3 = r3 & 0xffu;
            return r3;
        case 0x800a5920u:
            a.r[0] = 0xffffffffu;
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x800a74e4u, &a);
            if ((s32)r3 >= 0) {
                r3 = r3 + 0xau;
                return r3;
            }
            return r3;
        case 0x800a5940u:
            a.r[0] = 0xffffffffu;
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x800a7528u, &a);
            if ((s32)r3 >= 0) {
                if (r3 == 0x1fu) {
                    r3 = 0x1fu;
                }
                r3 = r3 + 0x3e8u;
                return r3;
            }
            return r3;
        case 0x800a596cu:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 0x817fdfe4u;
            (void)tc_call(0x800ac41cu, &a);
            a.r[0] = rd32(0x817fdfe8u);
            a.r[1] = rd32(0x817fdfe4u);
            r3 = tc_call(0x800a74e4u, &a);
            if ((s32)r3 >= 0) {
                r3 = r3 + 0xau;
                return r3;
            }
            return r3;
        case 0x800a59a0u:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            a.r[0] = r3;
            a.r[1] = 0x817fdfe0u;
            a.r[2] = 0x817fdfdcu;
            (void)tc_call(0x800ac41cu, &a);
            a.r[0] = rd32(0x817fdfe0u);
            a.r[1] = rd32(0x817fdfdcu);
            r3 = tc_call(0x800a7528u, &a);
            if ((s32)r3 >= 0) {
                r3 = r3 + 0x3e8u;
                return r3;
            }
            return r3;
        case 0x800a59d4u:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x20u);
            r3 = rd32(r3 + 0xcu);
            return r3;
        case 0x800a59f4u:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x20u);
            r3 = rd32(r3 + 0x14u);
            return r3;
        case 0x800a59e4u:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x20u);
            r3 = rd32(r3 + 0x10u);
            return r3;
        case 0x800a5a04u:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            r3 = rd32(r3 + 4u);
            return r3;
        case 0x800a5d04u:
            r3 = rd32(0x80571190u);
            return r3;
        case 0x800a5d0cu:
            r3 = (ppc_cntlzw((u32)rd8(0x8049dfa8u) - 1u) >> 5u) & 0x7ffffffu;
            r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
            return r3;
        case 0x800a5d34u:
            r3 = (ppc_cntlzw((u32)rd8(0x8049dfa9u) - 1u) >> 5u) & 0x7ffffffu;
            return r3;
        case 0x800a5d50u:
            a.r[0] = 0x8049df80u;
            r3 = tc_call(0x800c9458u, &a);
            return r3;
        case 0x800a5d60u:
            r3 = rd32(0x80492b80u);
            return r3;
        case 0x800a5d70u:
            r3 = rd32(0x80492b84u);
            return r3;
        case 0x800a5d80u:
            r3 = rd32(0x80492b88u);
            return r3;
        case 0x800a5d90u:
            r3 = (u32)rd16(0x80492b92u);
            return r3;
        case 0x800a5da0u:
            r3 = rd32(0x80571144u);
            if ((s32)r3 < 70) {
                if ((r3 + 0x10000u) != 0xffffu) {
                    return r3;
                }
                r3 = 0xffffffffu;
                return r3;
            }
            r3 = 0xffffffffu;
            return r3;
        case 0x800a5dd0u:
            if ((rd32(0x80571144u) + 0x10000u) != 0xffffu) {
                r3 = 0u;
                return r3;
            }
            r3 = 1u;
            return r3;
        case 0x800a5e8cu:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            r3 = rd32(r3 + 0x40u);
            return r3;
        case 0x800a5e7cu:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            r3 = rd32(r3 + 0x48u);
            return r3;
        case 0x800a5e6cu:
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x4cu);
            r3 = rd32(r3 + 0x44u);
            return r3;
        case 0x800a5a14u:
            r3 = rd32(0x80571184u);
            return r3;
        case 0x800a5ec4u:
            if (rd32(0x805706e0u) == 4u) {
                if (rd32(rd32(0x8057110cu) + 0xcu) != 0xdu) {
                    r3 = 0u;
                    return r3;
                }
                r3 = 1u;
                return r3;
            }
            r3 = 0u;
            return r3;
        case 0x800a5e9cu:
            a.r[0] = 0x36u;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 0u) {
                r3 = rd32(0x8049b738u);
                return r3;
            }
            r3 = 0x21u;
            return r3;
        case 0x800a5468u:
            r3 = (u32)rd8(0x80499098u);
            return r3;
        case 0x800a5478u:
            r3 = (u32)rd16(0x80499080u);
            return r3;
        case 0x800a5488u:
            r3 = (u32)rd8(0x80499099u);
            return r3;
        case 0x800a5498u:
            r3 = (u32)rd8(0x8049909au);
            return r3;
        case 0x800a54a8u:
            r3 = (u32)rd8(0x8049909bu);
            return r3;
        case 0x800a54b8u:
            r3 = (u32)rd8(0x8049909cu);
            return r3;
        case 0x800a54c8u:
            r0 = (u32)rd8(0x80499099u) + rd32(0x8049e140u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 999) {
                r0 = 0x3e7u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffffu;
            return r3;
        case 0x800a5510u:
            r0 = (u32)rd8(0x8049909au) + rd32(0x8049e144u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 999) {
                r0 = 0x3e7u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffffu;
            return r3;
        case 0x800a555cu:
            r0 = (u32)rd8(0x8049909bu) + rd32(0x8049e148u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 999) {
                r0 = 0x3e7u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffffu;
            return r3;
        case 0x800a55a8u:
            r4 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
            if ((s32)r4 <= 0) {
                r4 = 0u;
            }
            if ((s32)r4 >= 65535) {
                r4 = 0xffffu;
            }
            if ((s32)r4 <= 0) {
                r4 = 0x64u;
            }
            r4 = r4 & 0xffffu;
            r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)r4) >> 5);
            r3 = r0 + ((r0 >> 0x1fu) & 1u);
            return r3;
        case 0x800a5614u:
            r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)rd16(0x8049908au)) >> 5);
            r3 = r0 + ((r0 >> 0x1fu) & 1u);
            return r3;
        case 0x800a563cu:
            r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)rd16(0x8049908cu)) >> 5);
            r3 = r0 + ((r0 >> 0x1fu) & 1u);
            return r3;
        case 0x800a57dcu:
            a.r[0] = 0x8049c500u;
            r3 = tc_call(0x800c845cu, &a);
            return r3;
        case 0x800a5704u:
            r3 = (u32)rd8(0x8049912au);
            return r3;
        case 0x800a5714u:
            r3 = (u32)rd8(0x80499131u);
            return r3;
        case 0x800a5724u:
            r3 = (u32)rd8(0x80499130u);
            return r3;
        case 0x800a5734u:
            r0 = (u32)rd8(0x8049912eu);
            if (r0 != 0x1eu) {
                if (r0 != 0x1fu) {
                    r3 = 0u;
                    return r3;
                }
                r3 = 2u;
                return r3;
            }
            r3 = 1u;
            return r3;
        case 0x800a57ecu:
            r3 = rd32(0x80499094u) & 1u;
            return r3;
        case 0x800a5800u:
            r3 = (rd32(0x80499094u) >> 1u) & 1u;
            return r3;
        case 0x800a5814u:
            r3 = (rd32(0x80499094u) >> 2u) & 1u;
            return r3;
        case 0x800a5828u:
            r3 = (rd32(0x80499094u) >> 3u) & 1u;
            return r3;
        case 0x800a583cu:
            r3 = (rd32(0x80499094u) >> 4u) & 1u;
            return r3;
        case 0x800a5850u:
            r3 = (rd32(0x80499094u) >> 6u) & 1u;
            return r3;
        case 0x800a5664u:
            r3 = (u32)rd8(0x804990acu);
            return r3;
        case 0x800a5674u:
            r3 = (u32)rd8(0x804990adu);
            return r3;
        case 0x800a5684u:
            r3 = (u32)rd8(0x804990aeu);
            return r3;
        case 0x800a5694u:
            r3 = (u32)rd8(0x804990afu);
            return r3;
        case 0x800a56a4u:
            r3 = (u32)rd8(0x804990b0u);
            return r3;
        case 0x800a56b4u:
            r3 = (u32)rd8(0x804990b1u);
            return r3;
        case 0x800a56c4u:
            r3 = (u32)rd8(0x804990b2u);
            return r3;
        case 0x800a56d4u:
            r3 = (u32)rd8(0x804990b3u);
            return r3;
        case 0x800a56e4u:
            r3 = (u32)rd8(0x804990b4u);
            return r3;
        case 0x800a56f4u:
            r3 = (u32)rd8(0x804990b5u);
            return r3;
        case 0x800a5df4u:
            a.r[0] = 0x66u;
            r3 = tc_call(0x800a4710u, &a);
            return r3;
        case 0x800a5e00u:
            a.r[0] = 0x67u;
            r3 = tc_call(0x800a4710u, &a);
            return r3;
        case 0x800a5e0cu:
            a.r[0] = 0x68u;
            r3 = tc_call(0x800a4710u, &a);
            return r3;
        case 0x800a5e18u:
            a.r[0] = 0x69u;
            r3 = tc_call(0x800a4710u, &a);
            return r3;
        case 0x800a5e24u:
            a.r[0] = 0x6au;
            r3 = tc_call(0x800a4710u, &a);
            return r3;
        case 0x800a5e30u:
            a.r[0] = 0x6bu;
            r3 = tc_call(0x800a4710u, &a);
            return r3;
        case 0x800a5e3cu:
            a.r[0] = 0x6cu;
            r3 = tc_call(0x800a4710u, &a);
            return r3;
        case 0x800a5e48u:
            a.r[0] = 0x6du;
            r3 = tc_call(0x800a4710u, &a);
            return r3;
        case 0x800a5e54u:
            a.r[0] = 0x6eu;
            r3 = tc_call(0x800a4710u, &a);
            return r3;
        case 0x800a5e60u:
            a.r[0] = 0x6fu;
            r3 = tc_call(0x800a4710u, &a);
            return r3;
        case 0x800a5a1cu:
            r3 = (u32)rd8(0x804990a0u);
            return r3;
        case 0x800a5a2cu:
            r3 = (u32)rd8(0x804990a1u);
            return r3;
        case 0x800a5a3cu:
            r3 = (u32)rd8(0x804990a2u);
            return r3;
        case 0x800a5a4cu:
            r3 = (u32)rd8(0x804990a3u);
            return r3;
        case 0x800a5a5cu:
            r0 = (u32)rd8(0x804990a0u) + rd32(0x8049e150u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffu;
            return r3;
        case 0x800a5aa8u:
            r0 = (u32)rd8(0x804990a1u) + rd32(0x8049e154u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffu;
            return r3;
        case 0x800a5af4u:
            r0 = (u32)rd8(0x804990a2u) + rd32(0x8049e158u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffu;
            return r3;
        case 0x800a5b40u:
            r0 = (u32)rd8(0x804990a3u) + rd32(0x8049e15cu);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffu;
            return r3;
        case 0x800a5b8cu:
            r0 = (u32)rd8(0x804990a0u) + rd32(0x8049e160u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffu;
            return r3;
        case 0x800a5bd8u:
            r0 = (u32)rd8(0x804990a1u) + rd32(0x8049e164u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffu;
            return r3;
        case 0x800a5c24u:
            r0 = (u32)rd8(0x804990a2u) + rd32(0x8049e168u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffu;
            return r3;
        case 0x800a5c70u:
            r0 = (u32)rd8(0x804990a3u) + rd32(0x8049e16cu);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 99) {
                r0 = 0x63u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r3 = r0 & 0xffu;
            return r3;
        case 0x800a5cbcu:
            a.r[0] = 0u;
            r3 = tc_call(0x8013c7fcu, &a);
            return r3;
        case 0x800a5cc8u:
            a.r[0] = 1u;
            r3 = tc_call(0x8013c7fcu, &a);
            return r3;
        case 0x800a5cd4u:
            a.r[0] = 2u;
            r3 = tc_call(0x8013c7fcu, &a);
            return r3;
        case 0x800a5ce0u:
            a.r[0] = 3u;
            r3 = tc_call(0x8013c7fcu, &a);
            return r3;
        case 0x800a5cecu:
            a.r[0] = 4u;
            r3 = tc_call(0x8013c7fcu, &a);
            return r3;
        case 0x800a5cf8u:
            a.r[0] = 5u;
            r3 = tc_call(0x8013c7fcu, &a);
            return r3;
        case 0x800a5768u:
            r3 = (u32)rd8(0x80492830u);
            return r3;
        case 0x800a5778u:
            r3 = (u32)rd8(0x80492831u);
            return r3;
        case 0x800a5788u:
            r3 = (u32)rd8(0x80492832u);
            return r3;
        case 0x800a5798u:
            r3 = (u32)rd8(0x80492833u);
            return r3;
        case 0x800a58a4u:
            r0 = rd32(0x80499430u);
            if (r0 != 0x1eu) {
                if (r0 != 0x3cu) break;
                r3 = 1u;
                return r3;
            }
            r3 = 0u;
            return r3;
        case 0x800a58d0u:
            break;
        case 0x800a57a8u:
            if ((u32)rd8(0x80492834u) != 0u) {
                r3 = 1u;
                return r3;
            }
            r3 = 0u;
            return r3;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
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
            return r3;
        }
        r0 = rd32(0x80499524u);
        c0lt = (s32)r0 < 30;
        if (r0 == 0x1eu) {
            r3 = 1u;
        } else {
            if (!c0lt) {
                if (r0 == 0x3cu) {
                    r3 = 2u;
                    return r3;
                }
            } else if (r0 == 0u) {
                r3 = 0u;
                return r3;
            }
            r3 = 0u;
        }
    }
    return r3;
}
