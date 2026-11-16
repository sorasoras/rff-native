#include "tc_rt.h"

static u64 px_f2b(f64 x){union{f64 d;u64 b;}v;v.d=x;return v.b;}

static f64 px_b2f(u64 x){union{f64 d;u64 b;}v;v.b=x;return v.d;}

static f32 px_w2f(u32 x){union{f32 f;u32 w;}v;v.w=x;return v.f;}

static f64 px_hi(f64 x){return(f64)px_w2f((u32)(px_f2b(x)>>32));}

static f64 px_lo(f64 x){return(f64)px_w2f((u32)px_f2b(x));}

static f64 px_pack(f64 a,f64 b){return px_b2f(((u64)ppc_single_bits(a)<<32)|(u64)ppc_single_bits(b));}

static f64 px_pq(f64 x){u64 b=px_f2b(x);if((b&0x7ff0000000000000ull)==0x7ff0000000000000ull&&(b&0x000fffffffffffffull)!=0)
return px_b2f(b|0x0008000000000000ull);return x;}

static f64 px_padd(f64 a,f64 b){f64 r=a+b;if(r!=r){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_psub(f64 a,f64 b){f64 r=a-b;if(r!=r){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pmul(f64 a,f64 c){f64 r=a*c;if(r!=r){if(a!=a)return px_pq(a);if(c!=c)return px_pq(c);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pdiv(f64 a,f64 b){f64 r=a/b;if(r!=r){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);return px_b2f(0x7ff8000000000000ull);}return r;}

static f64 px_pfma(f64 a,f64 c,f64 b){f64 s=a*c+b;if(s!=s){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);if(c!=c)return px_pq(c);
return px_b2f(0x7ff8000000000000ull);}u64 bits=px_f2b(s);if((bits&0x1fffffffull)==0x10000000ull){f64 ap=b-s,bp=s+ap,da=a*c+ap,db=b-bp,err=da+db;
if(err!=0.0){if((err>0.0)==(s>0.0))bits+=1;else bits-=1;}}return px_b2f(bits);}

static f64 px_pfms(f64 a,f64 c,f64 b){f64 nb= -b,s=a*c+nb;if(s!=s){if(a!=a)return px_pq(a);if(b!=b)return px_pq(b);if(c!=c)return px_pq(c);
return px_b2f(0x7ff8000000000000ull);}u64 bits=px_f2b(s);if((bits&0x1fffffffull)==0x10000000ull){f64 ap=nb-s,bp=s+ap,da=a*c+ap,db=nb-bp,err=da+db;
if(err!=0.0){if((err>0.0)==(s>0.0))bits+=1;else bits-=1;}}return px_b2f(bits);}

static f64 px_pfnm(f64 x){return x!=x?x:-x;}

static f64 px_pneg(f64 b){return px_b2f(px_f2b(b)^0x8000000080000000ull);}

static f64 px_pmg00(f64 a,f64 b){return px_b2f((px_f2b(a)&0xffffffff00000000ull)|(px_f2b(b)&0xffffffffull));}

static f64 px_pmg01(f64 a,f64 b){return px_b2f((px_f2b(a)&0xffffffff00000000ull)|(px_f2b(b)<<32));}

static f64 px_pmg10(f64 a,f64 b){return px_b2f((px_f2b(a)<<32)|(px_f2b(b)&0xffffffffull));}

static f64 px_ctiw(f64 b,s32 w){u64 r=0xfff8000000000000ull|(u32)w;if(w==0&&(px_f2b(b)>>63)!=0)r|=0x100000000ull;return px_b2f(r);}

void fn_80327e58(u32 param_1,u32 param_2,s32 param_3){u32 c0eq=0,c0lt=0,r0=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,r11=0;
u32 r12=0,r18=0,r19=0,r20=0,r26=0,r27=0,r28=0,r29=0,r30=0,r31=0,t99=0,t394=0;u32 t397=0;
f64 f0=0.0,f1=0.0,f2=0.0,f3=0.0,f4=0.0,f5=0.0,f6=0.0,f7=0.0,f8=0.0,f9=0.0,f10=0.0,f11=0.0;
f64 f12=0.0,f13=0.0,f14=0.0,f15=0.0,f16=0.0,f17=0.0,f18=0.0,f19=0.0,f20=0.0,f21=0.0,f22=0.0,f23=0.0;
f64 f24=0.0,f25=0.0,f26=0.0,f27=0.0,f28=0.0,f29=0.0,f30=0.0,f31=0.0;TcArgs a={0};TcArgs za={0};r0=(u32)rd8(rd32((u32)param_3+0x24u)+0x149u);c0lt=(s32)r0<2;
if(r0==2u){wr32(0x817fdd10u,0x817fe000u);wr32(0x817fe004u,0x817ff000u);wrf64(0x817fdff0u,0.0);wrf32d(0x817fdff8u,px_hi(0.0));wrf32d(0x817fdff8u,px_lo(0.0));
wrf64(0x817fdfe0u,0.0);wrf32d(0x817fdfe8u,px_hi(0.0));wrf32d(0x817fdfe8u,px_lo(0.0));wrf64(0x817fdfd0u,0.0);wrf32d(0x817fdfd8u,px_hi(0.0));
wrf32d(0x817fdfd8u,px_lo(0.0));wrf64(0x817fdfc0u,0.0);wrf32d(0x817fdfc8u,px_hi(0.0));wrf32d(0x817fdfc8u,px_lo(0.0));wrf64(0x817fdfb0u,0.0);
wrf32d(0x817fdfb8u,px_hi(0.0));wrf32d(0x817fdfb8u,px_lo(0.0));wrf64(0x817fdfa0u,0.0);wrf32d(0x817fdfa8u,px_hi(0.0));wrf32d(0x817fdfa8u,px_lo(0.0));
wrf64(0x817fdf90u,0.0);wrf32d(0x817fdf98u,px_hi(0.0));wrf32d(0x817fdf98u,px_lo(0.0));wrf64(0x817fdf80u,0.0);wrf32d(0x817fdf88u,px_hi(0.0));
wrf32d(0x817fdf88u,px_lo(0.0));wrf64(0x817fdf70u,0.0);wrf32d(0x817fdf78u,px_hi(0.0));wrf32d(0x817fdf78u,px_lo(0.0));wrf64(0x817fdf60u,0.0);
wrf32d(0x817fdf68u,px_hi(0.0));wrf32d(0x817fdf68u,px_lo(0.0));wrf64(0x817fdf50u,0.0);wrf32d(0x817fdf58u,px_hi(0.0));wrf32d(0x817fdf58u,px_lo(0.0));
wrf64(0x817fdf40u,0.0);wrf32d(0x817fdf48u,px_hi(0.0));wrf32d(0x817fdf48u,px_lo(0.0));wr32(0x817fdf08u,0u);wr32(0x817fdf0cu,0u);wr32(0x817fdf10u,0u);
wr32(0x817fdf14u,0u);wr32(0x817fdf18u,0u);wr32(0x817fdf1cu,0u);wr32(0x817fdf20u,0u);wr32(0x817fdf24u,0u);wr32(0x817fdf28u,0u);wr32(0x817fdf2cu,0u);
wr32(0x817fdf30u,0u);wr32(0x817fdf34u,0u);wr32(0x817fdf38u,0u);wr32(0x817fdf3cu,0u);r18=rd32(param_2+4u);
c0eq=(f64)rdf32(0x80577c10u)==(f64)rdf32(param_2+0x88u);r12=rd32(param_2+8u);r11=rd32(param_2+0xcu);r10=rd32(param_2+0x10u);r9=rd32(param_2+0x14u);
r8=rd32(param_2+0x18u);r7=rd32(param_2+0x1cu);r6=rd32(param_2+0x20u);r5=rd32(param_2+0x24u);r3=rd32(param_2+0x28u);r0=rd32(param_2+0x2cu);
wr32(0x817fde00u,rd32(param_2));wr32(0x817fde04u,r18);wr32(0x817fde08u,r12);wr32(0x817fde0cu,r11);wr32(0x817fde10u,r10);wr32(0x817fde14u,r9);
wr32(0x817fde18u,r8);wr32(0x817fde1cu,r7);wr32(0x817fde20u,r6);wr32(0x817fde24u,r5);wr32(0x817fde28u,r3);wr32(0x817fde2cu,r0);if(!c0eq){a=za;a.r[0]=0x817fddb0u;
(void)tc_call(0x80254460u,&a);f0=(f64)rdf32(0x817fddb0u);f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdef0u,f0);r0=rd32(0x817fdef4u);c0lt=(s32)r0<1;if(r0==1u){
wrf32d(0x817fde2cu,(f64)(f32)px_padd((f64)rdf32(0x817fde2cu),(f64)rdf32(param_2+0x88u)));}else if(c0lt&&(s32)r0>=0){a=za;a.r[0]=param_2;a.r[1]=param_2+0x8cu;
a.r[2]=0x817fdd8cu;(void)tc_call(0x8023411cu,&a);a=za;a.r[0]=0x817fdd8cu;a.r[1]=0x817fdd8cu;r3=tc_call(0x80320984u,&a);if(r3==0u){
wrf32d(0x817fde2cu,(f64)(f32)px_padd((f64)rdf32(0x817fde2cu),(f64)rdf32(param_2+0x88u)));}else{f1=(f64)rdf32(0x817fdd94u);f0=(f64)rdf32(0x80577c10u);
if(!((f1>f0)||(f1==f0))){f3=(f64)rdf32(param_2+0x88u);f1=(f64)(f32)px_pmul(f1,f3);f5=(f64)(f32)px_pmul((f64)rdf32(0x817fdd8cu),f3);
f3=(f64)(f32)px_pmul((f64)rdf32(0x817fdd90u),f3);f2=(f64)(f32)px_psub((f64)rdf32(0x817fde1cu),f3);f0=(f64)(f32)px_psub((f64)rdf32(0x817fde2cu),f1);
wrf32d(0x817fde0cu,(f64)(f32)px_psub((f64)rdf32(0x817fde0cu),f5));wrf32d(0x817fde1cu,f2);wrf32d(0x817fde2cu,f0);}else{f3=(f64)rdf32(param_2+0x88u);
f1=(f64)(f32)px_pmul(f1,f3);f5=(f64)(f32)px_pmul((f64)rdf32(0x817fdd8cu),f3);f3=(f64)(f32)px_pmul((f64)rdf32(0x817fdd90u),f3);
f2=(f64)(f32)px_padd((f64)rdf32(0x817fde1cu),f3);f0=(f64)(f32)px_padd((f64)rdf32(0x817fde2cu),f1);
wrf32d(0x817fde0cu,(f64)(f32)px_padd((f64)rdf32(0x817fde0cu),f5));wrf32d(0x817fde1cu,f2);wrf32d(0x817fde2cu,f0);}}}}r30=rd32((u32)param_3+0x24u)+0x9cu;a=za;
a.r[0]=param_1;a.r[1]=param_2;a.r[2]=(u32)param_3;(void)tc_call(0x80329848u,&a);r7=(u32)rd8(param_1+0xc0u);r4=(u32)(s8)rd8(r30+0xa9u)^0x80000000u;
r0=(u32)(s8)rd8(r30+0xaau);wr32(0x817fdef0u,0x43300000u);r0=r0^0x80000000u;f3=rdf64(0x80577c28u);wr32(0x817fdef4u,r4);r31=(((0u-r7)|r7)>>0x1fu)&1u;
f2=(f64)rdf32(0x80577c14u);f0=rdf64(0x817fdef0u);wr32(0x817fdefcu,r0);wr32(0x817fdef8u,0x43300000u);f1=(f64)(f32)px_pdiv((f64)(f32)px_psub(f0,f3),f2);
f0=(f64)(f32)px_psub(rdf64(0x817fdef8u),f3);wrf32d(0x817fdd18u,f1);f0=(f64)(f32)px_pdiv(f0,f2);wrf32d(0x817fdd1cu,f0);a=za;a.r[0]=(u32)param_3;
a.r[1]=0x817fddd0u;(void)tc_call(0x8031efa8u,&a);a=za;a.r[0]=0x817fde00u;a.r[1]=0x817fddd0u;a.r[2]=0x817fddd0u;(void)tc_call(0x802337a0u,&a);a=za;
a.r[0]=0x817fddd0u;f1=tc_callf(0x80320f2cu,&a);f26=f1;a=za;a.r[0]=0x817fddd0u;a.r[1]=1u;f1=tc_callf(0x80320f2cu,&a);f27=f1;a=za;a.r[0]=0x817fde30u;
a.r[1]=0x817fde00u;a.r[2]=(u32)param_3;f1=tc_callf(0x80327b38u,&a);a=za;a.r[0]=param_1;a.r[1]=(u32)param_3;a.f[0]=f1;r3=tc_call(rd32(rd32(param_1)+0x18u),&a);
f1=tc_lastf();r29=r3;a=za;a.r[0]=param_1;a.r[1]=(u32)rd16(r30)&0x800u;a.f[0]=f1;r3=tc_call(rd32(rd32(param_1)+0x10u),&a);f1=tc_lastf();r18=r3;a=za;
a.r[0]=param_1;a.r[1]=(u32)rd16(r30)&0x800u;a.f[0]=f1;r3=tc_call(rd32(rd32(param_1)+0x14u),&a);f1=tc_lastf();r28=r3;r27=1u;a=za;a.r[0]=(u32)param_3;
a.r[1]=tc_lastr4();a.f[0]=f1;r3=tc_call(r18,&a);f1=tc_lastf();f2=0.0;f3=0.0;f29=(f64)rdf32(0x80577c10u);r26=r3;f30=(f64)rdf32(0x80577c38u);
f31=(f64)rdf32(0x80577c18u);f28=(f64)rdf32(0x80577c1cu);while(r3!=0u){if(rd32(r3+0xcu)==1u){f2=(f64)rdf32(r3+0x30u);f1=(f64)rdf32(r3+0x38u);r4=rd32(r3+0xc8u);
f3=(f64)(f32)px_pmul(f2,f1);f25=(f64)(f32)px_pmul(f3,(f64)rdf32(r4+0x58u));if(!(f25<f28)){r0=(u32)rd16(rd32(r4+0x24u)+0x9cu)&0x6000u;c0lt=(s32)r0<16384;do{
if(r0==0x4000u){f3=(f64)(f32)px_pmul((f64)rdf32(r26+0x34u),f1);}else{if(!c0lt){if(r0==0x6000u)break;}else if(r0==0x2000u){
f3=(f64)(f32)px_pmul(f2,(f64)rdf32(r26+0x3cu));break;}f1=(f64)rdf32(r26+0x34u);f3=(f64)(f32)px_pmul(f1,(f64)rdf32(r26+0x3cu));}}while(0);
f24=(f64)(f32)px_pmul(f3,(f64)rdf32(r4+0x5cu));if(!(f24<f28)){a=za;a.r[0]=param_1;a.r[1]=r26;a.r[2]=r30;a.r[3]=param_2;a.r[4]=r27;f1=tc_callf(0x80326730u,&a);
r27=0u;a=za;a.r[0]=0x817fdda4u;a.r[1]=0x817fde30u;a.r[2]=r26;a.f[0]=f1;(void)tc_call(r29,&a);a=za;a.r[0]=0x817fdda4u;a.r[1]=0x817fddd0u;a.r[2]=0x817fdda4u;
(void)tc_call(0x802f031cu,&a);f1=(f64)rdf32(0x817fdda4u);f0=(f64)rdf32(0x817fdda8u);f1=(f64)(f32)px_pmul(f1,f1);f0=(f64)(f32)px_pmul(f0,f0);
f21=(f64)(f32)px_padd(f1,f0);if(!((f21<f29)||(f21==f29))){a=za;a.f[0]=f21;f1=tc_callf(0x802eff54u,&a);f2=(f64)(f32)px_pmul(f21,f1);}else{f2=f29;}if(f29!=f2){
f3=(f64)(f32)ppc_fres(f2);f4=px_pack((f64)(f32)px_padd(px_hi(f3),px_hi(f3)),(f64)(f32)px_padd(px_lo(f3),px_lo(f3)));
f3=px_pack((f64)(f32)px_pmul(px_hi(f3),px_hi(f3)),(f64)(f32)px_pmul(px_lo(f3),px_lo(f3)));
f3=px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f2),px_hi(f3),px_hi(f4))),px_pfnm((f64)(f32)px_pfms(px_lo(f2),px_lo(f3),px_lo(f4))));
f22=(f64)(f32)px_pmul(-(f64)rdf32(0x817fdda4u),f3);f23=(f64)(f32)px_pmul((f64)rdf32(0x817fdda8u),f3);}else{f22=f29;f23=(f64)rdf32(0x80577c18u);}
f21=(f64)rdf32(0x80577c18u);if((u32)rd8(r30+0xb0u)!=0u){t394=r26+0xacu;f2=px_pack((f64)rdf32(t394),(f64)rdf32(t394));t397=r26+0xb8u;
f1=px_pack((f64)rdf32(t397),(f64)rdf32(t397));f0=px_pack((f64)(f32)px_psub(px_hi(f2),px_hi(f1)),(f64)(f32)px_psub(px_lo(f2),px_lo(f1)));
f2=px_pack((f64)rdf32(r26+0xb4u),1.0);f1=px_pack((f64)rdf32(r26+0xc0u),1.0);wrf32d(0x817fdd80u,px_hi(f0));wrf32d(0x817fdd80u,px_lo(f0));
f0=px_pack((f64)(f32)px_psub(px_hi(f2),px_hi(f1)),(f64)(f32)px_psub(px_lo(f2),px_lo(f1)));f1=(f64)rdf32(0x817fdd84u);wrf32d(0x817fdd88u,px_hi(f0));
f2=(f64)rdf32(0x817fdd80u);f0=(f64)rdf32(0x817fdd88u);wrf32d(0x817fdd9cu,f1);wrf32d(0x817fdda0u,f0);f1=px_pack((f64)rdf32(0x817fdd9cu),(f64)rdf32(0x817fdd9cu));
wrf32d(0x817fdd98u,f2);f1=px_pack((f64)(f32)px_pmul(px_hi(f1),px_hi(f1)),(f64)(f32)px_pmul(px_lo(f1),px_lo(f1)));f0=px_pack((f64)rdf32(0x817fdd98u),1.0);
f0=px_pack((f64)(f32)px_pfma(px_hi(f0),px_hi(f0),px_hi(f1)),(f64)(f32)px_pfma(px_lo(f0),px_lo(f0),px_lo(f1)));
f20=px_pack((f64)(f32)px_padd(px_hi(f0),px_lo(f1)),px_lo(f1));if(!((f20<f29)||(f20==f29))){a=za;a.f[0]=f20;f1=tc_callf(0x802eff54u,&a);
f0=(f64)(f32)px_pmul(f20,f1);}else{f0=f29;}f0=(f64)(f32)px_pmul(f30,f0);f0=(f64)(f32)px_pdiv(f0,f24);f21=(f64)(f32)px_padd(f21,f0);}a=za;a.r[0]=0x817fddd0u;
a.r[1]=r26+0xacu;a.r[2]=0x817fdd20u;(void)tc_call(0x8023411cu,&a);f8=(f64)rdf32(0x817fdd1cu);f0=(f64)(f32)px_pmul(f26,f22);f4=(f64)rdf32(0x817fdd18u);
f7=(f64)(f32)px_pmul(f27,f23);wrf32d(0x817fdd34u,(f64)rdf32(0x817fdd28u));f9=(f64)(f32)px_pmul(f27,f22);f5=(f64)(f32)px_psub(f4,(f64)(f32)px_pmul(f25,f4));
f6=(f64)rdf32(0x817fdd24u);f10=(f64)(f32)px_pmul(f26,f23);f4=(f64)rdf32(0x817fdd20u);f3=(f64)(f32)px_pmul(f7,f24);wrf32d(0x817fdd40u,f29);
f2=(f64)(f32)px_psub((f64)(f32)px_pmul(f24,(f64)(f32)px_psub((f64)(f32)px_padd(f21,f8),f31)),f8);f8=(f64)(f32)px_pmul(f0,f5);f5=(f64)(f32)px_pmul(f10,f5);
f7=(f64)(f32)px_pmul(f7,f2);wrf32d(0x817fdd4cu,f29);f2=(f64)(f32)px_pmul(f9,f2);f9=(f64)(f32)px_pmul(f21,(f64)(f32)px_pmul(f9,f24));
f10=(f64)(f32)px_pmul(f10,f25);f7=(f64)(f32)px_psub(f8,f7);f1=(f64)(f32)px_padd(f5,f2);f5=(f64)(f32)px_padd(f6,f7);f6=(f64)(f32)px_pmul(f0,f25);
f4=(f64)(f32)px_padd(f4,f1);wrf32d(0x817fdd38u,(f64)(f32)px_psub(f10,f9));f0=(f64)(f32)px_pmul(f21,f3);wrf32d(0x817fdd30u,f5);f2=(f64)(f32)px_padd(f6,f0);
wrf32d(0x817fdd2cu,f4);f0=(f64)(f32)px_psub(f6,f0);wrf32d(0x817fdd44u,(f64)(f32)px_padd(f10,f9));wrf32d(0x817fdd3cu,f2);wrf32d(0x817fdd48u,f0);a=za;
a.r[0]=0x80u;a.r[2]=4u;(void)tc_call(0x80250b74u,&a);f3=0.0;f0=px_pack((f64)rdf32(0x817fdd2cu),(f64)rdf32(0x817fdd2cu));
f1=px_pack((f64)rdf32(0x817fdd38u),(f64)rdf32(0x817fdd38u));f2=px_pack((f64)(f32)px_psub(px_hi(f0),px_hi(f1)),(f64)(f32)px_psub(px_lo(f0),px_lo(f1)));
f0=px_pack((f64)rdf32(0x817fdd34u),1.0);f1=px_pack((f64)rdf32(0x817fdd40u),1.0);wrf32d(0x817fdd74u,px_hi(f2));wrf32d(0x817fdd74u,px_lo(f2));
f2=px_pack((f64)(f32)px_psub(px_hi(f0),px_hi(f1)),(f64)(f32)px_psub(px_lo(f0),px_lo(f1)));f0=(f64)rdf32(0x817fdd74u);wrf32d(0x817fdd7cu,px_hi(f2));
f1=(f64)rdf32(0x817fdd78u);wrf32d(0xcc008000u,f0);f0=(f64)rdf32(0x817fdd7cu);wrf32d(0xcc008000u,f1);wrf32d(0xcc008000u,f0);if(r31!=0u){wr8(0xcc008000u,0u);}
f0=px_pack((f64)rdf32(0x817fdd2cu),(f64)rdf32(0x817fdd2cu));f1=px_pack((f64)rdf32(0x817fdd44u),(f64)rdf32(0x817fdd44u));
f2=px_pack((f64)(f32)px_psub(px_hi(f0),px_hi(f1)),(f64)(f32)px_psub(px_lo(f0),px_lo(f1)));f0=px_pack((f64)rdf32(0x817fdd34u),1.0);
f1=px_pack((f64)rdf32(0x817fdd4cu),1.0);wrf32d(0x817fdd68u,px_hi(f2));wrf32d(0x817fdd68u,px_lo(f2));
f2=px_pack((f64)(f32)px_psub(px_hi(f0),px_hi(f1)),(f64)(f32)px_psub(px_lo(f0),px_lo(f1)));f0=(f64)rdf32(0x817fdd68u);wrf32d(0x817fdd70u,px_hi(f2));
f1=(f64)rdf32(0x817fdd6cu);wrf32d(0xcc008000u,f0);f0=(f64)rdf32(0x817fdd70u);wrf32d(0xcc008000u,f1);wrf32d(0xcc008000u,f0);if(r31!=0u){wr8(0xcc008000u,1u);}
f0=px_pack((f64)rdf32(0x817fdd2cu),(f64)rdf32(0x817fdd2cu));f1=px_pack((f64)rdf32(0x817fdd38u),(f64)rdf32(0x817fdd38u));
f2=px_pack((f64)(f32)px_padd(px_hi(f0),px_hi(f1)),(f64)(f32)px_padd(px_lo(f0),px_lo(f1)));f0=px_pack((f64)rdf32(0x817fdd34u),1.0);
f1=px_pack((f64)rdf32(0x817fdd40u),1.0);wrf32d(0x817fdd5cu,px_hi(f2));wrf32d(0x817fdd5cu,px_lo(f2));
f2=px_pack((f64)(f32)px_padd(px_hi(f0),px_hi(f1)),(f64)(f32)px_padd(px_lo(f0),px_lo(f1)));f0=(f64)rdf32(0x817fdd5cu);wrf32d(0x817fdd64u,px_hi(f2));
f1=(f64)rdf32(0x817fdd60u);wrf32d(0xcc008000u,f0);f0=(f64)rdf32(0x817fdd64u);wrf32d(0xcc008000u,f1);wrf32d(0xcc008000u,f0);if(r31!=0u){wr8(0xcc008000u,2u);}
f0=px_pack((f64)rdf32(0x817fdd2cu),(f64)rdf32(0x817fdd2cu));f1=px_pack((f64)rdf32(0x817fdd44u),(f64)rdf32(0x817fdd44u));
f2=px_pack((f64)(f32)px_padd(px_hi(f0),px_hi(f1)),(f64)(f32)px_padd(px_lo(f0),px_lo(f1)));f0=px_pack((f64)rdf32(0x817fdd34u),1.0);
f1=px_pack((f64)rdf32(0x817fdd4cu),1.0);wrf32d(0x817fdd50u,px_hi(f2));wrf32d(0x817fdd50u,px_lo(f2));
f2=px_pack((f64)(f32)px_padd(px_hi(f0),px_hi(f1)),(f64)(f32)px_padd(px_lo(f0),px_lo(f1)));f0=(f64)rdf32(0x817fdd50u);wrf32d(0x817fdd58u,px_hi(f2));
f1=(f64)rdf32(0x817fdd54u);wrf32d(0xcc008000u,f0);f0=(f64)rdf32(0x817fdd58u);wrf32d(0xcc008000u,f1);wrf32d(0xcc008000u,f0);if(r31!=0u){wr8(0xcc008000u,3u);}}}}
a=za;a.r[0]=(u32)param_3;a.r[1]=r26;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;r3=tc_call(r28,&a);f1=tc_lastf();f2=0.0;f3=0.0;r26=r3;}return;}if(!c0lt){if((s32)r0>=4){
return;}}else{c0lt=(s32)r0<0;if(r0!=0u){if(!c0lt){wr32(0x817fddc0u,0x817fe000u);wr32(0x817fe004u,0x817ff000u);wrf64(0x817fdff0u,0.0);
wrf32d(0x817fdff8u,px_hi(0.0));wrf32d(0x817fdff8u,px_lo(0.0));wrf64(0x817fdfe0u,0.0);wrf32d(0x817fdfe8u,px_hi(0.0));wrf32d(0x817fdfe8u,px_lo(0.0));
wrf64(0x817fdfd0u,0.0);wrf32d(0x817fdfd8u,px_hi(0.0));wrf32d(0x817fdfd8u,px_lo(0.0));wrf64(0x817fdfc0u,0.0);wrf32d(0x817fdfc8u,px_hi(0.0));
wrf32d(0x817fdfc8u,px_lo(0.0));wrf64(0x817fdfb0u,0.0);wrf32d(0x817fdfb8u,px_hi(0.0));wrf32d(0x817fdfb8u,px_lo(0.0));wrf64(0x817fdfa0u,0.0);
wrf32d(0x817fdfa8u,px_hi(0.0));wrf32d(0x817fdfa8u,px_lo(0.0));wrf64(0x817fdf90u,0.0);wrf32d(0x817fdf98u,px_hi(0.0));wrf32d(0x817fdf98u,px_lo(0.0));
wrf64(0x817fdf80u,0.0);wrf32d(0x817fdf88u,px_hi(0.0));wrf32d(0x817fdf88u,px_lo(0.0));wrf64(0x817fdf70u,0.0);wrf32d(0x817fdf78u,px_hi(0.0));
wrf32d(0x817fdf78u,px_lo(0.0));wrf64(0x817fdf60u,0.0);wrf32d(0x817fdf68u,px_hi(0.0));wrf32d(0x817fdf68u,px_lo(0.0));wrf64(0x817fdf50u,0.0);
wrf32d(0x817fdf58u,px_hi(0.0));wrf32d(0x817fdf58u,px_lo(0.0));wrf64(0x817fdf40u,0.0);wrf32d(0x817fdf48u,px_hi(0.0));wrf32d(0x817fdf48u,px_lo(0.0));
wrf64(0x817fdf30u,0.0);wrf32d(0x817fdf38u,px_hi(0.0));wrf32d(0x817fdf38u,px_lo(0.0));wrf64(0x817fdf20u,0.0);wrf32d(0x817fdf28u,px_hi(0.0));
wrf32d(0x817fdf28u,px_lo(0.0));wr32(0x817fdee8u,0u);wr32(0x817fdeecu,0u);wr32(0x817fdef0u,0u);wr32(0x817fdef4u,0u);wr32(0x817fdef8u,0u);wr32(0x817fdefcu,0u);
wr32(0x817fdf00u,0u);wr32(0x817fdf04u,0u);wr32(0x817fdf08u,0u);wr32(0x817fdf0cu,0u);wr32(0x817fdf10u,0u);wr32(0x817fdf14u,0u);wr32(0x817fdf18u,0u);
wr32(0x817fdf1cu,0u);r19=rd32(param_2);r18=rd32(param_2+4u);c0eq=(f64)rdf32(0x80577c10u)==(f64)rdf32(param_2+0x88u);r12=rd32(param_2+8u);r11=rd32(param_2+0xcu);
r10=rd32(param_2+0x10u);r9=rd32(param_2+0x14u);r8=rd32(param_2+0x18u);r7=rd32(param_2+0x1cu);r6=rd32(param_2+0x20u);r5=rd32(param_2+0x24u);
r3=rd32(param_2+0x28u);r0=rd32(param_2+0x2cu);wr32(0x817fded0u,0x43300000u);wr32(0x817fded8u,0x43300000u);wr32(0x817fdea0u,r19);wr32(0x817fdea4u,r18);
wr32(0x817fdea8u,r12);wr32(0x817fdeacu,r11);wr32(0x817fdeb0u,r10);wr32(0x817fdeb4u,r9);wr32(0x817fdeb8u,r8);wr32(0x817fdebcu,r7);wr32(0x817fdec0u,r6);
wr32(0x817fdec4u,r5);wr32(0x817fdec8u,r3);wr32(0x817fdeccu,r0);if(!c0eq){a=za;a.r[0]=0x817fde50u;(void)tc_call(0x80254460u,&a);f0=(f64)rdf32(0x817fde50u);
f0=px_ctiw(f0,ppc_fctiwz(f0));wrf64(0x817fdee0u,f0);r0=rd32(0x817fdee4u);c0lt=(s32)r0<1;if(r0==1u){
wrf32d(0x817fdeccu,(f64)(f32)px_padd((f64)rdf32(0x817fdeccu),(f64)rdf32(param_2+0x88u)));}else if(c0lt&&(s32)r0>=0){a=za;a.r[0]=param_2;a.r[1]=param_2+0x8cu;
a.r[2]=0x817fde44u;(void)tc_call(0x8023411cu,&a);a=za;a.r[0]=0x817fde44u;a.r[1]=0x817fde44u;r3=tc_call(0x80320984u,&a);if(r3==0u){
wrf32d(0x817fdeccu,(f64)(f32)px_padd((f64)rdf32(0x817fdeccu),(f64)rdf32(param_2+0x88u)));}else{f1=(f64)rdf32(0x817fde4cu);f0=(f64)rdf32(0x80577c10u);
if(!((f1>f0)||(f1==f0))){f3=(f64)rdf32(param_2+0x88u);f1=(f64)(f32)px_pmul(f1,f3);f5=(f64)(f32)px_pmul((f64)rdf32(0x817fde44u),f3);
f3=(f64)(f32)px_pmul((f64)rdf32(0x817fde48u),f3);f2=(f64)(f32)px_psub((f64)rdf32(0x817fdebcu),f3);f0=(f64)(f32)px_psub((f64)rdf32(0x817fdeccu),f1);
wrf32d(0x817fdeacu,(f64)(f32)px_psub((f64)rdf32(0x817fdeacu),f5));wrf32d(0x817fdebcu,f2);wrf32d(0x817fdeccu,f0);}else{f3=(f64)rdf32(param_2+0x88u);
f1=(f64)(f32)px_pmul(f1,f3);f5=(f64)(f32)px_pmul((f64)rdf32(0x817fde44u),f3);f3=(f64)(f32)px_pmul((f64)rdf32(0x817fde48u),f3);
f2=(f64)(f32)px_padd((f64)rdf32(0x817fdebcu),f3);f0=(f64)(f32)px_padd((f64)rdf32(0x817fdeccu),f1);
wrf32d(0x817fdeacu,(f64)(f32)px_padd((f64)rdf32(0x817fdeacu),f5));wrf32d(0x817fdebcu,f2);wrf32d(0x817fdeccu,f0);}}}}r30=rd32((u32)param_3+0x24u)+0x9cu;a=za;
a.r[0]=param_1;a.r[1]=param_2;a.r[2]=(u32)param_3;(void)tc_call(0x80329848u,&a);r7=(u32)rd8(param_1+0xc0u);f3=rdf64(0x80577c28u);f1=(f64)rdf32(0x80577c14u);
r0=(u32)(s8)rd8(r30+0xa9u)^0x80000000u;wr32(0x817fded4u,(u32)(s8)rd8(r30+0xaau)^0x80000000u);wr32(0x817fdedcu,r0);r29=(((0u-r7)|r7)>>0x1fu)&1u;
f0=(f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(0x817fded8u),f3),f1);wrf32d(0x817fddd4u,(f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(0x817fded0u),f3),f1));
wrf32d(0x817fddd0u,f0);a=za;a.r[0]=(u32)param_3;a.r[1]=0x817fde70u;(void)tc_call(0x8031efa8u,&a);a=za;a.r[0]=0x817fdea0u;a.r[1]=0x817fde70u;a.r[2]=0x817fde70u;
(void)tc_call(0x802337a0u,&a);a=za;a.r[0]=0x817fde70u;f1=tc_callf(0x80320f2cu,&a);f26=f1;a=za;a.r[0]=0x817fde70u;a.r[1]=1u;f1=tc_callf(0x80320f2cu,&a);f3=0.0;
f4=0.0;f0=(f64)rdf32(0x817fdec4u);f27=f1;f2=(f64)rdf32(0x817fdeb4u);f0=(f64)(f32)px_pmul(f0,f0);f1=(f64)(f32)px_pmul(f2,f2);f2=(f64)rdf32(0x80577c10u);
f18=(f64)(f32)px_padd(f1,f0);if(!((f18<f2)||(f18==f2))){a=za;a.f[0]=f18;f1=tc_callf(0x802eff54u,&a);f3=0.0;f4=0.0;f2=(f64)(f32)px_pmul(f18,f1);}
f19=(f64)rdf32(0x80577c10u);if(f19!=f2){f3=(f64)(f32)ppc_fres(f2);f1=(f64)rdf32(0x817fdec4u);
f4=px_pack((f64)(f32)px_padd(px_hi(f3),px_hi(f3)),(f64)(f32)px_padd(px_lo(f3),px_lo(f3)));
f3=px_pack((f64)(f32)px_pmul(px_hi(f3),px_hi(f3)),(f64)(f32)px_pmul(px_lo(f3),px_lo(f3)));
f3=px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f2),px_hi(f3),px_hi(f4))),px_pfnm((f64)(f32)px_pfms(px_lo(f2),px_lo(f3),px_lo(f4))));f18=(f64)(f32)px_pmul(f1,f3);
f19=(f64)(f32)px_pmul((f64)rdf32(0x817fdeb4u),f3);}else{f18=(f64)rdf32(0x80577c18u);}a=za;a.r[0]=param_1;a.r[1]=(u32)rd16(r30)&0x800u;a.f[0]=f1;a.f[1]=f2;
a.f[2]=f3;a.f[3]=f4;r3=tc_call(rd32(rd32(param_1)+0x10u),&a);f1=tc_lastf();r18=r3;a=za;a.r[0]=param_1;a.r[1]=(u32)rd16(r30)&0x800u;a.f[0]=f1;
r3=tc_call(rd32(rd32(param_1)+0x14u),&a);f1=tc_lastf();r28=r3;r27=1u;a=za;a.r[0]=(u32)param_3;a.r[1]=tc_lastr4();a.f[0]=f1;r3=tc_call(r18,&a);f1=tc_lastf();
f2=0.0;f3=0.0;f29=rdf64(0x80577c30u);r26=r3;f30=(f64)rdf32(0x80577c20u);f31=(f64)rdf32(0x80577c10u);f28=(f64)rdf32(0x80577c1cu);while(r3!=0u){
if(rd32(r3+0xcu)==1u){f2=(f64)rdf32(r3+0x30u);f1=(f64)rdf32(r3+0x38u);r4=rd32(r3+0xc8u);f3=(f64)(f32)px_pmul(f2,f1);
f21=(f64)(f32)px_pmul(f3,(f64)rdf32(r4+0x58u));if(!(f21<f28)){r0=(u32)rd16(rd32(r4+0x24u)+0x9cu)&0x6000u;c0lt=(s32)r0<16384;if(r0==0x4000u){
f3=(f64)(f32)px_pmul((f64)rdf32(r26+0x34u),f1);}else if(!c0lt){if(r0!=0x6000u){f1=(f64)rdf32(r26+0x34u);f3=(f64)(f32)px_pmul(f1,(f64)rdf32(r26+0x3cu));}
}else if(r0==0x2000u){f3=(f64)(f32)px_pmul(f2,(f64)rdf32(r26+0x3cu));}else{f1=(f64)rdf32(r26+0x34u);f3=(f64)(f32)px_pmul(f1,(f64)rdf32(r26+0x3cu));}
f20=(f64)(f32)px_pmul(f3,(f64)rdf32(r4+0x5cu));if(!(f20<f28)){a=za;a.r[0]=param_1;a.r[1]=r26;a.r[2]=r30;a.r[3]=param_2;a.r[4]=r27;(void)tc_call(0x80326730u,&a);
r0=(u32)rd8(r26+0x9au);r27=0u;f2=(f64)rdf32(r26+0x40u);f1=(f64)rdf32(r26+0x44u);f0=(f64)rdf32(r26+0x48u);wrf32d(0x817fddd8u,f2);wrf32d(0x817fdddcu,f1);
wrf32d(0x817fdde0u,f0);if(r0!=0u){wr32(0x817fded4u,r0);
wrf32d(0x817fddd8u,(f64)(f32)px_padd(f2,(f64)(f32)px_pmul(f30,(f64)(f32)px_psub(rdf64(0x817fded0u),f29))));}r0=(u32)rd8(r26+0x9bu);if(r0!=0u){
wr32(0x817fdedcu,r0);wrf32d(0x817fdddcu,(f64)(f32)px_padd((f64)rdf32(0x817fdddcu),(f64)(f32)px_pmul(f30,(f64)(f32)px_psub(rdf64(0x817fded8u),f29))));}
r0=(u32)rd8(r26+0x9cu);if(r0!=0u){wr32(0x817fded4u,r0);
wrf32d(0x817fdde0u,(f64)(f32)px_padd((f64)rdf32(0x817fdde0u),(f64)(f32)px_pmul(f30,(f64)(f32)px_psub(rdf64(0x817fded0u),f29))));}r6=rd32(r26+0xc8u);
f1=(f64)rdf32(0x817fdde0u);f0=(f64)rdf32(r6+0x68u);f2=(f64)(f32)px_padd((f64)rdf32(0x817fdddcu),(f64)rdf32(r6+0x64u));
wrf32d(0x817fddd8u,(f64)(f32)px_padd((f64)rdf32(0x817fddd8u),(f64)rdf32(r6+0x60u)));f0=(f64)(f32)px_padd(f1,f0);wrf32d(0x817fdddcu,f2);wrf32d(0x817fdde0u,f0);
a=za;a.r[0]=0x817fde70u;a.r[1]=r26+0xacu;a.r[2]=0x817fdde4u;(void)tc_call(0x8023411cu,&a);f0=(f64)rdf32(0x817fdde0u);f22=(f64)(f32)px_pmul(f27,f19);
f23=(f64)(f32)px_pmul(f27,f18);f24=(f64)rdf32(0x817fddd0u);f25=(f64)rdf32(0x817fddd4u);if(f31==f0){f6=(f64)rdf32(0x817fdde4u);f4=(f64)rdf32(0x817fdde8u);
f0=(f64)(f32)px_pmul(f26,f21);f2=(f64)rdf32(0x817fddecu);f3=(f64)(f32)px_psub((f64)(f32)px_pmul(f25,f20),f25);wrf32d(0x817fddfcu,f0);wrf32d(0x817fde08u,f0);
f5=(f64)(f32)px_padd(f4,(f64)(f32)px_pmul(f22,f3));f3=(f64)(f32)px_pmul(f23,f3);
f6=(f64)(f32)px_padd(f6,(f64)(f32)px_pmul(f26,(f64)(f32)px_psub(f24,(f64)(f32)px_pmul(f24,f21))));wrf32d(0x817fddf4u,f5);wrf32d(0x817fddf0u,f6);
wrf32d(0x817fddf8u,(f64)(f32)px_padd(f2,f3));wrf32d(0x817fde00u,(f64)(f32)px_pmul(f22,f20));wrf32d(0x817fde04u,(f64)(f32)px_pmul(f23,f20));
wrf32d(0x817fde0cu,(f64)(f32)px_pmul(-f22,f20));wrf32d(0x817fde10u,(f64)(f32)px_pmul(-f23,f20));}else{a=za;a.f[0]= -f0;a.r[0]=0x817fddc8u;a.r[1]=0x817fddccu;
(void)tc_call(0x80320a58u,&a);f2=(f64)rdf32(0x817fddccu);f1=(f64)rdf32(0x817fddc8u);f0=(f64)(f32)px_pmul(f2,f21);f12=(f64)(f32)px_pmul(f1,f21);
f11=(f64)(f32)px_pmul(f2,f20);f10=(f64)(f32)px_pmul(f1,f20);f9=(f64)(f32)px_padd((f64)(f32)px_psub(-f25,(f64)(f32)px_pmul(f12,f24)),(f64)(f32)px_pmul(f11,f25));
f1=(f64)(f32)px_padd(f12,f11);f2=(f64)(f32)px_psub(f12,f11);f7=(f64)(f32)px_pmul(f22,f9);f5=(f64)(f32)px_pmul(f23,f9);
f9=(f64)(f32)px_pmul(f26,(f64)(f32)px_psub((f64)(f32)px_psub(f24,(f64)(f32)px_pmul(f0,f24)),(f64)(f32)px_pmul(f10,f25)));f3=(f64)(f32)px_psub(f0,f10);
f0=(f64)(f32)px_padd(f0,f10);f9=(f64)(f32)px_padd((f64)rdf32(0x817fdde4u),f9);f8=(f64)(f32)px_padd((f64)rdf32(0x817fdde8u),f7);
f7=(f64)(f32)px_padd((f64)rdf32(0x817fddecu),f5);wrf32d(0x817fddf0u,f9);wrf32d(0x817fddf4u,f8);wrf32d(0x817fddf8u,f7);
wrf32d(0x817fddfcu,(f64)(f32)px_pmul(f26,f3));wrf32d(0x817fde00u,(f64)(f32)px_pmul(f22,f1));wrf32d(0x817fde04u,(f64)(f32)px_pmul(f23,f1));
wrf32d(0x817fde08u,(f64)(f32)px_pmul(f26,f0));wrf32d(0x817fde0cu,(f64)(f32)px_pmul(f22,f2));wrf32d(0x817fde10u,(f64)(f32)px_pmul(f23,f2));}a=za;a.r[0]=0x80u;
a.r[2]=4u;(void)tc_call(0x80250b74u,&a);f3=0.0;f0=px_pack((f64)rdf32(0x817fddf0u),(f64)rdf32(0x817fddf0u));
f1=px_pack((f64)rdf32(0x817fddfcu),(f64)rdf32(0x817fddfcu));f2=px_pack((f64)(f32)px_psub(px_hi(f0),px_hi(f1)),(f64)(f32)px_psub(px_lo(f0),px_lo(f1)));
f0=px_pack((f64)rdf32(0x817fddf8u),1.0);f1=px_pack((f64)rdf32(0x817fde04u),1.0);wrf32d(0x817fde38u,px_hi(f2));wrf32d(0x817fde38u,px_lo(f2));
f2=px_pack((f64)(f32)px_psub(px_hi(f0),px_hi(f1)),(f64)(f32)px_psub(px_lo(f0),px_lo(f1)));f0=(f64)rdf32(0x817fde38u);wrf32d(0x817fde40u,px_hi(f2));
f1=(f64)rdf32(0x817fde3cu);wrf32d(0xcc008000u,f0);f0=(f64)rdf32(0x817fde40u);wrf32d(0xcc008000u,f1);wrf32d(0xcc008000u,f0);if(r29!=0u){wr8(0xcc008000u,0u);}
f0=px_pack((f64)rdf32(0x817fddf0u),(f64)rdf32(0x817fddf0u));f1=px_pack((f64)rdf32(0x817fde08u),(f64)rdf32(0x817fde08u));
f2=px_pack((f64)(f32)px_psub(px_hi(f0),px_hi(f1)),(f64)(f32)px_psub(px_lo(f0),px_lo(f1)));f0=px_pack((f64)rdf32(0x817fddf8u),1.0);
f1=px_pack((f64)rdf32(0x817fde10u),1.0);wrf32d(0x817fde2cu,px_hi(f2));wrf32d(0x817fde2cu,px_lo(f2));
f2=px_pack((f64)(f32)px_psub(px_hi(f0),px_hi(f1)),(f64)(f32)px_psub(px_lo(f0),px_lo(f1)));f0=(f64)rdf32(0x817fde2cu);wrf32d(0x817fde34u,px_hi(f2));
f1=(f64)rdf32(0x817fde30u);wrf32d(0xcc008000u,f0);f0=(f64)rdf32(0x817fde34u);wrf32d(0xcc008000u,f1);wrf32d(0xcc008000u,f0);if(r29!=0u){wr8(0xcc008000u,1u);}
f0=px_pack((f64)rdf32(0x817fddf0u),(f64)rdf32(0x817fddf0u));f1=px_pack((f64)rdf32(0x817fddfcu),(f64)rdf32(0x817fddfcu));
f2=px_pack((f64)(f32)px_padd(px_hi(f0),px_hi(f1)),(f64)(f32)px_padd(px_lo(f0),px_lo(f1)));f0=px_pack((f64)rdf32(0x817fddf8u),1.0);
f1=px_pack((f64)rdf32(0x817fde04u),1.0);wrf32d(0x817fde20u,px_hi(f2));wrf32d(0x817fde20u,px_lo(f2));
f2=px_pack((f64)(f32)px_padd(px_hi(f0),px_hi(f1)),(f64)(f32)px_padd(px_lo(f0),px_lo(f1)));f0=(f64)rdf32(0x817fde20u);wrf32d(0x817fde28u,px_hi(f2));
f1=(f64)rdf32(0x817fde24u);wrf32d(0xcc008000u,f0);f0=(f64)rdf32(0x817fde28u);wrf32d(0xcc008000u,f1);wrf32d(0xcc008000u,f0);if(r29!=0u){wr8(0xcc008000u,2u);}
f0=px_pack((f64)rdf32(0x817fddf0u),(f64)rdf32(0x817fddf0u));f1=px_pack((f64)rdf32(0x817fde08u),(f64)rdf32(0x817fde08u));
f2=px_pack((f64)(f32)px_padd(px_hi(f0),px_hi(f1)),(f64)(f32)px_padd(px_lo(f0),px_lo(f1)));f0=px_pack((f64)rdf32(0x817fddf8u),1.0);
f1=px_pack((f64)rdf32(0x817fde10u),1.0);wrf32d(0x817fde14u,px_hi(f2));wrf32d(0x817fde14u,px_lo(f2));
f2=px_pack((f64)(f32)px_padd(px_hi(f0),px_hi(f1)),(f64)(f32)px_padd(px_lo(f0),px_lo(f1)));f0=(f64)rdf32(0x817fde14u);wrf32d(0x817fde1cu,px_hi(f2));
f1=(f64)rdf32(0x817fde18u);wrf32d(0xcc008000u,f0);f0=(f64)rdf32(0x817fde1cu);wrf32d(0xcc008000u,f1);wrf32d(0xcc008000u,f0);if(r29!=0u){wr8(0xcc008000u,3u);}}}}
a=za;a.r[0]=(u32)param_3;a.r[1]=r26;a.f[0]=f1;a.f[1]=f2;a.f[2]=f3;r3=tc_call(r28,&a);f1=tc_lastf();f2=0.0;f3=0.0;r26=r3;}return;}return;}}
wr32(0x817fdd30u,0x817fe000u);wr32(0x817fe004u,0x817ff000u);wrf64(0x817fdff0u,0.0);wrf32d(0x817fdff8u,px_hi(0.0));wrf32d(0x817fdff8u,px_lo(0.0));
wrf64(0x817fdfe0u,0.0);wrf32d(0x817fdfe8u,px_hi(0.0));wrf32d(0x817fdfe8u,px_lo(0.0));wrf64(0x817fdfd0u,0.0);wrf32d(0x817fdfd8u,px_hi(0.0));
wrf32d(0x817fdfd8u,px_lo(0.0));wrf64(0x817fdfc0u,0.0);wrf32d(0x817fdfc8u,px_hi(0.0));wrf32d(0x817fdfc8u,px_lo(0.0));wrf64(0x817fdfb0u,0.0);
wrf32d(0x817fdfb8u,px_hi(0.0));wrf32d(0x817fdfb8u,px_lo(0.0));wrf64(0x817fdfa0u,0.0);wrf32d(0x817fdfa8u,px_hi(0.0));wrf32d(0x817fdfa8u,px_lo(0.0));
wrf64(0x817fdf90u,0.0);wrf32d(0x817fdf98u,px_hi(0.0));wrf32d(0x817fdf98u,px_lo(0.0));wrf64(0x817fdf80u,0.0);wrf32d(0x817fdf88u,px_hi(0.0));
wrf32d(0x817fdf88u,px_lo(0.0));wrf64(0x817fdf70u,0.0);wrf32d(0x817fdf78u,px_hi(0.0));wrf32d(0x817fdf78u,px_lo(0.0));wrf64(0x817fdf60u,0.0);
wrf32d(0x817fdf68u,px_hi(0.0));wrf32d(0x817fdf68u,px_lo(0.0));wrf64(0x817fdf50u,0.0);wrf32d(0x817fdf58u,px_hi(0.0));wrf32d(0x817fdf58u,px_lo(0.0));
wrf64(0x817fdf40u,0.0);wrf32d(0x817fdf48u,px_hi(0.0));wrf32d(0x817fdf48u,px_lo(0.0));wrf64(0x817fdf30u,0.0);wrf32d(0x817fdf38u,px_hi(0.0));
wrf32d(0x817fdf38u,px_lo(0.0));wrf64(0x817fdf20u,0.0);wrf32d(0x817fdf28u,px_hi(0.0));wrf32d(0x817fdf28u,px_lo(0.0));wrf64(0x817fdf10u,0.0);
wrf32d(0x817fdf18u,px_hi(0.0));wrf32d(0x817fdf18u,px_lo(0.0));wrf64(0x817fdf00u,0.0);wrf32d(0x817fdf08u,px_hi(0.0));wrf32d(0x817fdf08u,px_lo(0.0));
wrf64(0x817fdef0u,0.0);wrf32d(0x817fdef8u,px_hi(0.0));wrf32d(0x817fdef8u,px_lo(0.0));wrf64(0x817fdee0u,0.0);wrf32d(0x817fdee8u,px_hi(0.0));
wrf32d(0x817fdee8u,px_lo(0.0));wr32(0x817fdea8u,0u);wr32(0x817fdeacu,0u);wr32(0x817fdeb0u,0u);wr32(0x817fdeb4u,0u);wr32(0x817fdeb8u,0u);wr32(0x817fdebcu,0u);
wr32(0x817fdec0u,0u);wr32(0x817fdec4u,0u);wr32(0x817fdec8u,0u);wr32(0x817fdeccu,0u);wr32(0x817fded0u,0u);wr32(0x817fded4u,0u);wr32(0x817fded8u,0u);
wr32(0x817fdedcu,0u);r20=rd32(param_2);r19=rd32(param_2+4u);c0eq=(f64)rdf32(0x80577c10u)==(f64)rdf32(param_2+0x88u);r12=rd32(param_2+8u);r11=rd32(param_2+0xcu);
r10=rd32(param_2+0x10u);r9=rd32(param_2+0x14u);r8=rd32(param_2+0x18u);r7=rd32(param_2+0x1cu);r6=rd32(param_2+0x20u);r5=rd32(param_2+0x24u);
r3=rd32(param_2+0x28u);r0=rd32(param_2+0x2cu);wr32(0x817fde70u,0x43300000u);wr32(0x817fde78u,0x43300000u);wr32(0x817fde40u,r20);wr32(0x817fde44u,r19);
wr32(0x817fde48u,r12);wr32(0x817fde4cu,r11);wr32(0x817fde50u,r10);wr32(0x817fde54u,r9);wr32(0x817fde58u,r8);wr32(0x817fde5cu,r7);wr32(0x817fde60u,r6);
wr32(0x817fde64u,r5);wr32(0x817fde68u,r3);wr32(0x817fde6cu,r0);if(!c0eq){a=za;a.r[0]=0x817fddc0u;(void)tc_call(0x80254460u,&a);f7=(f64)rdf32(0x817fddc0u);
f7=px_ctiw(f7,ppc_fctiwz(f7));wrf64(0x817fde80u,f7);r0=rd32(0x817fde84u);c0lt=(s32)r0<1;if(r0==1u){
wrf32d(0x817fde6cu,(f64)(f32)px_padd((f64)rdf32(0x817fde6cu),(f64)rdf32(param_2+0x88u)));}else if(c0lt&&(s32)r0>=0){a=za;a.r[0]=param_2;a.r[1]=param_2+0x8cu;
a.r[2]=0x817fddb4u;(void)tc_call(0x8023411cu,&a);a=za;a.r[0]=0x817fddb4u;a.r[1]=0x817fddb4u;r3=tc_call(0x80320984u,&a);if(r3==0u){
wrf32d(0x817fde6cu,(f64)(f32)px_padd((f64)rdf32(0x817fde6cu),(f64)rdf32(param_2+0x88u)));}else{f13=(f64)rdf32(0x817fddbcu);f7=(f64)rdf32(0x80577c10u);
if(!((f13>f7)||(f13==f7))){f15=(f64)rdf32(param_2+0x88u);f13=(f64)(f32)px_pmul(f13,f15);f17=(f64)(f32)px_pmul((f64)rdf32(0x817fddb4u),f15);
f15=(f64)(f32)px_pmul((f64)rdf32(0x817fddb8u),f15);f14=(f64)(f32)px_psub((f64)rdf32(0x817fde5cu),f15);f7=(f64)(f32)px_psub((f64)rdf32(0x817fde6cu),f13);
wrf32d(0x817fde4cu,(f64)(f32)px_psub((f64)rdf32(0x817fde4cu),f17));wrf32d(0x817fde5cu,f14);wrf32d(0x817fde6cu,f7);}else{f15=(f64)rdf32(param_2+0x88u);
f13=(f64)(f32)px_pmul(f13,f15);f17=(f64)(f32)px_pmul((f64)rdf32(0x817fddb4u),f15);f15=(f64)(f32)px_pmul((f64)rdf32(0x817fddb8u),f15);
f14=(f64)(f32)px_padd((f64)rdf32(0x817fde5cu),f15);f7=(f64)(f32)px_padd((f64)rdf32(0x817fde6cu),f13);
wrf32d(0x817fde4cu,(f64)(f32)px_padd((f64)rdf32(0x817fde4cu),f17));wrf32d(0x817fde5cu,f14);wrf32d(0x817fde6cu,f7);}}}}r31=rd32((u32)param_3+0x24u)+0x9cu;a=za;
a.r[0]=param_1;a.r[1]=param_2;a.r[2]=(u32)param_3;(void)tc_call(0x80329848u,&a);r7=(u32)rd8(param_1+0xc0u);f15=rdf64(0x80577c28u);f14=(f64)rdf32(0x80577c14u);
r0=(u32)(s8)rd8(r31+0xaau)^0x80000000u;wr32(0x817fde74u,(u32)(s8)rd8(r31+0xa9u)^0x80000000u);wr32(0x817fde7cu,r0);r30=(((0u-r7)|r7)>>0x1fu)&1u;
f7=(f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(0x817fde78u),f15),f14);wrf32d(0x817fdd40u,(f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(0x817fde70u),f15),f14));
wrf32d(0x817fdd44u,f7);a=za;a.r[0]=(u32)param_3;a.r[1]=0x817fde10u;(void)tc_call(0x8031efa8u,&a);a=za;a.r[0]=0x817fde40u;a.r[1]=0x817fde10u;a.r[2]=0x817fde10u;
(void)tc_call(0x802337a0u,&a);a=za;a.r[0]=0x817fde10u;f1=tc_callf(0x80320f2cu,&a);f21=f1;a=za;a.r[0]=0x817fde10u;a.r[1]=1u;f1=tc_callf(0x80320f2cu,&a);
f13=(f64)rdf32(0x817fde44u);f20=f1;f7=(f64)rdf32(0x817fde54u);f13=(f64)(f32)px_pmul(f13,f13);f14=(f64)rdf32(0x80577c10u);f7=(f64)(f32)px_pmul(f7,f7);
f15=(f64)(f32)px_padd(f13,f7);if(!((f15<f14)||(f15==f14))){a=za;a.f[0]=f15;f1=tc_callf(0x802eff54u,&a);f7=0.0;f14=(f64)(f32)px_pmul(f15,f1);}
if((u32)rd8(r31+0xadu)==3u){f23=(f64)rdf32(0x80577c10u);f22=(f64)rdf32(0x80577c18u);}else{f7=(f64)rdf32(0x80577c10u);if(f7!=f14){f15=(f64)(f32)ppc_fres(f14);
f7=(f64)rdf32(0x817fde54u);f16=px_pack((f64)(f32)px_padd(px_hi(f15),px_hi(f15)),(f64)(f32)px_padd(px_lo(f15),px_lo(f15)));
f15=px_pack((f64)(f32)px_pmul(px_hi(f15),px_hi(f15)),(f64)(f32)px_pmul(px_lo(f15),px_lo(f15)));
f15=px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f14),px_hi(f15),px_hi(f16))),px_pfnm((f64)(f32)px_pfms(px_lo(f14),px_lo(f15),px_lo(f16))));
f23=(f64)(f32)px_pmul(-(f64)rdf32(0x817fde44u),f15);f22=(f64)(f32)px_pmul(f7,f15);}else{f23=(f64)rdf32(0x80577c10u);f22=(f64)rdf32(0x80577c18u);}}a=za;
a.r[0]=param_1;a.r[1]=(u32)rd16(r31)&0x800u;a.f[0]=f1;a.f[6]=f7;r3=tc_call(rd32(rd32(param_1)+0x10u),&a);f1=tc_lastf();r18=r3;a=za;a.r[0]=param_1;
a.r[1]=(u32)rd16(r31)&0x800u;a.f[0]=f1;r3=tc_call(rd32(rd32(param_1)+0x14u),&a);f1=tc_lastf();r29=r3;r28=1u;a=za;a.r[0]=(u32)param_3;a.r[1]=tc_lastr4();
a.f[0]=f1;r3=tc_call(r18,&a);f1=tc_lastf();r27=r3;f17=(f64)rdf32(0x80577c10u);f19=rdf64(0x80577c30u);f18=(f64)rdf32(0x80577c20u);
wrf64(0x817fde88u,(f64)rdf32(0x80577c1cu));while(r3!=0u){f14=(f64)rdf32(r3+0x30u);f13=(f64)rdf32(r3+0x38u);r4=rd32(r3+0xc8u);f15=(f64)(f32)px_pmul(f14,f13);
f27=(f64)(f32)px_pmul(f15,(f64)rdf32(r4+0x58u));f7=rdf64(0x817fde88u);if(!(f27<f7)){r0=(u32)rd16(rd32(r4+0x24u)+0x9cu)&0x6000u;c0lt=(s32)r0<16384;
if(r0==0x4000u){f15=(f64)(f32)px_pmul((f64)rdf32(r27+0x34u),f13);}else if(!c0lt){if(r0!=0x6000u){
f15=(f64)(f32)px_pmul((f64)rdf32(r27+0x34u),(f64)rdf32(r27+0x3cu));}}else if(r0==0x2000u){f15=(f64)(f32)px_pmul(f14,(f64)rdf32(r27+0x3cu));}else{
f15=(f64)(f32)px_pmul((f64)rdf32(r27+0x34u),(f64)rdf32(r27+0x3cu));}f26=(f64)(f32)px_pmul(f15,(f64)rdf32(r4+0x5cu));f7=rdf64(0x817fde88u);if(!(f26<f7)){a=za;
a.r[0]=param_1;a.r[1]=r27;a.r[2]=r31;a.r[3]=param_2;a.r[4]=r28;(void)tc_call(0x80326730u,&a);r0=(u32)rd8(r27+0x9au);r28=0u;f14=(f64)rdf32(r27+0x40u);
f13=(f64)rdf32(r27+0x44u);f7=(f64)rdf32(r27+0x48u);wrf32d(0x817fdd48u,f14);wrf32d(0x817fdd4cu,f13);wrf32d(0x817fdd50u,f7);if(r0!=0u){wr32(0x817fde74u,r0);
wrf32d(0x817fdd48u,(f64)(f32)px_padd(f14,(f64)(f32)px_pmul(f18,(f64)(f32)px_psub(rdf64(0x817fde70u),f19))));}r0=(u32)rd8(r27+0x9bu);if(r0!=0u){
wr32(0x817fde7cu,r0);wrf32d(0x817fdd4cu,(f64)(f32)px_padd((f64)rdf32(0x817fdd4cu),(f64)(f32)px_pmul(f18,(f64)(f32)px_psub(rdf64(0x817fde78u),f19))));}
r0=(u32)rd8(r27+0x9cu);if(r0!=0u){wr32(0x817fde74u,r0);
wrf32d(0x817fdd50u,(f64)(f32)px_padd((f64)rdf32(0x817fdd50u),(f64)(f32)px_pmul(f18,(f64)(f32)px_psub(rdf64(0x817fde70u),f19))));}r3=rd32(r27+0xc8u);
f7=(f64)(f32)px_padd((f64)rdf32(0x817fdd50u),(f64)rdf32(r3+0x68u));f15=(f64)(f32)px_padd((f64)rdf32(0x817fdd48u),(f64)rdf32(r3+0x60u));
f13=(f64)(f32)px_padd((f64)rdf32(0x817fdd4cu),(f64)rdf32(r3+0x64u));wrf32d(0x817fdd50u,f7);wrf32d(0x817fdd48u,f15);wrf32d(0x817fdd4cu,f13);if(f17==f7){
f13=px_pmg00(f23,f22);t99=r27+0xacu;f0=px_pack((f64)rdf32(t99),(f64)rdf32(t99));f2=px_pack((f64)rdf32(0x817fde10u),(f64)rdf32(0x817fde10u));
f7=px_pmg00(f27,f26);f8=px_pack((f64)rdf32(0x817fde20u),(f64)rdf32(0x817fde20u));
f4=px_pack((f64)(f32)px_pmul(px_hi(f2),px_hi(f0)),(f64)(f32)px_pmul(px_lo(f2),px_lo(f0)));f1=px_pack((f64)rdf32(r27+0xb4u),1.0);
f24=px_pack((f64)(f32)px_pmul(px_hi(f13),px_hi(f20)),(f64)(f32)px_pmul(px_lo(f13),px_hi(f20)));f3=px_pack((f64)rdf32(0x817fde18u),(f64)rdf32(0x817fde18u));
f25=px_pack((f64)(f32)px_pmul(px_hi(f13),px_hi(f21)),(f64)(f32)px_pmul(px_lo(f13),px_hi(f21)));f9=px_pack((f64)rdf32(0x817fde28u),(f64)rdf32(0x817fde28u));
f5=px_pack((f64)(f32)px_pfma(px_hi(f3),px_hi(f1),px_hi(f4)),(f64)(f32)px_pfma(px_lo(f3),px_lo(f1),px_lo(f4)));
f13=px_pack((f64)rdf32(0x817fdd40u),(f64)rdf32(0x817fdd40u));f10=px_pack((f64)(f32)px_pmul(px_hi(f8),px_hi(f0)),(f64)(f32)px_pmul(px_lo(f8),px_lo(f0)));
f2=px_pack((f64)rdf32(0x817fde30u),(f64)rdf32(0x817fde30u));f3=px_pack((f64)rdf32(0x817fde38u),(f64)rdf32(0x817fde38u));
f11=px_pack((f64)(f32)px_pfma(px_hi(f9),px_hi(f1),px_hi(f10)),(f64)(f32)px_pfma(px_lo(f9),px_lo(f1),px_lo(f10)));f25=px_pmg10(f25,f25);
f14=px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f7),px_hi(f13),px_hi(f13))),px_pfnm((f64)(f32)px_pfms(px_lo(f7),px_lo(f13),px_lo(f13))));
f24=px_pmg01(f24,px_pneg(f24));f13=px_pack((f64)(f32)px_pmul(px_hi(f25),px_hi(f7)),(f64)(f32)px_pmul(px_lo(f25),px_hi(f7)));
f6=px_pack((f64)(f32)px_padd(px_hi(f5),px_lo(0.0)),px_lo(f5));f7=px_pack((f64)(f32)px_pmul(px_hi(f24),px_lo(f7)),(f64)(f32)px_pmul(px_lo(f24),px_lo(f7)));
f4=px_pack((f64)(f32)px_pmul(px_hi(f2),px_hi(f0)),(f64)(f32)px_pmul(px_lo(f2),px_lo(f0)));
f15=px_pmg00(f6,px_pack((f64)(f32)px_padd(px_hi(f11),px_lo(0.0)),px_lo(f11)));
f5=px_pack((f64)(f32)px_pfma(px_hi(f3),px_hi(f1),px_hi(f4)),(f64)(f32)px_pfma(px_lo(f3),px_lo(f1),px_lo(f4)));
f26=px_pack((f64)(f32)px_pfma(px_hi(f25),px_hi(f14),px_hi(f15)),(f64)(f32)px_pfma(px_lo(f25),px_hi(f14),px_lo(f15)));
f15=px_pack((f64)(f32)px_padd(px_hi(f13),px_hi(f7)),(f64)(f32)px_padd(px_lo(f13),px_lo(f7)));f7=px_pneg(f7);
f14=px_pack((f64)(f32)px_pfma(px_hi(f24),px_lo(f14),px_hi(f26)),(f64)(f32)px_pfma(px_lo(f24),px_lo(f14),px_lo(f26)));
f13=px_pack((f64)(f32)px_padd(px_hi(f13),px_hi(f7)),(f64)(f32)px_padd(px_lo(f13),px_lo(f7)));f7=px_pack((f64)(f32)px_padd(px_hi(f5),px_lo(f6)),px_lo(f5));
f26=px_pack((f64)(f32)px_psub(px_hi(f14),px_hi(f13)),(f64)(f32)px_psub(px_lo(f14),px_lo(f13)));wrf32d(0x817fdde8u,px_hi(f7));wrf32d(0x817fdde0u,px_hi(f26));
wrf32d(0x817fdde0u,px_lo(f26));f26=px_pack((f64)(f32)px_psub(px_hi(f14),px_hi(f15)),(f64)(f32)px_psub(px_lo(f14),px_lo(f15)));wrf32d(0x817fddf4u,px_hi(f7));
wrf32d(0x817fddecu,px_hi(f26));wrf32d(0x817fddecu,px_lo(f26));f26=px_pack((f64)(f32)px_padd(px_hi(f14),px_hi(f13)),(f64)(f32)px_padd(px_lo(f14),px_lo(f13)));
wrf32d(0x817fde00u,px_hi(f7));wrf32d(0x817fddf8u,px_hi(f26));wrf32d(0x817fddf8u,px_lo(f26));
f26=px_pack((f64)(f32)px_padd(px_hi(f14),px_hi(f15)),(f64)(f32)px_padd(px_lo(f14),px_lo(f15)));wrf32d(0x817fde0cu,px_hi(f7));wrf32d(0x817fde04u,px_hi(f26));
wrf32d(0x817fde04u,px_lo(f26));a=za;a.r[0]=0x80u;a.r[2]=4u;f1=tc_callf(0x80250b74u,&a);f13=(f64)rdf32(0x817fdde4u);wrf32d(0xcc008000u,(f64)rdf32(0x817fdde0u));
f7=(f64)rdf32(0x817fdde8u);wrf32d(0xcc008000u,f13);wrf32d(0xcc008000u,f7);if(r30!=0u){wr8(0xcc008000u,0u);}f13=(f64)rdf32(0x817fddf0u);
wrf32d(0xcc008000u,(f64)rdf32(0x817fddecu));f7=(f64)rdf32(0x817fddf4u);wrf32d(0xcc008000u,f13);wrf32d(0xcc008000u,f7);if(r30!=0u){wr8(0xcc008000u,1u);}
f13=(f64)rdf32(0x817fddfcu);wrf32d(0xcc008000u,(f64)rdf32(0x817fddf8u));f7=(f64)rdf32(0x817fde00u);wrf32d(0xcc008000u,f13);wrf32d(0xcc008000u,f7);if(r30!=0u){
wr8(0xcc008000u,2u);}f13=(f64)rdf32(0x817fde08u);wrf32d(0xcc008000u,(f64)rdf32(0x817fde04u));f7=(f64)rdf32(0x817fde0cu);wrf32d(0xcc008000u,f13);
wrf32d(0xcc008000u,f7);if(r30!=0u){wr8(0xcc008000u,3u);}}else{a=za;a.r[0]=0x817fde10u;a.r[1]=r27+0xacu;a.r[2]=0x817fdd54u;(void)tc_call(0x8023411cu,&a);
f30=(f64)(f32)px_pmul(f21,f22);f31=(f64)(f32)px_pmul(f21,f23);f28=(f64)rdf32(0x817fdd40u);f25=(f64)(f32)px_pmul(f20,f22);f29=(f64)rdf32(0x817fdd44u);
f24=(f64)(f32)px_pmul(f20,f23);a=za;a.f[0]= -(f64)rdf32(0x817fdd50u);a.r[0]=0x817fdd3cu;a.r[1]=0x817fdd38u;(void)tc_call(0x80320a58u,&a);
f13=(f64)rdf32(0x817fdd38u);f16=(f64)(f32)px_pmul(f13,f27);f7=(f64)rdf32(0x817fdd3cu);f14=(f64)rdf32(0x817fdd5cu);f13=(f64)(f32)px_pmul(f13,f26);
f27=(f64)(f32)px_pmul(f7,f27);wrf64(0x817fde90u,(f64)rdf32(0x817fdd54u));f15=(f64)rdf32(0x817fdd58u);f7=(f64)(f32)px_pmul(f7,f26);wrf32d(0x817fdd68u,f14);
wrf64(0x817fde98u,f15);f26=(f64)(f32)px_padd(f29,(f64)(f32)px_pmul(f27,f28));wrf32d(0x817fdd74u,f17);f28=(f64)(f32)px_psub(f28,(f64)(f32)px_pmul(f16,f28));
f15=(f64)(f32)px_pmul(f7,f29);wrf32d(0x817fdd80u,f17);f29=(f64)(f32)px_psub(f26,(f64)(f32)px_pmul(f13,f29));f26=(f64)(f32)px_pmul(f30,f7);
f15=(f64)(f32)px_psub(f28,f15);f28=(f64)(f32)px_pmul(f30,f16);f16=(f64)(f32)px_pmul(f31,f16);f14=(f64)(f32)px_pmul(f30,f15);f15=(f64)(f32)px_pmul(f31,f15);
f7=(f64)(f32)px_pmul(f31,f7);f30=(f64)(f32)px_padd(f14,(f64)(f32)px_pmul(f24,f29));f14=(f64)(f32)px_psub(f28,f26);f31=(f64)(f32)px_pmul(f24,f27);
f29=(f64)(f32)px_pmul(f25,f29);f26=(f64)(f32)px_padd(f28,f26);f27=(f64)(f32)px_pmul(f25,f27);f28=(f64)(f32)px_psub(f15,f29);f25=(f64)(f32)px_pmul(f25,f13);
f15=(f64)(f32)px_psub(f16,f7);f16=(f64)(f32)px_padd(f16,f7);f7=rdf64(0x817fde98u);wrf32d(0x817fdd60u,(f64)(f32)px_padd(rdf64(0x817fde90u),f30));
f28=(f64)(f32)px_padd(f7,f28);f7=(f64)(f32)px_pmul(f24,f13);wrf32d(0x817fdd64u,f28);f15=(f64)(f32)px_padd(f27,f15);f15=(f64)(f32)px_padd(f25,f15);
wrf32d(0x817fdd6cu,(f64)(f32)px_psub((f64)(f32)px_psub(f14,f31),f7));wrf32d(0x817fdd70u,f15);
wrf32d(0x817fdd78u,(f64)(f32)px_padd(f7,(f64)(f32)px_psub(f26,f31)));wrf32d(0x817fdd7cu,(f64)(f32)px_psub((f64)(f32)px_padd(f27,f16),f25));a=za;a.r[0]=0x80u;
a.r[2]=4u;f1=tc_callf(0x80250b74u,&a);f7=px_pack((f64)rdf32(0x817fdd60u),(f64)rdf32(0x817fdd60u));f13=px_pack((f64)rdf32(0x817fdd6cu),(f64)rdf32(0x817fdd6cu));
f14=px_pack((f64)(f32)px_psub(px_hi(f7),px_hi(f13)),(f64)(f32)px_psub(px_lo(f7),px_lo(f13)));f7=px_pack((f64)rdf32(0x817fdd68u),1.0);
f13=px_pack((f64)rdf32(0x817fdd74u),1.0);wrf32d(0x817fdda8u,px_hi(f14));wrf32d(0x817fdda8u,px_lo(f14));
f14=px_pack((f64)(f32)px_psub(px_hi(f7),px_hi(f13)),(f64)(f32)px_psub(px_lo(f7),px_lo(f13)));f7=(f64)rdf32(0x817fdda8u);wrf32d(0x817fddb0u,px_hi(f14));
f13=(f64)rdf32(0x817fddacu);wrf32d(0xcc008000u,f7);f7=(f64)rdf32(0x817fddb0u);wrf32d(0xcc008000u,f13);wrf32d(0xcc008000u,f7);if(r30!=0u){wr8(0xcc008000u,0u);}
f7=px_pack((f64)rdf32(0x817fdd60u),(f64)rdf32(0x817fdd60u));f13=px_pack((f64)rdf32(0x817fdd78u),(f64)rdf32(0x817fdd78u));
f14=px_pack((f64)(f32)px_psub(px_hi(f7),px_hi(f13)),(f64)(f32)px_psub(px_lo(f7),px_lo(f13)));f7=px_pack((f64)rdf32(0x817fdd68u),1.0);
f13=px_pack((f64)rdf32(0x817fdd80u),1.0);wrf32d(0x817fdd9cu,px_hi(f14));wrf32d(0x817fdd9cu,px_lo(f14));
f14=px_pack((f64)(f32)px_psub(px_hi(f7),px_hi(f13)),(f64)(f32)px_psub(px_lo(f7),px_lo(f13)));f7=(f64)rdf32(0x817fdd9cu);wrf32d(0x817fdda4u,px_hi(f14));
f13=(f64)rdf32(0x817fdda0u);wrf32d(0xcc008000u,f7);f7=(f64)rdf32(0x817fdda4u);wrf32d(0xcc008000u,f13);wrf32d(0xcc008000u,f7);if(r30!=0u){wr8(0xcc008000u,1u);}
f7=px_pack((f64)rdf32(0x817fdd60u),(f64)rdf32(0x817fdd60u));f13=px_pack((f64)rdf32(0x817fdd6cu),(f64)rdf32(0x817fdd6cu));
f14=px_pack((f64)(f32)px_padd(px_hi(f7),px_hi(f13)),(f64)(f32)px_padd(px_lo(f7),px_lo(f13)));f7=px_pack((f64)rdf32(0x817fdd68u),1.0);
f13=px_pack((f64)rdf32(0x817fdd74u),1.0);wrf32d(0x817fdd90u,px_hi(f14));wrf32d(0x817fdd90u,px_lo(f14));
f14=px_pack((f64)(f32)px_padd(px_hi(f7),px_hi(f13)),(f64)(f32)px_padd(px_lo(f7),px_lo(f13)));f7=(f64)rdf32(0x817fdd90u);wrf32d(0x817fdd98u,px_hi(f14));
f13=(f64)rdf32(0x817fdd94u);wrf32d(0xcc008000u,f7);f7=(f64)rdf32(0x817fdd98u);wrf32d(0xcc008000u,f13);wrf32d(0xcc008000u,f7);if(r30!=0u){wr8(0xcc008000u,2u);}
f7=px_pack((f64)rdf32(0x817fdd60u),(f64)rdf32(0x817fdd60u));f13=px_pack((f64)rdf32(0x817fdd78u),(f64)rdf32(0x817fdd78u));
f14=px_pack((f64)(f32)px_padd(px_hi(f7),px_hi(f13)),(f64)(f32)px_padd(px_lo(f7),px_lo(f13)));f7=px_pack((f64)rdf32(0x817fdd68u),1.0);
f13=px_pack((f64)rdf32(0x817fdd80u),1.0);wrf32d(0x817fdd84u,px_hi(f14));wrf32d(0x817fdd84u,px_lo(f14));
f14=px_pack((f64)(f32)px_padd(px_hi(f7),px_hi(f13)),(f64)(f32)px_padd(px_lo(f7),px_lo(f13)));f7=(f64)rdf32(0x817fdd84u);wrf32d(0x817fdd8cu,px_hi(f14));
f13=(f64)rdf32(0x817fdd88u);wrf32d(0xcc008000u,f7);f7=(f64)rdf32(0x817fdd8cu);wrf32d(0xcc008000u,f13);wrf32d(0xcc008000u,f7);if(r30!=0u){wr8(0xcc008000u,3u);}}}
}a=za;a.r[0]=(u32)param_3;a.r[1]=r27;a.f[0]=f1;a.f[6]=f7;r3=tc_call(r29,&a);f1=tc_lastf();r27=r3;}return;}
