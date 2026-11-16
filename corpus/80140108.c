#include "tc_rt.h"

void fn_80140108(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804bead8u;
    (void)tc_call(0x8013ed08u, &a);
    wr32(0x804beae4u, 0x80364238u);
    a.r[0] = 0x804beae8u;
    (void)tc_call(0x8013ed08u, &a);
    wr32(0x804beaf4u, 0x803641a8u);
    a.r[0] = 0x804beaf8u;
    (void)tc_call(0x8013ed08u, &a);
    wr32(0x804beb04u, 0x803641f0u);
    a.r[0] = 0x804beb08u;
    (void)tc_call(0x8013ed08u, &a);
    wr32(0x804beb14u, 0x80364160u);
    a.r[0] = 0x804beb18u;
    (void)tc_call(0x8013ed08u, &a);
    wr32(0x804beb24u, 0x80364280u);
    return;
}
