#ifndef LIB_COMMON_IPC_MODE_HPP
#define LIB_COMMON_IPC_MODE_HPP

#include <cstdint>

enum class IPC_mode : std::uint8_t {
    none = 0,
    tx = 1,
    rx = 2,
};

#endif // LIB_COMMON_IPC_MODE_HPP
