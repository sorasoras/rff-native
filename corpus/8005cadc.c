#include "tc_rt.h"

u32 fn_8005cadc(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32((u32)param_1 + 0x30u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x80052cb0u, &a);
        wr32((u32)param_1 + 0x30u, 0u);
        wr32((u32)param_1 + 0x2cu, 0u);
        wr32((u32)param_1 + 0x34u, 0xffffffffu);
    }
    a.r[0] = rd32((u32)param_1 + 0x14u);
    (void)tc_call(0x8005a2fcu, &a);
    a.r[0] = rd32((u32)param_1 + 0x14u);
    a.r[1] = 1u;
    (void)tc_call(0x8005a018u, &a);
    wr32((u32)param_1 + 0x14u, 0u);
    (void)tc_call(0x80073584u, &a);
    (void)tc_call(0x80080b74u, &a);
    r5 = (u32)rd8(0x80572439u);
    r4 = (u32)rd8(0x8057243au);
    r0 = (u32)rd8(0x8057243bu);
    wr8(0x817fdfe8u, rd8(0x80572438u));
    f1 = (f64)rdf32(0x80572430u);
    wr8(0x817fdfe9u, (u8)r5);
    wr8(0x817fdfeau, (u8)r4);
    wr8(0x817fdfebu, (u8)r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfe8u;
    (void)tc_call(0x80051e9cu, &a);
    return 0u;
}
