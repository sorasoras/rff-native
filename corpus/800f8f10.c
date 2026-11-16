#include "tc_rt.h"

void fn_800f8f10(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if ((u32)param_1 != 0u) {
        if ((u32)param_2 == 0u) {
            return;
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80100d00u, &a);
        r31 = rd32((u32)param_2 + 0x10u);
        r5 = ppc_mulhw(1431655766, (s32)rd8(r31 + 0xbau));
        r0 = r5 + ((r5 >> 0x1fu) & 1u);
        r5 = r0 & 0xffu;
        r0 = (r0 << 2u) & 0x3fcu;
        r5 = r0 - r5;
        r6 = (r5 + 1u) & 0xffu;
        r5 = ppc_mulhw(1431655766, (s32)r6);
        r5 = (r6 - ((r5 + ((r5 >> 0x1fu) & 1u)) * 3u)) & 0xffu;
        wr8(r31 + 0xbau, (u8)(r5 + 3u));
        a.r[0] = 0x817fdfd8u;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x80100db8u, &a);
        wrf32d(r31 + 0x2cu, (f64)rdf32(0x817fdfd8u));
        wrf32d(r31 + 0x30u, (f64)rdf32(0x817fdfdcu));
        wrf32d(r31 + 0x34u, (f64)rdf32(0x817fdfe0u));
        if ((u32)param_3 != 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80100fd8u, &a);
            wr32(0x817fdfc8u, r3);
            f1 = (f64)rdf32(0x817fdfc8u);
            wr32(0x817fdfccu, tc_lastr4());
            f0 = (f64)rdf32(0x817fdfccu);
            wrf32d(r31 + 0x44u, f1);
            wrf32d(0x817fdfd0u, f1);
            wrf32d(0x817fdfd4u, f0);
            wrf32d(r31 + 0x48u, f0);
        }
        a.r[0] = 0x817fdfe4u;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x80101060u, &a);
        wrf32d(r31 + 0x38u, (f64)rdf32(0x817fdfe4u));
        wrf32d(r31 + 0x3cu, (f64)rdf32(0x817fdfe8u));
        wrf32d(r31 + 0x40u, (f64)rdf32(0x817fdfecu));
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801010c4u, &a);
        wr8(r31 + 0xbbu, (u8)(((u32)rd8(r31 + 0xbbu) & 0xfdu) | 2u));
        wr8(r31 + 0xb8u, (u8)r3);
        a.r[0] = (u32)param_2;
        (void)tc_call(0x800fe6e4u, &a);
    }
    return;
}
