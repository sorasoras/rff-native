#include "tc_rt.h"

void fn_8022dccc(void)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0u;
    a.r[2] = 2u;
    (void)tc_call(0x8000443cu, &a);
    (void)tc_call(0x80273694u, &a);
    do {
        r3 = tc_call(0x80273734u, &a);
    } while (r3 == 1u);
    a.r[0] = 0x817fdfc8u;
    (void)tc_call(0x802750c0u, &a);
    (void)tc_call(0x802314d4u, &a);
    (void)tc_call(0x80230de0u, &a);
    (void)tc_call(0x80239944u, &a);
    a.r[0] = 0x817fdfd8u;
    f1 = tc_callf(0x802317a0u, &a);
    r31 = (u32)rd8(0x817fdfdeu);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[7] = 0u;
    r3 = tc_call(0x80239710u, &a);
    if (r3 == 2u) {
        if (r31 != 1u) {
            r3 = 2u;
        } else {
            a.r[0] = 0x817fdfccu;
            r3 = tc_call(0x8022eaa0u, &a);
            if (r3 == 0u || rd32(0x817fdfccu) != 0u) {
                r3 = 2u;
            } else {
                r3 = 1u;
            }
        }
    } else {
        r3 = 3u;
    }
    r0 = (u32)rd8(0x817fdfc8u);
    wr8(0x817fdfdeu, (u8)r3);
    if (r0 != 1u) {
        wr8(0x817fdfddu, 1u);
    } else {
        wr8(0x817fdfddu, 5u);
    }
    (void)tc_call(0x8022ebbcu, &a);
    a.r[0] = 0x817fdfd8u;
    (void)tc_call(0x802316bcu, &a);
    a.r[0] = 0x817fdfd0u;
    (void)tc_call(0x802253dcu, &a);
    if ((u32)rd8(0x817fdfc8u) != 1u) {
        (void)tc_call(0x8022eff0u, &a);
        a.r[0] = 2u;
        f1 = tc_callf(0x8022d9f0u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80230c00u, &a);
    } else {
        wr32(0x805714fcu, 1u);
        (void)tc_call(0x8022eff0u, &a);
        a.r[0] = 5u;
        (void)tc_call(0x8022d9f0u, &a);
        (void)tc_call(0x8022f02cu, &a);
        (void)tc_call(0x8022980cu, &a);
    }
    return;
}
