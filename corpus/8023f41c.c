#include "tc_rt.h"

u32 fn_8023f41c(void)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = rd32(0x80571714u);
    r3 = tc_call(0x8022c2b0u, &a);
    r8 = (u32)rd16(0xcc00202cu) & 0x7ffu;
    do {
        r6 = r8;
        r7 = (u32)rd16(0xcc00202eu) & 0x7ffu;
        r8 = (u32)rd16(0xcc00202cu) & 0x7ffu;
    } while (r6 != r8);
    r31 = (((r8 - 1u) << 1u) & 0xfffffffeu) + ppc_divwu(r7 - 1u, (u32)rd16(rd32(0x80571714u) + 0x1au));
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    r0 = (u32)rd16(r30 + 0x18u);
    if (r31 >= r0) {
        r31 = r31 - r0;
    }
    return (r31 >> 1u) & 0x7fffffffu;
}
