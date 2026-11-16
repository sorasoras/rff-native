#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801d9704(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0;
    r6 = 0u;
    r5 = 0u;
    f2 = (f64)(f32)(px_b2f((u64)rd16((u32)param_1 + 0x1deu) | 0x4330000000000000ull) - rdf64(0x80576138u));
    f0 = (f64)(f32)(f2 * (f64)(f32)((f64)rdf32(0x805760d8u) * (f64)rdf32((u32)param_1 + 0xdecu)));
    wrf32d((u32)param_1 + 0xdc8u, f2);
    wrf32d((u32)param_1 + 0xdecu, f0);
    ctr = 7u;
    do {
        if ((s32)r6 < (s32)rd32((u32)param_1 + 0x288u)) {
            r4 = rd32((u32)param_1 + 0x280u) + r5;
        } else {
            r4 = rd32((u32)param_1 + 0x280u);
        }
        if (r4 != 0u) {
            wrf32d(r4 + 0x24u, (f64)rdf32((u32)param_1 + 0xdecu));
        }
        r6 = r6 + 1u;
        r5 = r5 + 0xe4u;
        if ((s32)r6 < (s32)rd32((u32)param_1 + 0x288u)) {
            r4 = rd32((u32)param_1 + 0x280u) + r5;
        } else {
            r4 = rd32((u32)param_1 + 0x280u);
        }
        if (r4 != 0u) {
            wrf32d(r4 + 0x24u, (f64)rdf32((u32)param_1 + 0xdecu));
        }
        r6 = r6 + 1u;
        r5 = r5 + 0xe4u;
        if ((s32)r6 < (s32)rd32((u32)param_1 + 0x288u)) {
            r4 = rd32((u32)param_1 + 0x280u) + r5;
        } else {
            r4 = rd32((u32)param_1 + 0x280u);
        }
        if (r4 != 0u) {
            wrf32d(r4 + 0x24u, (f64)rdf32((u32)param_1 + 0xdecu));
        }
        r6 = r6 + 1u;
        r5 = r5 + 0xe4u;
        if ((s32)r6 < (s32)rd32((u32)param_1 + 0x288u)) {
            r4 = rd32((u32)param_1 + 0x280u) + r5;
        } else {
            r4 = rd32((u32)param_1 + 0x280u);
        }
        if (r4 != 0u) {
            wrf32d(r4 + 0x24u, (f64)rdf32((u32)param_1 + 0xdecu));
        }
        r6 = r6 + 1u;
        r5 = r5 + 0xe4u;
        if ((s32)r6 < (s32)rd32((u32)param_1 + 0x288u)) {
            r4 = rd32((u32)param_1 + 0x280u) + r5;
        } else {
            r4 = rd32((u32)param_1 + 0x280u);
        }
        if (r4 != 0u) {
            wrf32d(r4 + 0x24u, (f64)rdf32((u32)param_1 + 0xdecu));
        }
        r5 = r5 + 0xe4u;
        r6 = r6 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    f3 = (f64)rdf32(0x805760d8u);
    wrf32d(0x80374f48u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xdc8u) * (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0xdccu))));
    wrf32d(0x80374f6cu, (f64)(f32)((f64)rdf32((u32)param_1 + 0xdc8u) * (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0xdd4u))));
    wrf32d(0x80374f90u, (f64)(f32)((f64)rdf32((u32)param_1 + 0xdc8u) * (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0xdd8u))));
    f2 = (f64)rdf32((u32)param_1 + 0xdc8u);
    f0 = (f64)(f32)(f2 * (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0xde0u)));
    wrf32d((u32)param_1 + 0xddcu, (f64)(f32)(f2 * (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0xddcu))));
    wrf32d(0x80374fb4u, f0);
    f2 = (f64)rdf32((u32)param_1 + 0xdc8u);
    f0 = (f64)(f32)(f2 * (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0xde8u)));
    wrf32d((u32)param_1 + 0xde4u, (f64)(f32)(f2 * (f64)(f32)(f3 * (f64)rdf32((u32)param_1 + 0xde4u))));
    wrf32d((u32)param_1 + 0xde8u, f0);
    return;
}
