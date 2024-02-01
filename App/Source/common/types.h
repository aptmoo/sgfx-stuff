#ifndef COMMON_TYPES_H
#define COMMON_TYPES_H
#include <cstdint>
#include <cstddef>
#include <memory>

/* Rust-style explicit size types */
typedef std::uint8_t     u8;
typedef std::uint16_t    u16;
typedef std::uint32_t    u32;
typedef std::uint64_t    u64;

typedef std::int8_t      i8;
typedef std::int16_t     i16;
typedef std::int32_t     i32;
typedef std::int64_t     i64;

typedef float            f32;
typedef double           f64;

typedef std::size_t      usize;

/* Smart pointer aliases, as seen in Hazel */
template <typename T>
using Ref = std::shared_ptr<T>;

template <typename T, typename... TArgs>
constexpr Ref<T> MakeRef(TArgs&&... args)
{
    return std::make_shared<T>(std::forward<TArgs>(args)...);
};

template <typename T>
using Scope = std::unique_ptr<T>;

template <typename T, typename... TArgs>
constexpr Scope<T> MakeScope(TArgs&&... args)
{
    return std::make_unique<T>(std::forward<TArgs>(args)...);
};

#endif