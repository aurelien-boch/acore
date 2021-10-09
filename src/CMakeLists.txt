add_subdirectory(utility)

set(
    GLOBAL_SRCS
        ${CMAKE_CURRENT_LIST_DIR}/AsyncManager.cpp
)
set(
    SRCS
        ${GLOBAL_SRCS}
        ${UTILITY_SRCS}
        PARENT_SCOPE
)
