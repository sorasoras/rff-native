#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8014a5c0(f64 param_f1, u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r26 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f30 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x805712e8u) + (rd32(param_r3) * 0x304u) + 4u;
    if (r31 != 0u) {
        f30 = rdf64(0x805746c8u);
        r27 = r31;
        r26 = 0u;
        do {
            r0 = rd32(r27 + 0x74u);
            if (r0 != 0xffffffffu) {
                r0 = r0 ^ 0x80000000u;
                f0 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f30);
                if (((param_f1 > f0) || (param_f1 == f0)) && (rd32(param_r4 + 0x70u) & (((r26 & 0x20u) != 0u) ? 0u : (1u << (r26 & 0x1fu)))) == 0u) {
                    a.r[0] = param_r4;
                    a.r[1] = r26;
                    a.r[2] = 1u;
                    (void)tc_call(0x8014c328u, &a);
                }
            }
            r0 = rd32(r27 + 0x78u);
            if (r0 != 0xffffffffu) {
                r0 = r0 ^ 0x80000000u;
                f0 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f30);
                if (((param_f1 > f0) || (param_f1 == f0)) && (rd32(param_r4 + 0x74u) & (((r26 & 0x20u) != 0u) ? 0u : (1u << (r26 & 0x1fu)))) == 0u) {
                    a.r[0] = param_r4;
                    a.r[1] = r26;
                    a.r[2] = 0u;
                    (void)tc_call(0x8014c328u, &a);
                }
            }
            r26 = r26 + 1u;
            r27 = r27 + 8u;
        } while ((s32)r26 < 3);
        f0 = (f64)(f32)(px_b2f((u64)(rd32(r31 + 0x90u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805746c8u));
        if ((param_f1 > f0) || (param_f1 == f0)) {
            r26 = 1u;
            r27 = 0u;
            do {
                if ((rd32(r31 + 0x8cu) & r26) != 0u && (rd32(param_r4 + 0x78u) & (((r27 & 0x20u) != 0u) ? 0u : (1u << (r27 & 0x1fu)))) == 0u) {
                    a.r[0] = param_r4;
                    a.r[1] = r27;
                    r3 = tc_call(0x8014bd7cu, &a);
                    if (r3 != 0u) {
                        a.r[0] = param_r4;
                        a.r[1] = r27;
                        r3 = tc_call(0x8014bda4u, &a);
                        if (r3 == 0u) {
                            a.r[0] = param_r3;
                            r3 = tc_call(0x8014a298u, &a);
                            a.r[0] = param_r4;
                            a.r[1] = r27;
                            a.r[2] = r3;
                            a.r[3] = rd32(r31 + 0x28u);
                            (void)tc_call(0x8014cb14u, &a);
                        }
                    }
                }
                r27 = r27 + 1u;
                r26 = (r26 << 1u) & 0xfffffffeu;
            } while ((s32)r27 < 16);
        }
        r3 = rd32(r31 + 0x94u);
        if (r3 != 0u) {
            f0 = (f64)(f32)(px_b2f((u64)((rd32(r31 + 0x90u) + r3) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805746c8u));
            if ((param_f1 > f0) || (param_f1 == f0)) {
                r26 = 1u;
                r27 = 0u;
                do {
                    if ((rd32(r31 + 0x8cu) & r26) != 0u && (rd32(param_r4 + 0x7cu) & (((r27 & 0x20u) != 0u) ? 0u : (1u << (r27 & 0x1fu)))) == 0u) {
                        a.r[0] = param_r4;
                        a.r[1] = r27;
                        r3 = tc_call(0x8014bd7cu, &a);
                        if (r3 != 0u) {
                            a.r[0] = param_r4;
                            a.r[1] = r27;
                            r3 = tc_call(0x8014bda4u, &a);
                            if (r3 != 0u) {
                                a.r[0] = param_r4;
                                a.r[1] = r27;
                                a.r[2] = 0u;
                                (void)tc_call(0x8014ccfcu, &a);
                            }
                        }
                    }
                    r27 = r27 + 1u;
                    r26 = (r26 << 1u) & 0xfffffffeu;
                } while ((s32)r27 < 16);
            }
        }
        f30 = rdf64(0x805746c8u);
        r27 = r31;
        r26 = 0u;
        do {
            r5 = rd32(r27 + 0x98u);
            if (r5 != 0xffffffffu) {
                f0 = (f64)(f32)(px_b2f((u64)(rd32(r27 + 0x9cu) ^ 0x80000000u) | 0x4330000000000000ull) - f30);
                if (((param_f1 > f0) || (param_f1 == f0)) && (rd32(param_r4 + 0x68u) & (((r26 & 0x20u) != 0u) ? 0u : (1u << (r26 & 0x1fu)))) == 0u) {
                    a.r[0] = param_r4;
                    a.r[1] = r26;
                    a.r[2] = r5;
                    (void)tc_call(0x8014c390u, &a);
                }
            }
            r26 = r26 + 1u;
            r27 = r27 + 8u;
        } while ((s32)r26 < 10);
        f30 = rdf64(0x805746c8u);
        r28 = r31;
        r27 = r31 + 0xe8u;
        r26 = 0u;
        do {
            if (rd32(r28 + 0xe8u) != 0xffffffffu) {
                f0 = (f64)(f32)(px_b2f((u64)(rd32(r28 + 0xecu) ^ 0x80000000u) | 0x4330000000000000ull) - f30);
                if (((param_f1 > f0) || (param_f1 == f0)) && (rd32(param_r4 + 0x64u) & (((r26 & 0x20u) != 0u) ? 0u : (1u << (r26 & 0x1fu)))) == 0u) {
                    a.f[0] = (f64)rdf32(r27 + 0x20u);
                    a.f[1] = (f64)rdf32(r27 + 0x24u);
                    a.f[2] = (f64)rdf32(r27 + 0x28u);
                    a.f[3] = (f64)rdf32(r27 + 8u);
                    a.r[0] = param_r4;
                    a.r[1] = r26;
                    a.r[2] = rd32(r27);
                    a.r[3] = rd32(r27 + 0xcu);
                    a.r[4] = r27 + 0x10u;
                    (void)tc_call(0x8014c3e8u, &a);
                }
            }
            r26 = r26 + 1u;
            r27 = r27 + 0x2cu;
            r28 = r28 + 0x2cu;
        } while ((s32)r26 < 5);
        f30 = rdf64(0x805746c8u);
        r28 = r31 + 0x1c4u;
        r26 = 0u;
        do {
            do {
                if (rd32(r31 + 0x1c4u) != 0xffffffffu) {
                    r0 = rd32(r31 + 0x1c8u);
                    if (r0 == 0xffffffffu) {
                        if ((rd32(param_r4 + 0x80u) & (((r26 & 0x20u) != 0u) ? 0u : (1u << (r26 & 0x1fu)))) == 0u) break;
                    } else {
                        r0 = r0 ^ 0x80000000u;
                        f0 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f30);
                        if ((!(param_f1 > f0) && param_f1 != f0) && (rd32(param_r4 + 0x80u) & (((r26 & 0x20u) != 0u) ? 0u : (1u << (r26 & 0x1fu)))) == 0u) break;
                    }
                    if ((rd32(param_r4 + 0x6cu) & (((r26 & 0x20u) != 0u) ? 0u : (1u << (r26 & 0x1fu)))) == 0u) {
                        a.f[0] = (f64)rdf32(r28 + 0x1cu);
                        a.f[1] = (f64)rdf32(r28 + 0x20u);
                        a.f[2] = (f64)rdf32(r28 + 0x24u);
                        a.r[0] = param_r4;
                        a.r[1] = r26;
                        a.r[2] = rd32(r28);
                        a.r[3] = rd32(r28 + 8u);
                        a.r[4] = r28 + 0xcu;
                        (void)tc_call(0x8014c54cu, &a);
                    }
                }
            } while (0);
            r26 = r26 + 1u;
            r28 = r28 + 0x28u;
            r31 = r31 + 0x28u;
        } while ((s32)r26 < 8);
    }
    return;
}
