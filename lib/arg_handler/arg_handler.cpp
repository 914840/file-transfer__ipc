#include "arg_handler.hpp"
#include <iostream>

Arg_handler::Arg_handler(int argc, char* argv[], IPC_mode mode)
{
    // List of options
    const char* const short_opts = "f:m:p:q:s:u:h";
    const option long_opts[] = {{"file", required_argument, nullptr, 'f'},
                                {"mem_size", required_argument, nullptr, 'm'},
                                {"pipe", required_argument, nullptr, 'p'},
                                {"queue", required_argument, nullptr, 'q'},
                                {"shm", required_argument, nullptr, 's'},
                                {"uds", required_argument, nullptr, 'u'}};
    // Clear getopt error.
    opterr = 0;
    // Reset index to 1.
    optind = 1;

    // Set mode configuration
    m_config.mode = mode;

    // holds return value of getopt_long().
    int opt{0};

    // Set other configuration base on option arguments.
    while (opt != -1) {
        opt = getopt_long(argc, argv, short_opts, long_opts, nullptr);
        switch (opt) {
        case 'f':
            m_config.file_name = std::string(optarg);
            break;
        case 'm':
            m_config.memory_size = std::stoi(optarg);
            // TODO: decide to catch stoi exceptions: invalid argument &
            // out_of_range or NOT.
            break;
        case 'p':
            m_config.protocol = IPC_protocol::pipe;
            m_config.end_point = std::string(optarg);
            break;
        case 'q':
            m_config.protocol = IPC_protocol::queue;
            m_config.end_point = std::string(optarg);
            break;
        case 's':
            m_config.protocol = IPC_protocol::shm;
            m_config.end_point = std::string(optarg);
            break;
        case 'u':
            m_config.protocol = IPC_protocol::uds;
            m_config.end_point = std::string(optarg);
            break;
        default:
            // TODO: throw exception: invalid option.
            break;
        }
    }
}
