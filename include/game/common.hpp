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
using UString                   = std::wstring;

/*
 * TODO: template variable
template<typename T> constexpr T DEFAULT = -1;
template<> constexpr r64 DEFAULT<r64> = -1.0;
template<> constexpr i32 DEFAULT<i32> = -1;
template<> LString DEFAULT<LString> = LString("DEFAULT");
template<> UString DEFAULT<UString> = UString(L"DEFAULT");
*/

} // namespace game

#endif // COMMON_H
