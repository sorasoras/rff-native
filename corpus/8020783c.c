#include "tc_rt.h"

u32 fn_8020783c(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32(param_1) + 0xc5u;
    a.r[1] = 2u;
    r3 = tc_call(0x800f89c4u, &a);
    r0 = (r3 << 2u) & 0xfffffffcu;
    r3 = 0u;
    r0 = rd32(rd32(0x80571398u) + r0 + 0xccu);
    if (r0 != 0x21u) {
        r0 = r0 * 0x38u;
        r0 = ppc_mulhw(1374389535, (s32)rd16(r0 - 0x7fb64ffeu));
        r0 = (u32)((s32)r0 >> 3);
        r3 = r0 + ((r0 >> 0x1fu) & 1u);
    }
    a.r[0] = r3;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 2u;
    (void)tc_call(0x800f8a84u, &a);
    wr16(0x817fdfecu, 0u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 0u;
    (void)tc_call(0x80100670u, &a);
    return 1u;
}
