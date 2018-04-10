#pragma once

#include <fltKernel.h>
#include <intrin.h>

#ifdef _WIN64
#define IS_X64 TRUE
#else
#define IS_X64 FALSE
#endif

#ifdef DBG
#define IS_RELEASE FALSE
#else
#define IS_RELEASE TRUE
#endif

#ifndef STATIC
#define STATIC static
#endif

#define POOL_TAG ('thgT')