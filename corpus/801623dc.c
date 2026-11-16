#include "tc_rt.h"

u32 fn_801623dc(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_3;
    if ((s32)rd8((u32)param_1 + 0xbeu) >= (s32)param_3) {
        a.r[0] = (u32)rd16((u32)param_1 + 0xbcu);
        r3 = tc_call(0x800cd704u, &a);
        r0 = r3 & 0xffu;
        if ((s32)param_3 > (s32)r0) {
            r31 = r0;
        }
        r5 = (u32)rd16((u32)param_1 + 0xbcu);
        r4 = 0u;
        if ((u32)rd16((u32)param_2 + 0xbcu) == r5 && ((u32)rd8((u32)param_2 + 0xbfu) == (u32)rd8((u32)param_1 + 0xbfu) || r5 == 0x2e8u)) {
            r4 = 1u;
        }
        if (r4 != 0u) {
            r4 = (u32)rd8((u32)param_1 + 0xbeu) + (u32)rd8((u32)param_2 + 0xbeu);
            if ((s32)r4 < (s32)r31) {
                r31 = r4;
            }
            r3 = r4 - r31;
            wr8((u32)param_1 + 0xbeu, (u8)r3);
            wr8((u32)param_2 + 0xbeu, (u8)(r4 - (r3 & 0xffu)));
        } else {
            if ((u32)rd16((u32)param_2 + 0xbcu) != 0x2e8u) {
                r3 = 0u;
                return r3;
            }
            r4 = rd32((u32)param_1 + 0x58u);
            wr32((u32)param_2 + 0x58u, r4);
            a.r[0] = (u32)param_2 + 0x60u;
            a.r[1] = r4;
            (void)tc_call(0x80051534u, &a);
            if (rd32((u32)param_2 + 0x58u) == 0u) {
                wr32((u32)param_2 + 0x5cu, 0u);
            } else {
                wr32((u32)param_2 + 0x5cu, (u32)param_2 + 0x60u);
            }
            wrf32d((u32)param_2 + 0xb0u, (f64)rdf32((u32)param_1 + 0xb0u));
            wrf32d((u32)param_2 + 0xb4u, (f64)rdf32((u32)param_1 + 0xb4u));
            wrf32d((u32)param_2 + 0xb8u, (f64)rdf32((u32)param_1 + 0xb8u));
            wrf32d((u32)param_2 + 0xc0u, (f64)rdf32((u32)param_1 + 0xc0u));
            wrf32d((u32)param_2 + 0xc4u, (f64)rdf32((u32)param_1 + 0xc4u));
            wrf32d((u32)param_2 + 0xc8u, (f64)rdf32((u32)param_1 + 0xc8u));
            a.r[0] = (u32)param_2 + 0xbcu;
            a.r[1] = (u32)param_1 + 0xbcu;
            a.r[2] = 4u;
            (void)tc_call(0x80004338u, &a);
            if ((s32)rd8((u32)param_1 + 0xbeu) <= (s32)r31) {
                wr32((u32)param_1 + 0x58u, 0u);
                wr32((u32)param_1 + 0x5cu, 0u);
                wr16((u32)param_1 + 0xbcu, 0x2e8u);
                wr8((u32)param_1 + 0xbeu, 0u);
            } else {
                wr8((u32)param_2 + 0xbeu, (u8)r31);
                wr8((u32)param_1 + 0xbeu, (u8)((u32)rd8((u32)param_1 + 0xbeu) - r31));
                a.r[0] = (u32)param_2;
                (void)tc_call(0x80161a60u, &a);
            }
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
