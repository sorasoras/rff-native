#include "tc_rt.h"

void fn_800511f4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803c81f0u;
    (void)tc_call(0x801db974u, &a);
    a.r[0] = 0x803c81f0u;
    a.r[1] = 0x800512b0u;
    a.r[2] = 0x803c81e0u;
    (void)tc_call(0x802551b8u, &a);
    wr32(0x803c8640u, 0u);
    wr32(0x803c8644u, 0xffffffffu);
    wr32(0x803c8648u, 0u);
    wr32(0x803c864cu, 0u);
    a.r[0] = 0x803c865cu;
    (void)tc_call(0x8007ae0cu, &a);
    a.r[0] = 0x803c865cu;
    a.r[1] = 0x8005137cu;
    a.r[2] = 0x803c8650u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x803c8688u;
    a.r[1] = 0x800513d8u;
    a.r[2] = 0x800513dcu;
    a.r[3] = 0x5cu;
    a.r[4] = 0x14u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x8005141cu;
    a.r[2] = 0x803c8678u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x803c8db8u;
    (void)tc_call(0x80157a18u, &a);
    return;
}
