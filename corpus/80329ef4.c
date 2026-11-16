#include "tc_rt.h"

void fn_80329ef4(u32 param_1, s32 param_2, s32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0x817fdfdcu;
    (void)tc_call(0x8023411cu, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2 + 0xcu;
    a.r[2] = 0x817fdfd0u;
    (void)tc_call(0x8023411cu, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2 + 0x18u;
    a.r[2] = 0x817fdfc4u;
    (void)tc_call(0x8023411cu, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2 + 0x24u;
    a.r[2] = 0x817fdfb8u;
    (void)tc_call(0x8023411cu, &a);
    a.r[0] = 0x80u;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    f0 = (f64)rdf32(0x817fdfe4u);
    f1 = (f64)rdf32(0x817fdfe0u);
    wrf32d(0xcc008000u, (f64)rdf32(0x817fdfdcu));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f0);
    if ((u32)param_3 != 0u) {
        wr8(0xcc008000u, 0u);
    }
    f0 = (f64)rdf32(0x817fdfd8u);
    f1 = (f64)rdf32(0x817fdfd4u);
    wrf32d(0xcc008000u, (f64)rdf32(0x817fdfd0u));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f0);
    if ((u32)param_3 != 0u) {
        wr8(0xcc008000u, 1u);
    }
    f0 = (f64)rdf32(0x817fdfccu);
    f1 = (f64)rdf32(0x817fdfc8u);
    wrf32d(0xcc008000u, (f64)rdf32(0x817fdfc4u));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f0);
    if ((u32)param_3 != 0u) {
        wr8(0xcc008000u, 2u);
    }
    f0 = (f64)rdf32(0x817fdfc0u);
    f1 = (f64)rdf32(0x817fdfbcu);
    wrf32d(0xcc008000u, (f64)rdf32(0x817fdfb8u));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f0);
    if ((u32)param_3 != 0u) {
        wr8(0xcc008000u, 3u);
    }
    return;
}
