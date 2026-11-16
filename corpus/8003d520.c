#include "tc_rt.h"

u32 fn_8003d520(s32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = ((u32)param_1 * 0x60u) - 0x7fc41d08u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = 0x817fdfe4u;
    a.r[1] = param_2;
    a.r[2] = r31 + 0x48u;
    (void)tc_call(0x80042474u, &a);
    a.r[0] = 0x817fdfd8u;
    a.r[1] = param_2;
    a.r[2] = r31 + 0x54u;
    (void)tc_call(0x800424c8u, &a);
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x802343e4u, &a);
    r0 = rd32(r31 + 4u);
    c0lt = (s32)r0 < 1;
    if (r0 == 1u) {
        a.f[0] = (f64)rdf32(0x817fdfe4u);
        a.f[1] = (f64)rdf32(0x817fdfe8u);
        a.f[2] = (f64)rdf32(0x817fdfecu);
        a.r[0] = r31 + 8u;
        (void)tc_call(0x80251b20u, &a);
    } else if (!c0lt) {
        if ((s32)r0 < 3) {
            a.f[0] = (f64)rdf32(0x817fdfd8u);
            a.f[1] = (f64)rdf32(0x817fdfdcu);
            a.f[2] = (f64)rdf32(0x817fdfe0u);
            a.r[0] = r31 + 8u;
            (void)tc_call(0x80251b4cu, &a);
        }
    } else if ((s32)r0 >= 0) {
        a.f[0] = (f64)rdf32(0x817fdfe4u);
        a.f[1] = (f64)rdf32(0x817fdfe8u);
        a.f[2] = (f64)rdf32(0x817fdfecu);
        a.r[0] = r31 + 8u;
        (void)tc_call(0x80251b20u, &a);
        a.f[0] = (f64)rdf32(0x817fdfd8u);
        a.f[1] = (f64)rdf32(0x817fdfdcu);
        a.f[2] = (f64)rdf32(0x817fdfe0u);
        a.r[0] = r31 + 8u;
        (void)tc_call(0x80251b30u, &a);
    }
    a.r[0] = r31 + 8u;
    a.r[1] = (((u32)param_1 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_1 & 0x1fu));
    a.r[3] = 0u;
    (void)tc_call(0x80251c64u, &a);
    return rd32(r31);
}
