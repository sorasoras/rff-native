#include "tc_rt.h"

s32 fn_8018f700(s32 param_1)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80040b64u, &a);
    r5 = rd32((u32)param_1 + 0x88u) - 1u;
    r3 = r3 - (ppc_divwu(r3, r5) * r5);
    if (r3 == rd32((u32)param_1 + 0x8cu)) {
        r3 = r3 + 1u;
    }
    return (s32)r3;
}
