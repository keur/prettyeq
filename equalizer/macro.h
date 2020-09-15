#pragma once

#define PRETTY_EXPORT __attribute__ ((visibility ("default")))
#define MAY_ALIAS __attribute__((__may_alias__))

#define SWAP(a, b)              \
    ({                          \
        typeof(a) _tmp_ = b;    \
        b = a;                  \
        a = _tmp_;              \
    })

#define _likely_(x)      __builtin_expect(!!(x), 1)
#define _unlikely_(x)    __builtin_expect(!!(x), 0)