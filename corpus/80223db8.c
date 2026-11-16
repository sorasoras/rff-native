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

void fn_80223db8(u32 param_r3)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    r3 = param_r3;
    r0 = (u32)rd8(param_r3 + 0x373u);
    c0lt = (s32)r0 < 1;
    if (r0 != 1u) {
        if (c0lt) {
            return;
        }
        if ((s32)r0 >= 3) {
            return;
        }
        wr8(0x80571434u, 0x58u);
        wr8(0x80571439u, 0x28u);
        wr8(0x80571435u, 0x28u);
        wr8(0x8057143au, 0xcu);
        wr8(0x80571436u, 0xcu);
        wr8(0x8057143bu, 0xc0u);
        wr8(0x80571437u, 0u);
        wr8(0x80571438u, 0x58u);
        wr8(0x8057143eu, 0xffu);
        wr8(0x8057143du, 0xffu);
        wr8(0x8057143cu, 0xffu);
        wr8(param_r3 + 0x4cu, 0x58u);
        wr8(param_r3 + 0x4du, 0x28u);
        wr8(param_r3 + 0x4eu, 0xcu);
        wr8(param_r3 + 0x4fu, 0xc0u);
        wr8(param_r3 + 0x50u, 0x58u);
        wr8(param_r3 + 0x51u, 0x28u);
        wr8(param_r3 + 0x52u, 0xcu);
        wr8(param_r3 + 0x53u, 0xc0u);
        wr8(param_r3 + 0x54u, 0x58u);
        wr8(param_r3 + 0x55u, 0x28u);
        wr8(param_r3 + 0x56u, 0xcu);
        wr8(param_r3 + 0x57u, 0xc0u);
        wr8(param_r3 + 0x58u, 0x58u);
        wr8(param_r3 + 0x59u, 0x28u);
        wr8(param_r3 + 0x5au, 0xcu);
        wr8(param_r3 + 0x5bu, 0xc0u);
        wr8(param_r3 + 0xdcu, 0x58u);
        wr8(param_r3 + 0xddu, 0x28u);
        wr8(param_r3 + 0xdeu, 0xcu);
        wr8(param_r3 + 0xdfu, 0xc0u);
        wr8(param_r3 + 0xe0u, 0x58u);
        wr8(param_r3 + 0xe1u, 0x28u);
        wr8(param_r3 + 0xe2u, 0xcu);
        wr8(param_r3 + 0xe3u, 0u);
        wr8(param_r3 + 0xe4u, 0x58u);
        wr8(param_r3 + 0xe5u, 0x28u);
        wr8(param_r3 + 0xe6u, 0xcu);
        wr8(param_r3 + 0xe7u, 0xc0u);
        wr8(param_r3 + 0xe8u, 0x58u);
        wr8(param_r3 + 0xe9u, 0x28u);
        wr8(param_r3 + 0xeau, 0xcu);
        wr8(param_r3 + 0xebu, 0u);
        wr8(param_r3 + 0x373u, 1u);
    } else {
        r0 = (u32)rd8(0x8057143bu);
        f3 = rdf64(0x80576ac8u);
        f2 = (f64)rdf32(0x80576a90u);
        f0 = (f64)rdf32(0x80576a70u);
        wr8(0x80571438u, 0x58u);
        wr8(0x80571434u, 0x58u);
        f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3) - f2);
        wr8(0x80571439u, 0x28u);
        wr8(0x80571435u, 0x28u);
        wr8(0x8057143au, 0xcu);
        wr8(0x80571436u, 0xcu);
        if ((f1 < f0) || (f1 == f0)) {
            r31 = (u32)rd8(0x80571436u);
            wr8(0x8057143bu, 0u);
            r5 = param_r3;
            wr8(0x80571437u, 0u);
            r6 = (u32)rd8(0x8057143cu);
            wr8(param_r3 + 0x4cu, 0x58u);
            r7 = (u32)rd8(0x8057143du);
            wr8(param_r3 + 0x4du, 0x28u);
            r8 = (u32)rd8(0x8057143eu);
            wr8(param_r3 + 0x4eu, 0xcu);
            wr8(param_r3 + 0x4fu, 0u);
            wr8(param_r3 + 0x50u, 0x58u);
            wr8(param_r3 + 0x51u, 0x28u);
            wr8(param_r3 + 0x52u, 0xcu);
            wr8(param_r3 + 0x53u, 0u);
            wr8(param_r3 + 0x54u, 0x58u);
            wr8(param_r3 + 0x55u, 0x28u);
            wr8(param_r3 + 0x56u, 0xcu);
            wr8(param_r3 + 0x57u, 0u);
            wr8(param_r3 + 0x58u, 0x58u);
            wr8(param_r3 + 0x59u, 0x28u);
            wr8(param_r3 + 0x5au, 0xcu);
            wr8(param_r3 + 0x5bu, 0u);
            wr8(param_r3 + 0xdcu, 0x58u);
            wr8(param_r3 + 0xddu, 0x28u);
            wr8(param_r3 + 0xdeu, 0xcu);
            wr8(param_r3 + 0xdfu, 0u);
            wr8(param_r3 + 0xe0u, 0x58u);
            wr8(param_r3 + 0xe1u, 0x28u);
            wr8(param_r3 + 0xe2u, (u8)r31);
            wr8(param_r3 + 0xe3u, 0u);
            wr8(param_r3 + 0xe4u, 0x58u);
            wr8(param_r3 + 0xe5u, 0x28u);
            wr8(param_r3 + 0xe6u, 0xcu);
            wr8(param_r3 + 0xe7u, 0u);
            wr8(param_r3 + 0xe8u, 0x58u);
            wr8(param_r3 + 0xe9u, 0x28u);
            wr8(param_r3 + 0xeau, (u8)r31);
            wr8(param_r3 + 0xebu, 0u);
            wr8(0x8057143fu, 0u);
            ctr = 2u;
            do {
                wr8(r5 + 0x17cu, (u8)r6);
                wr8(r5 + 0x17du, (u8)r7);
                wr8(r5 + 0x17eu, (u8)r8);
                wr8(r5 + 0x17fu, 0u);
                wr8(r5 + 0x180u, (u8)r6);
                wr8(r5 + 0x181u, (u8)r7);
                wr8(r5 + 0x182u, (u8)r8);
                wr8(r5 + 0x183u, 0u);
                wr8(r5 + 0x184u, (u8)r6);
                wr8(r5 + 0x185u, (u8)r7);
                wr8(r5 + 0x186u, (u8)r8);
                wr8(r5 + 0x187u, 0u);
                wr8(r5 + 0x188u, (u8)r6);
                wr8(r5 + 0x189u, (u8)r7);
                wr8(r5 + 0x18au, (u8)r8);
                wr8(r5 + 0x18bu, 0u);
                wr8(r5 + 0x20cu, (u8)r6);
                wr8(r5 + 0x20du, (u8)r7);
                wr8(r5 + 0x20eu, (u8)r8);
                wr8(r5 + 0x20fu, 0u);
                wr8(r5 + 0x210u, (u8)r6);
                wr8(r5 + 0x211u, (u8)r7);
                wr8(r5 + 0x212u, (u8)r8);
                wr8(r5 + 0x213u, 0u);
                wr8(r5 + 0x214u, (u8)r6);
                wr8(r5 + 0x215u, (u8)r7);
                wr8(r5 + 0x216u, (u8)r8);
                wr8(r5 + 0x217u, 0u);
                wr8(r5 + 0x218u, (u8)r6);
                wr8(r5 + 0x219u, (u8)r7);
                wr8(r5 + 0x21au, (u8)r8);
                wr8(r5 + 0x21bu, 0u);
                r5 = r5 + 0x120u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            wr8(param_r3 + 0x373u, 0u);
            return;
        }
        r12 = (u32)rd8(0x8057143au);
        r31 = (u32)rd8(0x80571436u);
        wr8(0x80571437u, 0u);
        r8 = (u32)rd8(0x8057143cu);
        f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3) - f2);
        f0 = rdf64(0x80576ab8u);
        wr8(param_r3 + 0x4cu, 0x58u);
        r9 = (u32)rd8(0x8057143eu);
        f1 = px_ctiw(f1, ppc_fctiwz(f1));
        wr8(param_r3 + 0x4du, 0x28u);
        wr8(param_r3 + 0x4eu, (u8)r12);
        r6 = (u32)px_f2b(f1);
        wr8(param_r3 + 0x50u, 0x58u);
        wr8(0x8057143bu, (u8)r6);
        r7 = (u32)rd8(0x8057143du);
        wr8(param_r3 + 0x4fu, (u8)r6);
        f0 = f0 * (px_b2f((u64)(r6 & 0xffu) | 0x4330000000000000ull) - f3);
        wr8(param_r3 + 0x51u, 0x28u);
        wr8(param_r3 + 0x52u, (u8)r12);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wr8(param_r3 + 0x53u, (u8)r6);
        wr8(param_r3 + 0x54u, 0x58u);
        r5 = (u32)px_f2b(f0);
        wr8(param_r3 + 0x55u, 0x28u);
        r10 = r5 & 0xffu;
        wr8(param_r3 + 0x56u, (u8)r12);
        wr8(param_r3 + 0x57u, (u8)r6);
        wr8(param_r3 + 0x58u, 0x58u);
        wr8(param_r3 + 0x59u, 0x28u);
        wr8(param_r3 + 0x5au, (u8)r12);
        wr8(param_r3 + 0x5bu, (u8)r6);
        wr8(param_r3 + 0xdcu, 0x58u);
        wr8(param_r3 + 0xddu, 0x28u);
        wr8(param_r3 + 0xdeu, (u8)r12);
        wr8(param_r3 + 0xdfu, (u8)r6);
        wr8(param_r3 + 0xe0u, 0x58u);
        wr8(param_r3 + 0xe1u, 0x28u);
        wr8(param_r3 + 0xe2u, (u8)r31);
        wr8(param_r3 + 0xe3u, 0u);
        wr8(param_r3 + 0xe4u, 0x58u);
        wr8(param_r3 + 0xe5u, 0x28u);
        wr8(param_r3 + 0xe6u, (u8)r12);
        wr8(param_r3 + 0xe7u, (u8)r6);
        wr8(param_r3 + 0xe8u, 0x58u);
        wr8(param_r3 + 0xe9u, 0x28u);
        wr8(param_r3 + 0xeau, (u8)r31);
        wr8(param_r3 + 0xebu, 0u);
        wr8(0x8057143fu, (u8)r5);
        ctr = 2u;
        do {
            wr8(r3 + 0x17cu, (u8)r8);
            wr8(r3 + 0x17du, (u8)r7);
            wr8(r3 + 0x17eu, (u8)r9);
            wr8(r3 + 0x17fu, (u8)r10);
            wr8(r3 + 0x180u, (u8)r8);
            wr8(r3 + 0x181u, (u8)r7);
            wr8(r3 + 0x182u, (u8)r9);
            wr8(r3 + 0x183u, (u8)r10);
            wr8(r3 + 0x184u, (u8)r8);
            wr8(r3 + 0x185u, (u8)r7);
            wr8(r3 + 0x186u, (u8)r9);
            wr8(r3 + 0x187u, (u8)r10);
            wr8(r3 + 0x188u, (u8)r8);
            wr8(r3 + 0x189u, (u8)r7);
            wr8(r3 + 0x18au, (u8)r9);
            wr8(r3 + 0x18bu, (u8)r10);
            wr8(r3 + 0x20cu, (u8)r8);
            wr8(r3 + 0x20du, (u8)r7);
            wr8(r3 + 0x20eu, (u8)r9);
            wr8(r3 + 0x20fu, (u8)r10);
            wr8(r3 + 0x210u, (u8)r8);
            wr8(r3 + 0x211u, (u8)r7);
            wr8(r3 + 0x212u, (u8)r9);
            wr8(r3 + 0x213u, (u8)r10);
            wr8(r3 + 0x214u, (u8)r8);
            wr8(r3 + 0x215u, (u8)r7);
            wr8(r3 + 0x216u, (u8)r9);
            wr8(r3 + 0x217u, (u8)r10);
            wr8(r3 + 0x218u, (u8)r8);
            wr8(r3 + 0x219u, (u8)r7);
            wr8(r3 + 0x21au, (u8)r9);
            wr8(r3 + 0x21bu, (u8)r10);
            r3 = r3 + 0x120u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return;
}
