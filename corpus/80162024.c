#include "tc_rt.h"

u32 fn_80162024(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x80161f9cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = 0x817fdf28u;
        (void)tc_call(0x8016172cu, &a);
        r4 = rd32((u32)param_2 + 0x58u);
        wr32(0x817fdf80u, r4);
        a.r[0] = 0x817fdf88u;
        a.r[1] = r4;
        (void)tc_call(0x80051534u, &a);
        if (rd32(0x817fdf80u) != 0u) {
            wr32(0x817fdf84u, 0x817fdf88u);
        } else {
            wr32(0x817fdf84u, 0u);
        }
        wrf32d(0x817fdfd8u, (f64)rdf32((u32)param_2 + 0xb0u));
        wrf32d(0x817fdfdcu, (f64)rdf32((u32)param_2 + 0xb4u));
        wrf32d(0x817fdfe0u, (f64)rdf32((u32)param_2 + 0xb8u));
        wrf32d(0x817fdfe8u, (f64)rdf32((u32)param_2 + 0xc0u));
        wrf32d(0x817fdfecu, (f64)rdf32((u32)param_2 + 0xc4u));
        wrf32d(0x817fdff0u, (f64)rdf32((u32)param_2 + 0xc8u));
        a.r[0] = 0x817fdfe4u;
        a.r[1] = (u32)param_2 + 0xbcu;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        r4 = rd32((u32)param_1 + 0x58u);
        wr32((u32)param_2 + 0x58u, r4);
        a.r[0] = (u32)param_2 + 0x60u;
        a.r[1] = r4;
        (void)tc_call(0x80051534u, &a);
        if (rd32((u32)param_2 + 0x58u) != 0u) {
            wr32((u32)param_2 + 0x5cu, (u32)param_2 + 0x60u);
        } else {
            wr32((u32)param_2 + 0x5cu, 0u);
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
        r4 = rd32(0x817fdf80u);
        wr32((u32)param_1 + 0x58u, r4);
        a.r[0] = (u32)param_1 + 0x60u;
        a.r[1] = r4;
        (void)tc_call(0x80051534u, &a);
        if (rd32((u32)param_1 + 0x58u) != 0u) {
            wr32((u32)param_1 + 0x5cu, (u32)param_1 + 0x60u);
        } else {
            wr32((u32)param_1 + 0x5cu, 0u);
        }
        wrf32d((u32)param_1 + 0xb0u, (f64)rdf32(0x817fdfd8u));
        wrf32d((u32)param_1 + 0xb4u, (f64)rdf32(0x817fdfdcu));
        wrf32d((u32)param_1 + 0xb8u, (f64)rdf32(0x817fdfe0u));
        wrf32d((u32)param_1 + 0xc0u, (f64)rdf32(0x817fdfe8u));
        wrf32d((u32)param_1 + 0xc4u, (f64)rdf32(0x817fdfecu));
        wrf32d((u32)param_1 + 0xc8u, (f64)rdf32(0x817fdff0u));
        a.r[0] = (u32)param_1 + 0xbcu;
        a.r[1] = 0x817fdfe4u;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        wr32(0x817fdf80u, 0u);
        wr32(0x817fdf84u, 0u);
        wr32(0x817fdf7cu, 0u);
        a.r[0] = 0x817fdf28u;
        a.r[1] = 0xffffffffu;
        (void)tc_call(0x801617b8u, &a);
        r3 = 1u;
    }
    return r3;
}
