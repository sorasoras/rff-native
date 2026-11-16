#include "tc_rt.h"

void fn_8015ab04(u32 param_1)
{
    TcArgs a = {0};
    if (param_1 < 0xau) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fc970b0u);
        (void)tc_call(0x8010a74cu, &a);
        return;
    }
    return;
}
