#include "tc_rt.h"

u32 fn_8024d80c(s32 param_1)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r10 = 0;
    TcArgs a = {0};
    if ((u32)param_1 == 0u) {
        if (rd32(0x80571970u) == 0u) {
            r5 = rd32(0x8057195cu);
            r4 = (u32)rd16(r5 + 0x4eu);
            do {
                r0 = r4;
                r3 = (u32)rd16(r5 + 0x50u);
                r4 = (u32)rd16(r5 + 0x4eu);
            } while (r4 != r0);
            wr32(0x80571960u, ((r4 << 0x10u) & 0xffff0000u) | r3);
            r3 = tc_call(0x8023029cu, &a);
            wr32(0x80571968u, r3);
            r3 = 0u;
            wr32(0x8057196cu, tc_lastr4());
            wr32(0x80571970u, 1u);
            return r3;
        }
        r3 = tc_call(0x8023029cu, &a);
        r4 = tc_lastr4();
        r5 = rd32(0x8057195cu);
        r7 = (u32)rd16(r5 + 0x4eu);
        do {
            r0 = r7;
            r10 = (u32)rd16(r5 + 0x50u);
            r7 = (u32)rd16(r5 + 0x4eu);
        } while (r7 != r0);
        r5 = rd32(0x8057196cu);
        r0 = (u32)((u64)~rd32(0x80571968u) + (u64)r3 + (u64)(r5 <= r4)) ^ 0x80000000u;
        ca = (u32)(((u64)r0 + 0x7fffffffull + (u64)((r4 - r5) >= 0xau)) >> 0x20ull);
        r5 = ((r7 << 0x10u) & 0xffff0000u) | r10;
        if ((0u - (u32)((u64)~r0 + (u64)r0 + (u64)ca)) != 0u) {
            r3 = 0u;
            return r3;
        }
        if (r5 == rd32(0x80571960u)) {
            r3 = 1u;
            return r3;
        }
        wr32(0x80571968u, r3);
        r3 = 0u;
        wr32(0x80571960u, r5);
        wr32(0x8057196cu, r4);
        return r3;
    }
    a.r[0] = 0u;
    (void)tc_call(0x8024f01cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8025070cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x802507d4u, &a);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    (void)tc_call(0x802250a0u, &a);
    r3 = rd32(0x80576c88u);
    wr16(rd32(0x80571954u) + 2u, 0u);
    wr16(rd32(0x80571954u) + 4u, 3u);
    wr8(r3 + 0x5fau, 1u);
    (void)tc_call(0x8025021cu, &a);
    r3 = 1u;
    return r3;
}
