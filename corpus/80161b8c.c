#include "tc_rt.h"

void fn_80161b8c(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (rd32(0x8057131cu) != 0u) {
        a.r[0] = (u32)rd16((u32)param_1 + 0xbcu);
        r3 = tc_call(0x800cd704u, &a);
        if ((s32)(r3 & 0xffu) > 1) {
            r30 = rd32(rd32(0x8057131cu));
            wr32(0x817fdfc8u, rd32(0x817fdfd0u));
            r3 = rd32((u32)param_1 + 0x54u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = rd32(0x80571318u);
                a.r[2] = 1u;
                (void)tc_call(0x800f8f10u, &a);
                a.r[0] = 0x817fdfd8u;
                a.r[1] = rd32(0x80571318u);
                (void)tc_call(0x800ff754u, &a);
                a.r[0] = rd32(0x8057131cu);
                a.r[1] = 0x817fdfd8u;
                (void)tc_call(0x801010d0u, &a);
                r3 = (u32)rd8((u32)param_1 + 0xbeu);
                if ((u32)rd16((u32)param_1 + 0xbcu) != 0x2e8u) {
                    a.r[0] = r3;
                    a.r[1] = 0x817fdfd0u;
                    a.r[2] = 8u;
                    (void)tc_call(0x800f8734u, &a);
                    a.r[0] = r30;
                    a.r[1] = 0x817fdfd0u;
                    (void)tc_call(0x802e4518u, &a);
                    a.r[0] = 0x804bf05cu;
                    (void)tc_call(0x80163f60u, &a);
                }
            }
        }
    }
    return;
}
