#include "tc_rt.h"

void fn_802c5dd8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    f1 = tc_callf(0x802c2798u, &a);
    r3 = rd32((u32)param_1 + 0x238u);
    a.r[0] = r3;
    a.r[1] = (u32)param_1 + 0x258u;
    a.r[2] = 0u;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0x28u), &a);
    if (rd32(rd32((u32)param_1 + 4u) + 0x20u) == 0u) {
        r31 = (u32)param_1 + 0xcu;
        r30 = 3u;
        do {
            r3 = rd32(r31 + 0x23cu);
            a.r[0] = r3;
            a.r[1] = (u32)param_1 + 0x258u;
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x28u), &a);
            r30 = r30 - 1u;
            r31 = r31 - 4u;
        } while ((s32)r30 >= 0);
    }
    r4 = rd32((u32)param_1 + 0x454u);
    r31 = (u32)ppc_divw((s32)(((r4 << 8u) & 0xffffff00u) - r4), (s32)rd32((u32)param_1 + 0x458u)) & 0xffu;
    (void)tc_call(0x802c2798u, &a);
    if ((u32)rd8((u32)param_1 + 0x460u) != 0u) {
        r3 = (u32)rd8((u32)param_1 + 0x462u);
        r0 = (u32)rd8((u32)param_1 + 0x463u);
        wr8(0x817fdfd8u, rd8((u32)param_1 + 0x461u));
        wr8(0x817fdfd9u, (u8)r3);
        wr8(0x817fdfdau, (u8)r0);
        wr8(0x817fdfdbu, (u8)r31);
        r0 = rd32(0x817fdfd8u);
    } else {
        wr32(0x817fdfdcu, 0u);
        wr8(0x817fdfdfu, (u8)r31);
        r0 = rd32(0x817fdfdcu);
    }
    wr32(0x817fdfe0u, r0);
    a.r[0] = 1u;
    a.r[1] = 0x817fdfe0u;
    (void)tc_call(0x80253524u, &a);
    a.r[0] = 0x80u;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    wrf32d(0xcc008000u, (f64)rdf32(0x803489b0u));
    wrf32d(0xcc008000u, (f64)rdf32(0x803489b0u));
    wrf32d(0xcc008000u, (f64)rdf32(0x803489b0u));
    wrf32d(0xcc008000u, (f64)rdf32(0x803489b4u));
    wrf32d(0xcc008000u, (f64)rdf32(0x803489b4u));
    wrf32d(0xcc008000u, (f64)rdf32(0x803489b4u));
    wrf32d(0xcc008000u, (f64)rdf32(0x803489b4u));
    wrf32d(0xcc008000u, (f64)rdf32(0x803489b0u));
    return;
}
