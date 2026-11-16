#include "tc_rt.h"

void fn_801007d0(f64 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_3 != 0u && (u32)rd16(param_3) != 0u) {
        r3 = tc_call(0x80052c3cu, &a);
        r31 = r3;
        a.r[0] = r3;
        (void)tc_call(0x800cb808u, &a);
        r8 = (u32)rd8(param_4);
        wr8(r31 + 0x52u, 2u);
        r7 = (u32)rd8(param_4 + 1u);
        wrf32d(r31 + 0x58u, param_1);
        r6 = (u32)rd8(param_4 + 2u);
        wr8(r31 + 0x28u, (u8)r8);
        r0 = (u32)rd8(param_4 + 3u);
        wr8(r31 + 0x29u, (u8)r7);
        wr8(r31 + 0x2au, (u8)r6);
        wr8(r31 + 0x2bu, (u8)r0);
        a.r[0] = param_2;
        a.r[1] = param_3;
        a.r[2] = r31;
        (void)tc_call(0x80100890u, &a);
    }
    return;
}
