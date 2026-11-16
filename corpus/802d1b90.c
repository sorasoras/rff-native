#include "tc_rt.h"

void fn_802d1b90(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r5 = rd32((u32)param_1 + 0x28u);
    r3 = rd32(r5 + 0x4cu);
    r28 = (rd32(r5 + 0x50u) >> 0x1cu) & 0xfu;
    if (r28 < ((r3 >> 0x1cu) & 0xfu)) {
        if (r28 >= ((r3 >> 0x14u) & 0xfu)) {
            return;
        }
        a.r[0] = r5;
        a.r[1] = (r28 + 1u) & 0xffu;
        (void)tc_call(0x802cf3ccu, &a);
        a.r[0] = rd32((u32)param_1 + 0x28u);
        a.r[1] = r28;
        a.r[2] = param_2;
        (void)tc_call(0x802cf634u, &a);
        r3 = rd32((u32)param_1 + 0x28u);
        a.r[0] = r3;
        a.r[1] = (rd32(r3 + 0x50u) >> 0x1cu) & 0xfu;
        (void)tc_call(0x802cf45cu, &a);
        r29 = 0u;
        wr8(0x817fdfdbu, 0u);
        r3 = rd32((u32)param_1 + 0x28u);
        wr8(0x817fdfd8u, 1u);
        wr8(0x817fdfd9u, 4u);
        wr8(0x817fdfdau, 0x3cu);
        wr32(0x817fdfdcu, rd32(0x817fdfd8u));
        a.r[0] = r3;
        r3 = tc_call(0x802cf354u, &a);
        r5 = r3 + ((r28 << 2u) & 0x3fcu);
        r0 = (u32)rd8(0x817fdfddu);
        wr8(r5, rd8(0x817fdfdcu));
        r4 = (u32)rd8(0x817fdfdeu);
        wr8(r5 + 1u, (u8)r0);
        r0 = (u32)rd8(0x817fdfdfu);
        wr8(r5 + 2u, (u8)r4);
        wr8(r5 + 3u, (u8)r0);
        a.r[0] = (u32)param_1 + 0xe4u;
        a.r[1] = (rd32(rd32((u32)param_1 + 0x28u) + 0x50u) >> 0x1cu) & 0xfu;
        (void)tc_call(0x802cb89cu, &a);
        f1 = (f64)rdf32(0x80348a78u);
        c0eq = (f64)rdf32((u32)param_1 + 0x4cu) == f1;
        wrf32d(0x817fdfe8u, f1);
        wrf32d(0x817fdfecu, f1);
        if (c0eq && (f64)rdf32((u32)param_1 + 0x50u) == f1) {
            r29 = 1u;
        }
        if (r29 != 0u) {
            r4 = rd32((u32)param_1 + 0x28u);
            if (((rd32(r4 + 0x50u) >> 0x1cu) & 0xfu) == 1u) {
                a.r[0] = 0x817fdfe0u;
                a.r[1] = r4;
                a.r[2] = 0u;
                (void)tc_call(0x802d08c8u, &a);
                wrf32d((u32)param_1 + 0x4cu, (f64)rdf32(0x817fdfe0u));
                wrf32d((u32)param_1 + 0x50u, (f64)rdf32(0x817fdfe4u));
            }
        }
    }
    return;
}
