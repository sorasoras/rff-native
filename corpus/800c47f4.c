#include "tc_rt.h"

u32 fn_800c47f4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x80571140u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x800b0304u, &a);
        r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    } else {
        r3 = 1u;
    }
    return r3;
}
