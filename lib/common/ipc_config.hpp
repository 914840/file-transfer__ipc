#ifndef LIB_COMMON_IPC_CONFIG_HPP
#define LIB_COMMON_IPC_CONFIG_HPP

#include "ipc_mode.hpp"
#include "ipc_protocol.hpp"

#include <string>

#define DEFAULT_MEM_SIZE 4096

struct IPC_config {
    IPC_mode mode{IPC_mode::none};
    IPC_protocol protocol{IPC_protocol::none};
    std::size_t memory_size{DEFAULT_MEM_SIZE};
    std::string file_name{};
    std::string end_point{};
};

#endif // LIB_COMMON_IPC_CONFIG_HPP
