#include "tc_rt.h"

void fn_802e2b38(s32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r6 = (u32)param_4;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f31 = (f64)rdf32(0x80577444u);
    wr32(0x817fdfecu, 0u);
    r31 = (u32)param_3 + (((u32)param_4 << 1u) & 0xfffffffeu);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfc8u, (u32)param_3);
    wrf32d(param_2, f31);
    wrf32d(param_2 + 8u, f31);
    wrf32d(param_2 + 4u, f31);
    wrf32d(param_2 + 0xcu, f31);
    wrf32d((u32)param_1 + 0x2cu, f31);
    wrf32d((u32)param_1 + 0x30u, f31);
    do {
        wrf32d(0x817fdfd0u, f31);
        wrf32d(0x817fdfd4u, f31);
        wrf32d(0x817fdfd8u, f31);
        wrf32d(0x817fdfdcu, f31);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfd0u;
        a.r[2] = 0x817fdfc8u;
        a.r[3] = r6;
        (void)tc_call(0x802e24b0u, &a);
        f1 = (f64)rdf32(0x817fdfd0u);
        f0 = (f64)rdf32(param_2);
        r3 = r31 - rd32(0x817fdfc8u);
        r6 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
        if (!(f0 > f1)) {
            f1 = f0;
        }
        wrf32d(param_2, f1);
        f0 = (f64)rdf32(param_2 + 4u);
        f1 = (f64)rdf32(0x817fdfd4u);
        if (!(f0 > f1)) {
            f1 = f0;
        }
        wrf32d(param_2 + 4u, f1);
        f0 = (f64)rdf32(param_2 + 8u);
        f1 = (f64)rdf32(0x817fdfd8u);
        if (!(f0 < f1)) {
            f1 = f0;
        }
        wrf32d(param_2 + 8u, f1);
        f0 = (f64)rdf32(param_2 + 0xcu);
        f1 = (f64)rdf32(0x817fdfdcu);
        if (!(f0 < f1)) {
            f1 = f0;
        }
        wrf32d(param_2 + 0xcu, f1);
    } while ((s32)r6 > 0);
    return;
}
