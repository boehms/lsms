/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/lda_c_hl.mpl
  Type of functional: work_lda
*/

static void
func0(const xc_func_type *p, xc_lda_work_t *r)
{
  double t1, t2, t3, t4, t5, t6, t7, t9;
  double t12, t13, t15, t17, t25, t27, t28, t44;
  double t46, t47, t48, t49;

  lda_c_hl_params *params;

  assert(p->params != NULL);
  params = (lda_c_hl_params * )(p->params);

  t1 = params->c[0];
  t2 = r->rs * r->rs;
  t3 = t2 * r->rs;
  t4 = params->r[0];
  t5 = t4 * t4;
  t6 = t5 * t4;
  t7 = 0.1e1 / t6;
  t9 = t3 * t7 + 0.1e1;
  t12 = 0.1e1 + 0.1e1 / r->rs * t4;
  t13 = log(t12);
  t15 = 0.1e1 / t5;
  t17 = 0.1e1 / t4;
  r->f = -t1 * (t9 * t13 - t2 * t15 + r->rs * t17 / 0.2e1 - 0.1e1 / 0.3e1);

  if(r->order < 1) return;

  t25 = 0.1e1 / t2;
  t27 = 0.1e1 / t12;
  t28 = t4 * t27;
  r->dfdrs = -t1 * (0.3e1 * t2 * t7 * t13 - t9 * t25 * t28 - 0.2e1 * r->rs * t15 + t17 / 0.2e1);

  if(r->order < 2) return;

  t44 = t2 * t2;
  t46 = t9 / t44;
  t47 = t12 * t12;
  t48 = 0.1e1 / t47;
  t49 = t5 * t48;
  r->d2fdrs2 = -t1 * (0.6e1 * r->rs * t7 * t13 - 0.6e1 * t15 * t27 + 0.2e1 * t9 / t3 * t28 - t46 * t49 - 0.2e1 * t15);

  if(r->order < 3) return;

  r->d3fdrs3 = -t1 * (0.6e1 * t7 * t13 - 0.9e1 * t17 * t48 * t25 - 0.6e1 * t46 * t28 + 0.6e1 * t9 / t44 / r->rs * t49 - 0.2e1 * t9 / t44 / t2 * t6 / t47 / t12);

  if(r->order < 4) return;


}

static void
func1(const xc_func_type *p, xc_lda_work_t *r)
{
  double t1, t2, t3, t4, t5, t6, t7, t9;
  double t10, t12, t13, t15, t17, t21, t22, t23;
  double t25, t26, t29, t32, t33, t34, t35, t36;
  double t37, t38, t40, t42, t43, t45, t47, t52;
  double t57, t59, t60, t66, t71, t72, t79, t83;
  double t89, t93, t94, t95, t96, t97, t98, t102;
  double t111, t112, t113, t114, t119, t121, t123, t127;
  double t136, t141, t149;

  lda_c_hl_params *params;

  assert(p->params != NULL);
  params = (lda_c_hl_params * )(p->params);

  t1 = params->c[0];
  t2 = r->rs * r->rs;
  t3 = t2 * r->rs;
  t4 = params->r[0];
  t5 = t4 * t4;
  t6 = t5 * t4;
  t7 = 0.1e1 / t6;
  t9 = t3 * t7 + 0.1e1;
  t10 = 0.1e1 / r->rs;
  t12 = t10 * t4 + 0.1e1;
  t13 = log(t12);
  t15 = 0.1e1 / t5;
  t17 = 0.1e1 / t4;
  t21 = t1 * (t9 * t13 - t2 * t15 + r->rs * t17 / 0.2e1 - 0.1e1 / 0.3e1);
  t22 = 0.1e1 + r->z;
  t23 = cbrt(t22);
  t25 = 0.1e1 - r->z;
  t26 = cbrt(t25);
  t29 = M_CBRT2;
  t32 = 0.1e1 / (0.2e1 * t29 - 0.2e1);
  t33 = (t23 * t22 + t26 * t25 - 0.2e1) * t32;
  t34 = params->c[1];
  t35 = params->r[1];
  t36 = t35 * t35;
  t37 = t36 * t35;
  t38 = 0.1e1 / t37;
  t40 = t3 * t38 + 0.1e1;
  t42 = t10 * t35 + 0.1e1;
  t43 = log(t42);
  t45 = 0.1e1 / t36;
  t47 = 0.1e1 / t35;
  t52 = -t34 * (t40 * t43 - t2 * t45 + r->rs * t47 / 0.2e1 - 0.1e1 / 0.3e1) + t21;
  r->f = t33 * t52 - t21;

  if(r->order < 1) return;

  t57 = 0.1e1 / t2;
  t59 = 0.1e1 / t12;
  t60 = t4 * t59;
  t66 = t1 * (0.3e1 * t2 * t7 * t13 - t9 * t57 * t60 - 0.2e1 * r->rs * t15 + t17 / 0.2e1);
  t71 = 0.1e1 / t42;
  t72 = t35 * t71;
  t79 = -t34 * (0.3e1 * t2 * t38 * t43 - t40 * t57 * t72 - 0.2e1 * r->rs * t45 + t47 / 0.2e1) + t66;
  r->dfdrs = t33 * t79 - t66;
  t83 = (0.4e1 / 0.3e1 * t23 - 0.4e1 / 0.3e1 * t26) * t32;
  r->dfdz = t83 * t52;

  if(r->order < 2) return;

  t89 = 0.1e1 / t3;
  t93 = t2 * t2;
  t94 = 0.1e1 / t93;
  t95 = t9 * t94;
  t96 = t12 * t12;
  t97 = 0.1e1 / t96;
  t98 = t5 * t97;
  t102 = t1 * (0.6e1 * r->rs * t7 * t13 + 0.2e1 * t9 * t89 * t60 - 0.6e1 * t15 * t59 - t95 * t98 - 0.2e1 * t15);
  t111 = t40 * t94;
  t112 = t42 * t42;
  t113 = 0.1e1 / t112;
  t114 = t36 * t113;
  t119 = -t34 * (0.6e1 * r->rs * t38 * t43 + 0.2e1 * t40 * t89 * t72 - t111 * t114 - 0.6e1 * t45 * t71 - 0.2e1 * t45) + t102;
  r->d2fdrs2 = t33 * t119 - t102;
  r->d2fdrsz = t83 * t79;
  t121 = t23 * t23;
  t123 = t26 * t26;
  t127 = (0.4e1 / 0.9e1 / t121 + 0.4e1 / 0.9e1 / t123) * t32;
  r->d2fdz2 = t127 * t52;

  if(r->order < 3) return;

  t136 = 0.1e1 / t93 / r->rs;
  t141 = 0.1e1 / t93 / t2;
  t149 = t1 * (0.6e1 * t7 * t13 - 0.9e1 * t17 * t97 * t57 - 0.6e1 * t95 * t60 + 0.6e1 * t9 * t136 * t98 - 0.2e1 * t9 * t141 * t6 / t96 / t12);
  r->d3fdrs3 = -t149 + t33 * (-t34 * (0.6e1 * t38 * t43 - 0.9e1 * t47 * t113 * t57 - 0.6e1 * t111 * t72 + 0.6e1 * t40 * t136 * t114 - 0.2e1 * t40 * t141 * t37 / t112 / t42) + t149);
  r->d3fdrs2z = t83 * t119;
  r->d3fdrsz2 = t127 * t79;
  r->d3fdz3 = (-0.8e1 / 0.27e2 / t121 / t22 + 0.8e1 / 0.27e2 / t123 / t25) * t32 * t52;

  if(r->order < 4) return;


}

void 
xc_lda_c_hl_func(const xc_func_type *p, xc_lda_work_t *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}

#define maple2c_order 3
#define maple2c_func  xc_lda_c_hl_func
