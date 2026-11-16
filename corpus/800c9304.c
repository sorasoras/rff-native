#include "tc_rt.h"

u32 fn_800c9304(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = (u32)param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x18u), &a);
    r4 = rd32((u32)param_2 + 4u) | ((((u32)param_3 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_3 & 0x1fu)));
    wr8((u32)param_2 + 0x134u, (u8)param_3);
    wr32((u32)param_2 + 4u, r4);
    r30 = r3;
    r31 = (u32)param_2 + ((u32)param_3 * 0x54u);
    wr8(r31 + 0xcu, rd8(0x80499098u));
    a.r[0] = r31 + 0x10u;
    a.r[1] = 0x804990ccu;
    (void)tc_call(0x8025e7c0u, &a);
    a.r[0] = r31 + 0x2au;
    a.r[1] = 0x804990e6u;
    (void)tc_call(0x8025e7c0u, &a);
    wr8(r31 + 0x54u, rd8(0x80492820u));
    wr8(r31 + 0x55u, rd8(0x80492821u));
    wr8(r31 + 0x56u, rd8(0x80492822u));
    wr8(r31 + 0x57u, rd8(0x80492823u));
    wr8(r31 + 0x58u, rd8(0x80492824u));
    wr8(r31 + 0x59u, rd8(0x80492825u));
    wr8(r31 + 0x5au, (u8)((u32)rd8(0x80492823u) + ((u32)rd8(0x80492822u) * 6u) + 1u));
    r5 = (u32)rd8(0x8049282cu) + ((u32)rd8(0x80493020u) * 0x64u);
    if ((r31 + 0x5du) != 0u) {
        wr8(r31 + 0x5du, rd8(0x8049282du));
    }
    if ((r31 + 0x5eu) != 0u) {
        wr8(r31 + 0x5eu, rd8(0x8049282eu));
    }
    wr8(r31 + 0x5cu, (u8)(r5 - (((ppc_mulhwu(0x51eb851fu, r5) >> 5u) & 0x7ffffffu) * 0x64u)));
    wr8(r31 + 0x5fu, (u8)((ppc_mulhwu(0x51eb851fu, r5) >> 5u) & 0xffu));
    return r30;
}
