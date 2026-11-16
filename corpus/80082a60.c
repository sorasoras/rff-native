#include "tc_rt.h"

void fn_80082a60(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80492800u;
    (void)tc_call(0x80082b60u, &a);
    a.r[0] = 0x80492800u;
    a.r[1] = 0x80082bb0u;
    a.r[2] = 0x804927e0u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x80499060u;
    (void)tc_call(0x800a995cu, &a);
    a.r[0] = 0x80499060u;
    a.r[1] = 0x800aa988u;
    a.r[2] = 0x80499040u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x8049afe0u;
    (void)tc_call(0x800c8d68u, &a);
    a.r[0] = 0x8049afe0u;
    a.r[1] = 0x800c8f94u;
    a.r[2] = 0x8049afc0u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x8049c500u;
    (void)tc_call(0x800c80f4u, &a);
    a.r[0] = 0x8049c500u;
    a.r[1] = 0x800c8104u;
    a.r[2] = 0x8049c4e0u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x8049df80u;
    (void)tc_call(0x800c9158u, &a);
    a.r[0] = 0x8049df80u;
    a.r[1] = 0x800c919cu;
    a.r[2] = 0x8049df60u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x8049e100u;
    (void)tc_call(0x801eb990u, &a);
    a.r[0] = 0x8049e100u;
    a.r[1] = 0x801eb9a0u;
    a.r[2] = 0x8049e0e0u;
    (void)tc_call(0x802551b8u, &a);
    (void)tc_call(0x801a783cu, &a);
    wr16(0x805711b0u, 0x2e8u);
    wr8(0x805711b2u, 1u);
    wr8(0x805711b3u, 1u);
    return;
}
