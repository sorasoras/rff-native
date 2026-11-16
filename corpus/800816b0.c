#include "tc_rt.h"

void fn_800816b0(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0;
    r0 = (u32)rd8(0x80499099u);
    if (r0 >= 0x3e7u) {
        r0 = 0x3e7u;
    }
    r4 = (u32)rd8(0x8049909au);
    wr16(0x80499082u, (u16)r0);
    if (r4 >= 0x3e7u) {
        r4 = 0x3e7u;
    }
    r6 = (u32)rd8(0x8049909bu);
    wr16(0x80499084u, (u16)r4);
    if (r6 >= 0x3e7u) {
        r6 = 0x3e7u;
    }
    r4 = (u32)rd8(0x8049909cu);
    r7 = (u32)rd8(0x804990a0u);
    r0 = ((r4 << 2u) & 0xfffffffcu) - r4;
    r4 = (u32)rd8(0x804990a1u);
    r8 = (u32)rd8(0x804990a2u);
    r0 = (u32)rd8(0x80499098u) + r0 + 0x45u;
    r3 = (u32)rd8(0x804990a3u);
    r0 = r0 * 0x64u;
    wr16(0x80499086u, (u16)r6);
    wr8(0x804990a4u, (u8)r7);
    r0 = r0 & 0xffffu;
    wr8(0x804990a5u, (u8)r4);
    wr8(0x804990a6u, (u8)r8);
    wr8(0x804990a7u, (u8)r3);
    wr8(0x804990a8u, (u8)r7);
    wr8(0x804990a9u, (u8)r4);
    wr8(0x804990aau, (u8)r8);
    wr8(0x804990abu, (u8)r3);
    if (r0 >= 0xffffu) {
        r0 = 0xffffu;
    }
    wr16(0x80499088u, (u16)r0);
    return;
}
