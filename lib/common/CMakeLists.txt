add_library(common INTERFACE "ipc_config.hpp" "ipc_mode.hpp" "ipc_protocol.hpp")
target_include_directories(common INTERFACE "./")
