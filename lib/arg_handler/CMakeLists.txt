add_library(_arg_handler STATIC "arg_handler.cpp" "arg_handler.hpp")
target_include_directories(_arg_handler PUBLIC .)
target_link_libraries(_arg_handler PUBLIC common)
