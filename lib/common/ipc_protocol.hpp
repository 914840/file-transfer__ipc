#ifndef LIB_COMMON_IPC_PROTOCOL_HPP
#define LIB_COMMON_IPC_PROTOCOL_HPP

#include <cstdint>

enum class IPC_protocol : std::uint8_t {
    none = 0,
    pipe = 1,
    queue = 2,
    shm = 3,
    uds = 4
};

#endif // LIB_COMMON_IPC_PROTOCOL_HPP
