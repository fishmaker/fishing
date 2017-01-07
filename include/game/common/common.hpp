#ifndef COMMON_H
#define COMMON_H

#include <string>

namespace game {

typedef unsigned char           u8;
typedef unsigned short          u16;
typedef unsigned int            u32;
typedef unsigned long long int	u64;

typedef signed char             i8;
typedef signed short            i16;
typedef signed int              i32;
typedef signed long long int  	i64;

typedef float                   r32;
typedef double                  r64;
typedef long double             r80;

using LString                   = std::string;
using UString                   = std::string; // TODO: if test fails -> std::wstring

} // namespace game

#endif // COMMON_H
