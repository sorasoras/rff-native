#include "tc_rt.h"

void fn_8022e378(void)
{
    u32 r3 = tc_argr(0u), r5 = tc_argr(2u), r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x804e0244u, 0u);
    wr32(0x804e0248u, 0u);
    a.r[0] = 0x804e0200u;
    a.r[1] = 0x40u;
    r3 = tc_call(0x8022770cu, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    a.r[1] = 1u;
    a.r[2] = 0u;
    r3 = tc_call(0x802641b0u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = 0u;
        a.r[1] = 1u;
        a.r[2] = 3u;
        r3 = tc_call(0x80263a1cu, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            a.r[0] = 0u;
            r3 = tc_call(0x802642acu, &a);
            f1 = tc_lastf();
            r3 = 0u;
        } else {
            wr32(0x817fdfe8u, 0x20000100u);
            a.r[0] = 0u;
            a.r[1] = 0x817fdfe8u;
            a.r[2] = 4u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            r3 = tc_call(0x80262fb4u, &a);
            f1 = tc_lastf();
            r31 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
            a.r[0] = 0u;
            r3 = tc_call(0x802633ccu, &a);
            f1 = tc_lastf();
            r30 = r31 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            a.r[1] = 0x804e0200u;
            a.r[2] = 0x40u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            r3 = tc_call(0x802632d4u, &a);
            f1 = tc_lastf();
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            r3 = tc_call(0x802633ccu, &a);
            f1 = tc_lastf();
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            r3 = tc_call(0x80263b4cu, &a);
            f1 = tc_lastf();
            r30 = r30 | ((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
            a.r[0] = 0u;
            r3 = tc_call(0x802642acu, &a);
            f1 = tc_lastf();
            r3 = (ppc_cntlzw(r30) >> 5u) & 0x7ffffffu;
        }
    }
    wr32(0x804e024cu, r3);
    wr32(0x804e0240u, 0x40u);
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    if (rd32(0x804e0248u) != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8022c2d8u, &a);
        f1 = tc_lastf();
        r3 = 0u;
    } else {
        wr32(0x804e0244u, r3);
        r3 = 0x804e0214u;
        wr32(0x804e0248u, 1u);
    }
    r30 = (u32)rd16(r3 + 0x28u);
    a.r[0] = 0u;
    a.r[1] = 0x14u;
    r3 = tc_call(0x8022e578u, &a);
    f1 = tc_lastf();
    if ((r30 & 0x7c00u) == 0x5000u || (r30 & 0xc0u) == 0xc0u) {
        r30 = 0u;
    }
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    if (rd32(0x804e0248u) != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8022c2d8u, &a);
        f1 = tc_lastf();
        r5 = 0u;
    } else {
        wr32(0x804e0244u, r3);
        r5 = 0x804e0214u;
        wr32(0x804e0248u, 1u);
    }
    if ((r30 & 0xffffu) == (u32)rd16(r5 + 0x28u)) {
        a.r[0] = 0u;
        a.r[1] = 0x14u;
        r3 = tc_call(0x8022e578u, &a);
        f1 = tc_lastf();
    } else {
        wr16(r5 + 0x28u, (u16)r30);
        a.r[0] = 1u;
        a.r[1] = 0x14u;
        r3 = tc_call(0x8022e578u, &a);
        f1 = tc_lastf();
    }
    return;
}
