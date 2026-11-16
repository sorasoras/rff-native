#include "tc_rt.h"

void fn_801e8734(s32 param_1)
{
    f64 f1 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff8u, 0.0);
    wrf64(0x817fdff0u, 0.0);
    wrf64(0x817fdfe8u, 0.0);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfd8u, rd32((u32)param_1 + 0x344u));
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0x10u;
    f1 = tc_callf(0x8014a130u, &a);
    f29 = f1;
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0x11u;
    f1 = tc_callf(0x8014a130u, &a);
    f30 = f1;
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0x12u;
    f1 = tc_callf(0x8014a130u, &a);
    f31 = f1;
    a.r[0] = 0x817fdfd8u;
    a.r[1] = 0x13u;
    f1 = tc_callf(0x8014a130u, &a);
    wrf32d((u32)param_1 + 0xce8u, f29);
    wrf32d((u32)param_1 + 0xcecu, f30);
    wrf32d((u32)param_1 + 0xcf0u, f31);
    wrf32d((u32)param_1 + 0xcf4u, f1);
    return;
}
