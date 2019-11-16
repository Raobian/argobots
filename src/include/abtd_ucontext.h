/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 * See COPYRIGHT in top-level directory.
 */

#ifndef ABTD_UCONTEXT_H_INCLUDED
#define ABTD_UCONTEXT_H_INCLUDED

#include "abt_config.h"

typedef void *  fcontext_t;

typedef struct abt_ucontext_t {
    fcontext_t             fctx;    /* actual context */
    void (*f_thread)(void *);       /* ULT function */
    void *                 p_arg;   /* ULT function argument */
    struct abt_ucontext_t *p_link;  /* pointer to scheduler context */
} abt_ucontext_t;

void ABTD_thread_print_context(ABTI_thread *p_thread, FILE *p_os, int indent);

#endif /* ABTD_UCONTEXT_H_INCLUDED */
