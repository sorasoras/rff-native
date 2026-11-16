#include "tc_rt.h"

u32 fn_8020974c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = rd32(param_1) + 0xcdu;
    r3 = tc_call(0x800f8a08u, &a);
    r29 = r3;
    a.r[0] = 0xdu;
    a.r[1] = 0x4bu;
    a.r[2] = 0u;
    r3 = tc_call(0x801412f8u, &a);
    r5 = (r29 * 0x54u) - 0x7fb62080u;
    r29 = r3;
    r6 = (u32)rd8(r5 + 0x78u);
    r28 = (u32)rd8(r5 + 0x79u);
    r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r6) >> 1);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = r0 * 0xcu;
    a.r[0] = r6 - r0;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 2u;
    (void)tc_call(0x800f8a84u, &a);
    if ((u32)rd16(0x817fdfd8u) == 0x3000u) {
        wr16(0x817fdfd8u, 0xff10u);
    }
    wr16(0x817fdfdcu, rd16(r29));
    a.r[0] = r28;
    a.r[1] = 0x817fdfdeu;
    a.r[2] = 2u;
    (void)tc_call(0x800f8a84u, &a);
    if ((u32)rd16(0x817fdfdeu) == 0x3000u) {
        wr16(0x817fdfdeu, 0xff10u);
    }
    wr16(0x817fdfe2u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = 0u;
    (void)tc_call(0x80100670u, &a);
    return 1u;
}
