#include "tc_rt.h"

void fn_8029bfc4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x802952a8u, &a);
    f1 = tc_lastf();
    r7 = (u32)rd8(0x80577380u);
    r6 = (u32)rd8(0x80577381u);
    r31 = r3;
    r5 = (u32)rd8(0x80577382u);
    r4 = (u32)rd8(0x80577383u);
    c0lt = (u32)rd8(0x80540118u) < 4u;
    r3 = (u32)rd8(0x80577384u);
    r0 = (u32)rd8(0x80577385u);
    wr8(0x817fdfe8u, (u8)r7);
    wr8(0x817fdfe9u, (u8)r6);
    wr8(0x817fdfeau, (u8)r5);
    wr8(0x817fdfebu, (u8)r4);
    wr8(0x817fdfecu, (u8)r3);
    wr8(0x817fdfedu, (u8)r0);
    if (!c0lt) {
        if (r31 != 0u) {
            r6 = (u32)rd8(r31 + 0x7fu);
        } else {
            r6 = 0u;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xd0003u;
        a.r[1] = 0x80394840u;
        a.r[2] = param_2;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8028cc84u, &a);
        r6 = 0u;
        r7 = 0u;
    }
    r12 = rd32(0x80540108u);
    if (r12 != 0u) {
        if (r31 == 0u) {
            a.r[0] = 0x817fdfe8u;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        } else {
            a.r[0] = r31 + 0x1cu;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
