#include "tc_rt.h"

u32 fn_80156140(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((s32)rd32((u32)param_4 + ((rd32((u32)param_4 + 0x4cu) << 2u) & 0xfffffffcu) + 0x28u) < 0) {
        r3 = 0u;
    } else {
        f0 = (f64)rdf32(0x805748fcu);
        wrf32d(0x817fdfd8u, param_1);
        wrf32d(0x817fdfdcu, param_2);
        wrf32d(0x817fdfe0u, param_3);
        wr32(0x817fdfe8u, 0u);
        wrf32d(0x817fdfe4u, f0);
        wr8(0x817fdfecu, 0u);
        wr8(0x817fdfedu, 0u);
        r3 = rd32((u32)param_4 + 0x54u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0xcu;
            (void)tc_call(0x800b31a0u, &a);
            wr32((u32)param_4 + 0x54u, 0u);
        }
        a.r[0] = 0x8049c500u;
        a.r[1] = rd32((u32)param_4 + ((rd32((u32)param_4 + 0x4cu) << 2u) & 0xfffffffcu) + 0x28u);
        r3 = tc_call(0x800c8794u, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0x817fdfd8u;
        a.r[3] = 0u;
        r3 = tc_call(0x800eb4f0u, &a);
        wr32((u32)param_4 + 0x54u, r3);
        a.r[0] = 0x8046ad74u;
        a.r[1] = r3;
        (void)tc_call(0x8007b03cu, &a);
        r3 = rd32((u32)param_4 + 0x54u);
        wr32(r3 + 0x148u, rd32(r3 + 0x148u) | 0x400000u);
        r3 = rd32((u32)param_4 + 0x54u);
        wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x4000000u);
        r3 = rd32((u32)param_4 + 0x54u);
        wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x20000000u);
        wr32(rd32((u32)param_4 + 0x54u) + 0x1b0u, 1u);
        a.r[0] = rd32((u32)param_4 + 0x54u);
        (void)tc_call(0x800b2e68u, &a);
        wr8(rd32((u32)param_4 + 0x54u) + 0x162du, 1u);
        r3 = 1u;
        f0 = (f64)rdf32(0x805748fcu);
        wr32(rd32((u32)param_4 + 0x54u) + 0x15cu, rd32(0x8046ad78u));
        wr32(rd32((u32)param_4 + 0x54u) + 0xed4u, 0u);
        wr32(rd32((u32)param_4 + 0x54u) + 0xed0u, 7u);
        r4 = rd32((u32)param_4 + 0x54u);
        wrf32d(r4 + 0x10u, f0);
        wrf32d(r4 + 0x14u, f0);
        wrf32d(r4 + 0x18u, f0);
    }
    return r3;
}
