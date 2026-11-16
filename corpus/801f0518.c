#include "tc_rt.h"

u32 fn_801f0518(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(rd32(0x80571398u) + 0xe4u);
    if (r31 != 0x21u) {
        a.r[0] = rd32(param_1) + 0xc5u;
        r3 = tc_call(0x800f8a08u, &a);
        r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)rd16((r31 * 0x38u) - 0x7fb64ffeu)) >> 3);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        if ((s32)r3 < (s32)r0) {
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
