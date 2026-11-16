#include "tc_rt.h"

u32 fn_8023f380(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r6 = (u32)rd16(0xcc00202cu) & 0x7ffu;
    do {
        r7 = r6;
        r8 = (u32)rd16(0xcc00202eu) & 0x7ffu;
        r6 = (u32)rd16(0xcc00202cu) & 0x7ffu;
    } while (r7 != r6);
    r7 = rd32(0x80571714u);
    r6 = ((r6 - 1u) << 1u) & 0xfffffffeu;
    r4 = (u32)rd16(r7 + 0x18u);
    r0 = ppc_cntlzw(r4 ^ (r6 + ppc_divwu(r8 - 1u, (u32)rd16(r7 + 0x1au))));
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (r4 << (r0 & 0x1fu));
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return ((r0 >> 0x1fu) & 1u) ^ 1u ^ ((u32)rd16(0x804e623au) & 1u);
}
