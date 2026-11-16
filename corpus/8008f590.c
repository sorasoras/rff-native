#include "tc_rt.h"

void fn_8008f590(u32 param_1, s32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = (u32)rd8(rd32(param_1));
    if (r6 == 1u) {
        r5 = rd32(param_1 + 0x8cu);
        if ((u32)((s32)((r5 << 1u) & 0xc0000000u) >> 31) != 0u) {
            r5 = (r5 & 0xbfffffffu) | ((ppc_cntlzw(r6 - 3u) << 0x19u) & 0x40000000u);
            wr32(param_1 + 0x8cu, r5);
        }
        wr8(rd32(param_1), 3u);
        if ((u32)param_2 == 0x161u) {
            r7 = rd32(param_1);
            f1 = (f64)rdf32(0x80572968u);
            wr8(r7 + 7u, (u8)((u32)rd8(r7 + 7u) | 0x10u));
            a.f[0] = f1;
            a.r[0] = 0x4au;
            a.r[1] = param_1 + 0xcu;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
            return;
        }
        if ((u32)param_2 == 0x162u) {
            r7 = rd32(param_1);
            f1 = (f64)rdf32(0x80572968u);
            wr8(r7 + 7u, (u8)((u32)rd8(r7 + 7u) | 0x20u));
            a.f[0] = f1;
            a.r[0] = 0x4bu;
            a.r[1] = param_1 + 0xcu;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
            return;
        }
        if ((u32)param_2 == 0x163u) {
            r7 = rd32(param_1);
            f1 = (f64)rdf32(0x80572968u);
            wr8(r7 + 7u, (u8)((u32)rd8(r7 + 7u) | 0x40u));
            a.f[0] = f1;
            a.r[0] = 0x4bu;
            a.r[1] = param_1 + 0xcu;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x800d783cu, &a);
            return;
        }
        if ((u32)param_2 != 0x164u) {
            return;
        }
        r7 = rd32(param_1);
        f1 = (f64)rdf32(0x80572968u);
        wr8(r7 + 7u, (u8)((u32)rd8(r7 + 7u) | 0x80u));
        a.f[0] = f1;
        a.r[0] = 0x4bu;
        a.r[1] = param_1 + 0xcu;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
        return;
    }
    if (r6 != 2u) {
        return;
    }
    r5 = rd32(param_1 + 0x8cu);
    if ((u32)((s32)((r5 << 1u) & 0xc0000000u) >> 31) != 0u) {
        r5 = (r5 & 0xbfffffffu) | ((ppc_cntlzw(r6 - 4u) << 0x19u) & 0x40000000u);
        wr32(param_1 + 0x8cu, r5);
    }
    wr8(rd32(param_1), 4u);
    if ((u32)param_2 == 0x161u) {
        r7 = rd32(param_1);
        f1 = (f64)rdf32(0x80572968u);
        wr8(r7 + 7u, (u8)((u32)rd8(r7 + 7u) | 0x10u));
        a.f[0] = f1;
        a.r[0] = 0x4au;
        a.r[1] = param_1 + 0xcu;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
        return;
    }
    if ((u32)param_2 == 0x162u) {
        r7 = rd32(param_1);
        f1 = (f64)rdf32(0x80572968u);
        wr8(r7 + 7u, (u8)((u32)rd8(r7 + 7u) | 0x20u));
        a.f[0] = f1;
        a.r[0] = 0x4bu;
        a.r[1] = param_1 + 0xcu;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
        return;
    }
    if ((u32)param_2 == 0x163u) {
        r7 = rd32(param_1);
        f1 = (f64)rdf32(0x80572968u);
        wr8(r7 + 7u, (u8)((u32)rd8(r7 + 7u) | 0x40u));
        a.f[0] = f1;
        a.r[0] = 0x4bu;
        a.r[1] = param_1 + 0xcu;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
        return;
    }
    if ((u32)param_2 != 0x164u) {
        return;
    }
    r7 = rd32(param_1);
    f1 = (f64)rdf32(0x80572968u);
    wr8(r7 + 7u, (u8)((u32)rd8(r7 + 7u) | 0x80u));
    a.f[0] = f1;
    a.r[0] = 0x4bu;
    a.r[1] = param_1 + 0xcu;
    a.r[2] = 0x804b15c0u;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x800d783cu, &a);
    return;
}
