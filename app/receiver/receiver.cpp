#include "arg_handler.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
    Arg_handler handler{argc, argv, IPC_mode::rx};
    std::cout << "end_point: " << handler.m_config.end_point << "\n"
              << "file_name: " << handler.m_config.file_name << "\n"
              << "memory_size: " << handler.m_config.memory_size << "\n"
              << "mode: " << static_cast<int>(handler.m_config.mode) << "\n"
              << "protocol: " << static_cast<int>(handler.m_config.protocol)
              << std::endl;
    return 0;
}
