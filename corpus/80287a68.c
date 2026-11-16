#include "tc_rt.h"

void fn_80287a68(u32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r28 = r3;
    (void)tc_call(0x80289ba4u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x80287bc4u, &a);
    r29 = r3;
    if (r3 != 0u) {
        (void)tc_call(0x80289ba4u, &a);
        (void)tc_call(0x80289ba4u, &a);
        a.r[0] = r29;
        a.r[1] = 0x80391814u;
        a.r[2] = 0x10u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u) {
            (void)tc_call(0x80289ba4u, &a);
            (void)tc_call(0x80289ba4u, &a);
            a.r[0] = (u32)rd8(r29 + 0x56u);
            (void)tc_call(0x802927b0u, &a);
        }
        a.r[0] = r29 + 0x40u;
        (void)tc_call(0x8029015cu, &a);
        (void)tc_call(0x80289ba4u, &a);
        r3 = (u32)rd8(r29 + 0x5bu);
        if ((r3 == 0u || r3 == 2u) || ((r3 + 0xfcu) & 0xffu) <= 1u) {
            wr8(0x8050f112u, (u8)((u32)rd8(0x8050f112u) - 1u));
        } else {
            wr8(0x8050f113u, (u8)((u32)rd8(0x8050f113u) - 1u));
        }
        a.r[0] = r29;
        a.r[1] = 0u;
        a.r[2] = 0x60u;
        (void)tc_call(0x8000443cu, &a);
    }
    a.r[0] = r28;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
