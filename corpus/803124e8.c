#include "tc_rt.h"

void fn_803124e8(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, s32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if ((rd32(param_2 + 8u) & 0x40000000u) != 0u) {
        a.r[0] = rd32(param_1 + 0xbcu);
        a.r[1] = param_2;
        a.r[2] = (u32)rd8(param_3 + 5u);
        a.r[3] = 0u;
        r3 = tc_call(0x80310ac0u, &a);
        r31 = r3;
        if (r3 != 0u) {
            wr16(r3 + 0xe8u, (u16)((u32)rd16(r3 + 0xe8u) + (u32)param_5));
            wr32(r3 + 0xf4u, param_1);
            wr32(param_1 + 0x10u, rd32(param_1 + 0x10u) + 1u);
            wr8(r3 + 0x64u, 0u);
            if ((rd32(param_1 + 0x20u) & 0x80u) != 0u) {
                wr8(r3 + 0x64u, (u8)((u32)rd8(r3 + 0x64u) | 1u));
            }
            if ((rd32(param_1 + 0x20u) & 0x100u) != 0u) {
                wr8(r3 + 0x64u, (u8)((u32)rd8(r3 + 0x64u) | 2u));
            }
            wr8(r3 + 0x65u, rd8(rd32(param_1 + 0xb8u) + 0x23u));
            if ((rd32(param_1 + 0x20u) & 0x800u) != 0u) {
                wr8(r3 + 0x64u, (u8)((u32)rd8(r3 + 0x64u) | 4u));
            }
            r4 = rd32(r3 + 0x94u);
            r0 = rd32(r3 + 0x98u);
            f0 = (f64)rdf32(0x8057787cu);
            wr32(0x817fdf78u, rd32(r3 + 0x90u));
            wrf32d(r3 + 0x90u, f0);
            wrf32d(r3 + 0x94u, f0);
            wrf32d(r3 + 0x98u, f0);
            r3 = r3;
            wr32(0x817fdf7cu, r4);
            wr32(0x817fdf80u, r0);
            a.r[0] = r3;
            (void)tc_call(0x80313cecu, &a);
            a.r[0] = 0x817fdfb8u;
            (void)tc_call(0x80233740u, &a);
            a.f[0] = (f64)rdf32(r31 + 0xa8u);
            a.f[1] = (f64)rdf32(r31 + 0xacu);
            a.f[2] = (f64)rdf32(r31 + 0xb0u);
            a.r[0] = 0x817fdfb8u;
            (void)tc_call(0x80320c10u, &a);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 0x817fdfb8u;
            a.r[2] = r31 + 0x9cu;
            (void)tc_call(0x80320d7cu, &a);
            a.r[0] = r31;
            a.r[1] = 0x817fdf88u;
            (void)tc_call(0x80313b9cu, &a);
            a.r[0] = 0x817fdf88u;
            a.r[1] = 0x817fdf88u;
            (void)tc_call(0x8023386cu, &a);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 0x817fdf88u;
            a.r[2] = 0x817fdfb8u;
            (void)tc_call(0x802337a0u, &a);
            if ((u32)param_4 != 0u) {
                a.r[0] = rd32((u32)param_4 + 0xc8u);
                a.r[1] = 0x817fdf88u;
                (void)tc_call(0x8031efa8u, &a);
                a.r[0] = 0x817fdfb8u;
                a.r[1] = 0x817fdf88u;
                a.r[2] = 0x817fdfb8u;
                (void)tc_call(0x802337a0u, &a);
            }
            if ((u32)param_6 != 0u) {
                a.r[0] = 0x817fdfb8u;
                a.r[1] = 0x817fdfb8u;
                a.r[2] = (u32)param_6;
                (void)tc_call(0x802f0118u, &a);
            } else if ((u32)param_4 != 0u) {
                a.r[0] = 0x817fdfb8u;
                a.r[1] = 0x817fdfb8u;
                a.r[2] = (u32)param_4 + 0xacu;
                (void)tc_call(0x802f0118u, &a);
            }
            a.f[0] = (f64)rdf32(r31 + 0xa8u);
            a.f[1] = (f64)rdf32(r31 + 0xacu);
            a.f[2] = (f64)rdf32(r31 + 0xb0u);
            a.r[0] = 0x817fdf88u;
            (void)tc_call(0x80320c10u, &a);
            a.r[0] = 0x817fdf88u;
            a.r[1] = 0x817fdf88u;
            a.r[2] = r31 + 0x9cu;
            (void)tc_call(0x80320d7cu, &a);
            a.r[0] = 0x817fdf88u;
            a.r[1] = 0x817fdf88u;
            (void)tc_call(0x8023386cu, &a);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 0x817fdf88u;
            a.r[2] = 0x817fdfb8u;
            (void)tc_call(0x802337a0u, &a);
            f2 = (f64)rdf32(0x817fdf7cu);
            f1 = (f64)rdf32(0x817fdf80u);
            wrf32d(r31 + 0x90u, (f64)(f32)((f64)rdf32(0x817fdf78u) + (f64)rdf32(0x817fdfc4u)));
            wrf32d(r31 + 0x94u, (f64)(f32)(f2 + (f64)rdf32(0x817fdfd4u)));
            wrf32d(r31 + 0x98u, (f64)(f32)(f1 + (f64)rdf32(0x817fdfe4u)));
            a.r[0] = r31;
            (void)tc_call(0x80313cecu, &a);
            if ((u32)(s16)rd16(param_3) != 0u || (u32)rd8(param_3 + 2u) != 0u || (u32)rd8(param_3 + 3u) != 0u || (u32)rd8(param_3 + 4u) != 0u || ((u32)rd8(param_3 + 7u) & 2u) != 0u) {
                wr32(r31 + 0xf8u, (u32)param_4);
                wr32((u32)param_4 + 0x10u, rd32((u32)param_4 + 0x10u) + 1u);
                wr16(r31 + 0xfcu, rd16(param_3));
                wr8(r31 + 0xfeu, rd8(param_3 + 2u));
                wr8(r31 + 0xffu, rd8(param_3 + 3u));
                wr8(r31 + 0x100u, rd8(param_3 + 4u));
                wr8(r31 + 0x101u, rd8(param_3 + 5u));
                wr8(r31 + 0x102u, rd8(param_3 + 6u));
                wr8(r31 + 0x103u, rd8(param_3 + 7u));
                wr8(r31 + 0x104u, rd8(param_3 + 8u));
                wr8(r31 + 0x105u, rd8(param_3 + 9u));
            }
        }
    }
    return;
}
