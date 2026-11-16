#include "tc_rt.h"

void fn_80199018(u32 param_r3)
{
    u32 c0lt = 0, ctr = 0, r4 = 0, r7 = 0, r26 = 0, r27 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r7 = param_r3 + 4u;
    r4 = param_r3 + 0x18u;
    c0lt = r7 < r4;
    wr16(param_r3, 0x2e8u);
    wr8(param_r3 + 2u, 1u);
    wr8(param_r3 + 3u, 1u);
    if (c0lt) {
        ctr = ((r4 + 3u - r7) >> 2u) & 0x3fffffffu;
        if (c0lt) {
            do {
                wr16(r7, 0x2e8u);
                wr8(r7 + 2u, 1u);
                wr8(r7 + 3u, 1u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr16(param_r3 + 0x18u, 0x2e8u);
    r27 = param_r3 + 0x4cu;
    wr8(param_r3 + 0x1au, 1u);
    wr8(param_r3 + 0x1bu, 1u);
    wr16(param_r3 + 0x1cu, 0x2e8u);
    wr8(param_r3 + 0x1eu, 1u);
    wr8(param_r3 + 0x1fu, 1u);
    wr32(param_r3 + 0x20u, 0u);
    wr8(param_r3 + 0x24u, 0u);
    wr8(param_r3 + 0x25u, 0u);
    wr8(param_r3 + 0x26u, 0u);
    wr32(param_r3 + 0x28u, 0xffffffffu);
    wr32(param_r3 + 0x2cu, 0xffffffffu);
    wr32(param_r3 + 0x30u, 0xffffffffu);
    a.r[0] = r27;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80575678u);
    wrf32d(r27 + 0x80u, f0);
    wrf32d(r27 + 0x7cu, f0);
    wrf32d(r27 + 0x78u, f0);
    a.r[0] = param_r3 + 0xe0u;
    a.r[1] = 0x801991c4u;
    a.r[2] = 0x80198fc0u;
    a.r[3] = 0x94u;
    a.r[4] = 5u;
    (void)tc_call(0x80255624u, &a);
    r27 = param_r3 + 0x3c4u;
    a.r[0] = r27;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80575678u);
    r26 = param_r3 + 0x468u;
    wrf32d(r27 + 0x80u, f0);
    wrf32d(r27 + 0x7cu, f0);
    wrf32d(r27 + 0x78u, f0);
    a.r[0] = r26;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80575678u);
    wrf32d(r26 + 0x80u, f0);
    wrf32d(r26 + 0x7cu, f0);
    wrf32d(r26 + 0x78u, f0);
    wrf32d(param_r3 + 0x50cu, f0);
    wrf32d(param_r3 + 0x508u, f0);
    wrf32d(param_r3 + 0x504u, f0);
    a.r[0] = param_r3 + 0x518u;
    a.r[1] = 0x801991c4u;
    a.r[2] = 0x80198fc0u;
    a.r[3] = 0x94u;
    a.r[4] = 8u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x80575678u);
    wr32(param_r3 + 0xc0u, 0xffffffffu);
    wrf32d(param_r3 + 0xc4u, f0);
    wrf32d(param_r3 + 0xc8u, f0);
    wrf32d(param_r3 + 0xd0u, f0);
    wrf32d(param_r3 + 0xd4u, f0);
    wr32(param_r3 + 0x438u, 0xffffffffu);
    wrf32d(param_r3 + 0x43cu, f0);
    wrf32d(param_r3 + 0x440u, f0);
    wrf32d(param_r3 + 0x448u, f0);
    wrf32d(param_r3 + 0x44cu, f0);
    wrf32d(param_r3 + 0x34u, f0);
    wr32(param_r3 + 0x48u, 0xffffffffu);
    wr32(param_r3 + 0x20u, 0u);
    wr8(param_r3 + 0x24u, 0u);
    wr8(param_r3 + 0x25u, 0u);
    wr8(param_r3 + 0x26u, 0u);
    wr32(param_r3 + 0x28u, 0xffffffffu);
    wr32(param_r3 + 0x2cu, 0xffffffffu);
    wr32(param_r3 + 0x30u, 0xffffffffu);
    return;
}
