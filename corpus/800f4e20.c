#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800f4e20(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800f54bcu, &a);
    a.r[0] = r3;
    r3 = tc_call(0x800f54b4u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if ((s32)r3 < 300) {
        r0 = rd32(param_1);
        if (r0 > 0x49u) {
            a.r[0] = 0x120u;
            r3 = tc_call(0x800f54c8u, &a);
            f1 = tc_lastf();
            r30 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                f1 = tc_callf(0x800d9ce0u, &a);
            }
        } else {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = rd32(r0 - 0x7fca3fd8u);
            sw_ = r3;
            switch (sw_) {
            case 0x800f4e74u:
                a.r[0] = 0x128u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8014087cu, &a);
                break;
            case 0x800f4fe0u:
                a.r[0] = 0x130u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8014eb78u, &a);
                break;
            case 0x800f4e90u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80164f68u, &a);
                break;
            case 0x800f4eacu:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80165244u, &a);
                break;
            case 0x800f4ec8u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80164db8u, &a);
                break;
            case 0x800f4ee4u:
                a.r[0] = 0x12cu;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x801742ecu, &a);
                break;
            case 0x800f4f00u:
                a.r[0] = 0x150u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8015d918u, &a);
                break;
            case 0x800f4f1cu:
                a.r[0] = 0x12cu;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8017356cu, &a);
                break;
            case 0x800f4f38u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80148a28u, &a);
                break;
            case 0x800f5130u:
                a.r[0] = 0x234u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80175f54u, &a);
                break;
            case 0x800f5018u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8015fd54u, &a);
                break;
            case 0x800f50f8u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8017495cu, &a);
                break;
            case 0x800f4fc4u:
                a.r[0] = 0x894u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8014f038u, &a);
                break;
            case 0x800f514cu:
                a.r[0] = 0x318u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x801763acu, &a);
                break;
            case 0x800f5168u:
                a.r[0] = 0x230u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80175c78u, &a);
                break;
            case 0x800f5184u:
                a.r[0] = 0x14cu;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8017567cu, &a);
                break;
            case 0x800f5248u:
                a.r[0] = 0x924u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80158448u, &a);
                break;
            case 0x800f4f70u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x801493f8u, &a);
                break;
            case 0x800f4f54u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x800f55ecu, &a);
                break;
            case 0x800f4f8cu:
                a.r[0] = 0x268u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8014dba4u, &a);
                break;
            case 0x800f4ffcu:
                a.r[0] = 0x120u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x800d9ce0u, &a);
                break;
            case 0x800f50dcu:
                a.r[0] = 0x2e0u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80174c14u, &a);
                break;
            case 0x800f5034u:
                a.r[0] = 0x1f4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8015ff24u, &a);
                break;
            case 0x800f5050u:
                a.r[0] = 0x120u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x800f5630u, &a);
                break;
            case 0x800f51a0u:
                a.r[0] = 0x154u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x801768a8u, &a);
                break;
            case 0x800f4fa8u:
                a.r[0] = 0x844u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80185fe4u, &a);
                break;
            case 0x800f50c0u:
                a.r[0] = 0x8b8u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80174784u, &a);
                break;
            case 0x800f506cu:
                a.r[0] = 0x154u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x801646acu, &a);
                break;
            case 0x800f5088u:
                a.r[0] = 0x140u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x801648c8u, &a);
                break;
            case 0x800f5114u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x800f566cu, &a);
                break;
            case 0x800f529cu:
                a.r[0] = 0x120u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x800d9ce0u, &a);
                break;
            case 0x800f522cu:
                a.r[0] = 0x138u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80179858u, &a);
                break;
            case 0x800f50a4u:
                a.r[0] = 0x140u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8015f63cu, &a);
                break;
            case 0x800f51bcu:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80176f00u, &a);
                break;
            case 0x800f51d8u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80176f44u, &a);
                break;
            case 0x800f5264u:
                a.r[0] = 0x290u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80183858u, &a);
                break;
            case 0x800f5210u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80176e00u, &a);
                break;
            case 0x800f51f4u:
                a.r[0] = 0x7c4u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80176d44u, &a);
                break;
            case 0x800f5280u:
                a.r[0] = 0x140u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8019f1e4u, &a);
                break;
            case 0x800f52b8u:
                a.r[0] = 0x134u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x801c7068u, &a);
                break;
            case 0x800f52d4u:
                a.r[0] = 0x128u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x801c7718u, &a);
                break;
            case 0x800f52f0u:
                a.r[0] = 0x170u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x800f575cu, &a);
                break;
            case 0x800f530cu:
                a.r[0] = 0x170u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x800f57a8u, &a);
                break;
            case 0x800f5328u:
                a.r[0] = 0x170u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x800f57f4u, &a);
                break;
            case 0x800f5344u:
                a.r[0] = 0x138u;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x80179858u, &a);
                break;
            case 0x800f5360u:
                a.r[0] = 0x18cu;
                r3 = tc_call(0x800f54c8u, &a);
                f1 = tc_lastf();
                r30 = r3;
                if (r3 == 0u) break;
                a.r[0] = r3;
                f1 = tc_callf(0x8020f8ccu, &a);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return r3;
            }
        }
        a.r[0] = r30;
        a.r[1] = rd32(param_1);
        a.r[2] = rd32(param_1 + 4u);
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(r30) + 0x48u), &a);
        a.r[0] = r30;
        a.r[1] = (u32)rd8(param_1 + 8u);
        (void)tc_call(0x800f5840u, &a);
        a.r[0] = r30;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(param_1 + 0xcu);
        a.f[1] = (f64)rdf32(param_1 + 0x10u);
        a.f[2] = (f64)rdf32(param_1 + 0x14u);
        (void)tc_call(rd32(rd32(r30) + 0x20u), &a);
        a.r[0] = r30;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80573b90u) * (f64)rdf32(param_1 + 0x18u)), (f64)rdf32(0x80573b94u));
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        f1 = tc_callf(rd32(rd32(r30) + 0x24u), &a);
        a.r[0] = r30;
        a.r[1] = rd32(param_1 + 0x1cu);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        f1 = tc_callf(rd32(rd32(r30) + 0x58u), &a);
        a.r[0] = r30;
        a.r[1] = rd32(param_1 + 0x20u);
        a.r[2] = rd32(param_1 + 0x24u);
        a.r[3] = rd32(param_1 + 0x28u);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        f1 = tc_callf(rd32(rd32(r30) + 0x5cu), &a);
        a.r[0] = r30;
        a.r[1] = rd32(param_1 + 0x2cu);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(r30) + 0x60u), &a);
        a.r[0] = r30;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(param_1 + 0x30u);
        a.f[1] = (f64)rdf32(param_1 + 0x34u);
        a.f[2] = (f64)rdf32(param_1 + 0x38u);
        (void)tc_call(rd32(rd32(r30) + 0x64u), &a);
        r3 = tc_call(0x800f54bcu, &a);
        a.r[0] = r3;
        a.r[1] = r30;
        r3 = tc_call(0x800f586cu, &a);
        a.r[0] = r30;
        a.r[1] = r3;
        (void)tc_call(0x800f5848u, &a);
        a.r[0] = r30;
        a.r[1] = 0u;
        (void)tc_call(0x800f5850u, &a);
        r3 = r30;
    } else {
        r3 = 0u;
    }
    return r3;
}
