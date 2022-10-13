ADD_EXECUTABLE(first first_thread.c)
SET(CMAKE_BUILD_TYPE "Debug")
TARGET_LINK_LIBRARIES(first pthread)
