
# Append custom CMake modules.
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

# Setup default build options, like compiler flags and build type.
include(build_option)

# Setup package requirement variables.
include(package_config)

include(platforms)

# Setup logging variables.
include(Logger)
