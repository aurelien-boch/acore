add_subdirectory(utility)

set(
    GLOBAL_INCLUDES
        ${CMAKE_CURRENT_LIST_DIR}/AsyncManager.hpp
)

set(
    INCLUDE
        ${GLOBAL_INCLUDES}
        ${UTILITY_INCLUDE}
        PARENT_SCOPE
)