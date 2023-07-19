#ifndef LIB_ARG_HANDLER_HPP
#define LIB_ARG_HANDLER_HPP

#include "ipc_config.hpp"
#include <getopt.h>

class Arg_handler {
public:
    IPC_config m_config{};
    explicit Arg_handler(int argc, char* argv[], IPC_mode mode);
    ~Arg_handler() = default;
};

#endif // LIB_ARG_HANDLER_HPP
