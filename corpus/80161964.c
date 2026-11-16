#include "tc_rt.h"

void fn_80161964(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (rd32((u32)param_1 + 0x5cu) != 0u) {
        r4 = rd32((u32)param_1 + 0x54u);
        r31 = rd32(r4 + 0x30u);
        wr32(r4 + 0x30u, 0u);
        a.r[0] = 0x817fdfd8u;
        a.r[1] = rd32((u32)param_1 + 0x54u);
        (void)tc_call(0x80100db8u, &a);
        r5 = rd32((u32)param_1 + 0x54u);
        wrf32d((u32)param_1 + 0xc0u, (f64)rdf32(0x817fdfd8u));
        wrf32d((u32)param_1 + 0xc4u, (f64)rdf32(0x817fdfdcu));
        wrf32d((u32)param_1 + 0xc8u, (f64)rdf32(0x817fdfe0u));
        wr32(r5 + 0x30u, r31);
        f6 = (f64)rdf32((u32)param_1 + 0xc4u);
        f7 = (f64)rdf32((u32)param_1 + 0xc0u);
        r3 = ((u32)rd16((u32)param_1 + 0xbcu) * 0x34u) - 0x7fb60e50u;
        f4 = (f64)(f32)(f7 + (f64)rdf32(0x804b9d60u));
        f3 = (f64)(f32)(-f6 + (f64)rdf32(0x804b9d5cu));
        f1 = (f64)rdf32(r3 + 0x286cu);
        f5 = (f64)rdf32((u32)param_1 + 0xc8u);
        f0 = (f64)rdf32(r3 + 0x2870u);
        f2 = (f64)(f32)(f4 + (f64)rdf32(r3 + 0x2868u));
        r3 = rd32((u32)param_1 + 0x5cu);
        wrf32d(0x817fdfe4u, f7);
        f1 = (f64)(f32)(f3 + f1);
        f0 = (f64)(f32)(f5 + f0);
        wrf32d(0x817fdfe8u, f6);
        wrf32d(r3 + 4u, f2);
        wrf32d(0x817fdfecu, f5);
        wrf32d(0x817fdfe4u, f4);
        wrf32d(0x817fdfe8u, f3);
        wrf32d(r3 + 8u, f1);
        wrf32d(0x817fdfe4u, f2);
        wrf32d(0x817fdfe8u, f1);
        wrf32d(0x817fdfecu, f0);
        wrf32d(r3 + 0xcu, f0);
    }
    return;
}
