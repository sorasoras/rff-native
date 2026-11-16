#include "tc_rt.h"

void fn_80052648(void)
{
    u32 r0 = 0, r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = rd32(0x805710d0u);
    r29 = rd32(0x805710ecu);
    wr32(0x805710ecu, r3);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    a.r[0] = r3;
    (void)tc_call(0x8003d790u, &a);
    a.r[0] = 0x803cb950u;
    a.r[1] = 2u;
    (void)tc_call(0x8004d368u, &a);
    r30 = 0x817fdfd8u;
    r28 = 0u;
    r3 = rd32(0x8033658cu);
    r0 = rd32(0x80336590u);
    wr32(0x817fdfd8u, rd32(0x80336588u));
    wr32(0x817fdfdcu, r3);
    wr32(0x817fdfe0u, r0);
    do {
        r27 = rd32(0x803cb934u);
        while (r27 != 0u) {
            r3 = r27;
            r27 = rd32(r27);
            r3 = rd32(r3 + 8u);
            a.r[0] = r3;
            a.r[1] = rd32(r30);
            (void)tc_call(0x800518b8u, &a);
        }
        r28 = r28 + 1u;
        r30 = r30 + 4u;
    } while (r28 < 3u);
    a.f[0] = (f64)rdf32(0x8057226cu);
    a.f[1] = (f64)rdf32(0x80572268u);
    (void)tc_call(0x80254714u, &a);
    a.r[0] = 0x803cb934u;
    (void)tc_call(0x8007ae84u, &a);
    wr32(0x805710ecu, r29);
    a.r[0] = (((0u - r29) | r29) >> 0x1fu) & 1u;
    (void)tc_call(0x8003d790u, &a);
    return;
}
