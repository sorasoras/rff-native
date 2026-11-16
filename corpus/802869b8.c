#include "tc_rt.h"

u32 fn_802869b8(void)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if (rd32(0x80571b28u) != 0u) {
        r3 = 0u;
    } else {
        (void)tc_call(0x80289ba4u, &a);
        (void)tc_call(0x8028cd14u, &a);
        a.r[0] = (u32)rd8(0x80571b2cu);
        (void)tc_call(0x8028d808u, &a);
        a.r[0] = (u32)rd8(0x80571b2cu);
        (void)tc_call(0x802a6120u, &a);
        a.r[0] = (u32)rd8(0x80571b2cu);
        (void)tc_call(0x802b2970u, &a);
        (void)tc_call(0x80289ba4u, &a);
        wr32(0x8050f100u, 0u);
        wr32(0x8050f104u, 0u);
        wr32(0x8050f108u, 0u);
        wr32(0x8050f7f0u, 0u);
        wr32(0x8050f7ecu, 0u);
        wr8(0x8050f110u, 1u);
        (void)tc_call(0x80273694u, &a);
        a.r[0] = 0x8050f810u;
        (void)tc_call(0x8022671cu, &a);
        r3 = tc_call(0x8023029cu, &a);
        r4 = tc_lastr4();
        a.r[0] = 0x8050f810u;
        a.r[1] = r4;
        a.r[2] = r3;
        a.r[3] = r4;
        a.r[4] = 0u;
        a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0xau;
        a.r[6] = 0x80286528u;
        (void)tc_call(0x802269ecu, &a);
        wr32(0x80571b28u, 1u);
        r3 = 1u;
    }
    return r3;
}
