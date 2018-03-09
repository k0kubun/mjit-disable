#include "ruby.h"

extern VALUE rb_cRubyVM;
extern int mjit_init_p;

/* Calling this without --jit would cause SEGV. */
static VALUE
mjit_enable(VALUE self)
{
    mjit_init_p = 1;
    return Qtrue;
}

static VALUE
mjit_disable(VALUE self)
{
    mjit_init_p = 0;
    return Qfalse;
}

void
Init_mjit()
{
    VALUE rb_mMJIT = rb_const_get(rb_cRubyVM, rb_intern("MJIT"));
    rb_define_singleton_method(rb_mMJIT, "enable", mjit_enable, 0);
    rb_define_singleton_method(rb_mMJIT, "disable", mjit_disable, 0);
}
