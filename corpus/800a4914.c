#include "tc_rt.h"

void fn_800a4914(s32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r29 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = (u32)param_3;
    r31 = param_2;
    r29 = (u32)param_3;
    if (param_3 < 0) {
        r3 = tc_call(0x800a7460u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r29 = r3;
    }
    r0 = rd32(0x80570710u);
    r3 = 0x80351ae8u;
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            if (rd32(r3) == (u32)param_1) {
                r5 = rd32(r3 + 8u);
                r7 = rd32(r3 + 0x10u);
                r6 = rd32(r3 + 0xcu);
                r8 = rd32(r3 + 0x14u);
                if (((r6 ^ r8) | (r5 ^ r7)) == 0u) break;
                a.r[0] = (u32)((s32)param_2 >> 31);
                a.r[1] = param_2;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                f1 = tc_callf(0x800a5104u, &a);
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r31 = r4;
                break;
            }
            r3 = r3 + 0x18u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    if ((u32)param_1 <= 0x8au) {
        r3 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fcadb40u);
        sw_ = r3;
        switch (sw_) {
        case 0x800a50e8u:
            break;
        case 0x800a49c8u:
            r4 = r31 & 0xffffu;
            if (r4 > 0xffu) {
                r4 = 0xffu;
            }
            wr16((r29 * 0x38u) - 0x7fb65000u, (u16)r4);
            break;
        case 0x800a49f0u:
            if ((s32)r29 <= 0 || (s32)r29 > 13) break;
            r4 = r31 & 0xffffu;
            if (r4 > 0xffu) {
                r4 = 0xffu;
            }
            wr16((r29 * 0x38u) - 0x7fb64ffeu, (u16)r4);
            break;
        case 0x800a4a28u:
            wr8((r29 * 0x38u) - 0x7fb64fcbu, (u8)r31);
            break;
        case 0x800a4a40u:
            wr8((r29 * 0x38u) - 0x7fb64fcau, (u8)r31);
            break;
        case 0x800a4a58u:
            a.r[0] = 0xffu;
            a.r[1] = 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = 0xffu;
            (void)tc_call(0x800a45e4u, &a);
            break;
        case 0x800a4a74u:
            a.r[0] = 0xffu;
            a.r[1] = 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = r31 & 0xffu;
            (void)tc_call(0x800a45e4u, &a);
            break;
        case 0x800a4a90u:
            a.r[0] = 0xffu;
            a.r[1] = 0xffu;
            a.r[2] = r31 & 0xffu;
            a.r[3] = 0xffu;
            (void)tc_call(0x800a45e4u, &a);
            break;
        case 0x800a4aacu:
            a.r[0] = 0xffu;
            a.r[1] = r31 & 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = 0xffu;
            (void)tc_call(0x800a45e4u, &a);
            break;
        case 0x800a4ac8u:
            a.r[0] = r31 & 0xffu;
            a.r[1] = 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = 0xffu;
            (void)tc_call(0x800a45e4u, &a);
            break;
        case 0x800a4ae4u:
            wr8(0x80492b98u, (u8)r31);
            break;
        case 0x800a4af4u:
            if (r31 >= 0x5f5e0ffu) {
                r31 = 0x5f5e0ffu;
            }
            wr32(0x80499090u, r31);
            break;
        case 0x800a4b1cu:
            r0 = r31 & 0xffffu;
            if (r0 >= 0x270fu) {
                r0 = 0x270fu;
            }
            wr16(0x8049908eu, (u16)r0);
            break;
        case 0x800a4b40u:
            wr32(0x80499178u, r31);
            break;
        case 0x800a4b50u:
            wr16(0x80492836u, (u16)r31);
            break;
        case 0x800a4f08u:
            wr8(0x80492b99u, (u8)r31);
            break;
        case 0x800a5020u:
            wr32(0x80571190u, r31);
            break;
        case 0x800a5028u:
            if (r31 == 0u) break;
            wr8(0x8049dfa8u, 1u);
            break;
        case 0x800a5044u:
            if (r31 == 0u) break;
            wr8(0x8049dfa9u, 1u);
            break;
        case 0x800a5060u:
            a.r[0] = 0x8049df80u;
            a.r[1] = r31;
            (void)tc_call(0x800c9490u, &a);
            break;
        case 0x800a5074u:
            r0 = 0x3b9ac9ffu;
            if (r31 <= 0x3b9ac9ffu) {
                r0 = r31;
            }
            wr32(0x80492b80u, r0);
            break;
        case 0x800a509cu:
            r0 = 0x3b9ac9ffu;
            if (r31 <= 0x3b9ac9ffu) {
                r0 = r31;
            }
            wr32(0x80492b84u, r0);
            break;
        case 0x800a50c4u:
            r0 = 0x3b9ac9ffu;
            if (r31 <= 0x3b9ac9ffu) {
                r0 = r31;
            }
            wr32(0x80492b88u, r0);
            break;
        case 0x800a4b60u:
            for (;;) {
                if ((s32)rd8(0x80499098u) >= (s32)r31) {
                    return;
                }
                if ((s32)r31 > 99) break;
                r3 = (u32)rd16((((u32)rd8(0x80499098u) << 2u) & 0xfffffffcu) - 0x7fb5395cu);
                if (r3 == 0u) {
                    return;
                }
                a.r[0] = r3;
                a.r[1] = 1u;
                (void)tc_call(0x800818ccu, &a);
            }
            break;
        case 0x800a4ba8u:
            r0 = r31 & 0xffffu;
            if (r0 >= 0xffffu) {
                r0 = 0xffffu;
            }
            wr16(0x80499080u, (u16)r0);
            break;
        case 0x800a4bd0u:
            r0 = r31 & 0xffu;
            if (r0 >= 0x63u) {
                r0 = 0x63u;
            }
            wr8(0x80499099u, (u8)r0);
            break;
        case 0x800a4bf4u:
            r0 = r31 & 0xffu;
            if (r0 >= 0x63u) {
                r0 = 0x63u;
            }
            wr8(0x8049909au, (u8)r0);
            break;
        case 0x800a4c18u:
            r0 = r31 & 0xffu;
            if (r0 >= 0x63u) {
                r0 = 0x63u;
            }
            wr8(0x8049909bu, (u8)r0);
            break;
        case 0x800a4c3cu:
            r0 = r31 & 0xffu;
            if (r0 >= 0x63u) {
                r0 = 0x63u;
            }
            wr8(0x8049909cu, (u8)r0);
            break;
        case 0x800a4c60u:
            r0 = (r31 * 0x64u) & 0xffffu;
            if (r0 >= 0xffffu) {
                r0 = 0xffffu;
            }
            wr16(0x80499088u, (u16)r0);
            break;
        case 0x800a4c8cu:
            r31 = r31 * 0x64u;
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
            if ((s32)r31 >= (s32)(r4 & 0xffffu)) {
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
                r31 = r4 & 0xffffu;
            }
            r0 = r31 & 0xffffu;
            if (r0 >= 0xffffu) {
                r0 = 0xffffu;
            }
            wr16(0x8049908au, (u16)r0);
            break;
        case 0x800a4d64u:
            r0 = (r31 * 0x64u) & 0xffffu;
            if (r0 >= 0x2710u) {
                r0 = 0x2710u;
            }
            wr16(0x8049908cu, (u16)r0);
            break;
        case 0x800a4e2cu:
            wr8(0x8049912au, (u8)r31);
            break;
        case 0x800a4e3cu:
            wr8(0x80499131u, (u8)r31);
            break;
        case 0x800a4e4cu:
            wr8(0x80499130u, (u8)r31);
            break;
        case 0x800a4e5cu:
            c0lt = (s32)r31 < 1;
            if (r31 == 1u) {
                r31 = 0x1eu;
            } else if (!c0lt) {
                if ((s32)r31 < 3) {
                    r31 = 0x1fu;
                }
            } else if ((s32)r31 >= 0) {
                r31 = 0x21u;
            }
            wr8(0x8049912eu, (u8)r31);
            break;
        case 0x800a4f18u:
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            (void)tc_call(0x800a4858u, &a);
            break;
        case 0x800a4d8cu:
            wr8(0x804990acu, (u8)r31);
            break;
        case 0x800a4d9cu:
            wr8(0x804990adu, (u8)r31);
            break;
        case 0x800a4dacu:
            wr8(0x804990aeu, (u8)r31);
            break;
        case 0x800a4dbcu:
            wr8(0x804990afu, (u8)r31);
            break;
        case 0x800a4dccu:
            wr8(0x804990b0u, (u8)r31);
            break;
        case 0x800a4ddcu:
            wr8(0x804990b1u, (u8)r31);
            break;
        case 0x800a4decu:
            wr8(0x804990b2u, (u8)r31);
            break;
        case 0x800a4dfcu:
            wr8(0x804990b3u, (u8)r31);
            break;
        case 0x800a4e0cu:
            wr8(0x804990b4u, (u8)r31);
            break;
        case 0x800a4e1cu:
            wr8(0x804990b5u, (u8)r31);
            break;
        case 0x800a4fc8u:
            wr8(0x804990a0u, (u8)r31);
            break;
        case 0x800a4fd8u:
            wr8(0x804990a1u, (u8)r31);
            break;
        case 0x800a4fe8u:
            wr8(0x804990a2u, (u8)r31);
            break;
        case 0x800a4ff8u:
            wr8(0x804990a3u, (u8)r31);
            break;
        case 0x800a5008u:
            break;
        case 0x800a500cu:
            break;
        case 0x800a5010u:
            break;
        case 0x800a5014u:
            break;
        case 0x800a5018u:
            break;
        case 0x800a501cu:
            break;
        case 0x800a4ea4u:
            wr8(0x80492830u, (u8)r31);
            break;
        case 0x800a4eb4u:
            wr8(0x80492831u, (u8)r31);
            break;
        case 0x800a4ec4u:
            wr8(0x80492832u, (u8)r31);
            break;
        case 0x800a4ed4u:
            wr8(0x80492833u, (u8)r31);
            break;
        case 0x800a4f28u:
            a.r[0] = 0x88u;
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x800a51f8u, &a);
            r31 = r31 - r3;
            ctr = r31;
            if ((s32)r31 <= 0) break;
            do {
                r4 = rd32(0x80499430u);
                if (r4 != 0u) {
                    if (r4 == 0x1eu) {
                        wr32(0x80499430u, 0x3cu);
                    }
                } else {
                    wr32(0x80499430u, 0x1eu);
                }
                ctr = ctr - 1u;
            } while (ctr != 0u);
            break;
        case 0x800a4f78u:
            a.r[0] = 0x89u;
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x800a51f8u, &a);
            r31 = r31 - r3;
            ctr = r31;
            if ((s32)r31 <= 0) break;
            do {
                r4 = rd32(0x80499524u);
                if (r4 != 0u) {
                    if (r4 == 0x1eu) {
                        wr32(0x80499524u, 0x3cu);
                    }
                } else {
                    wr32(0x80499524u, 0x1eu);
                }
                ctr = ctr - 1u;
            } while (ctr != 0u);
            break;
        case 0x800a4ee4u:
            if (r31 != 0u) {
                r0 = 1u;
            } else {
                r0 = 0u;
            }
            wr8(0x80492834u, (u8)r0);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
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
