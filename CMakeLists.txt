project(crc16)

# set source files
set(crc16_HDRS
    crc16.h
)

# set source files
set(crc16_SRCS
    crc16.c
)

# set lib
add_library(crc16
    ${crc16_SRCS}
)

set_target_properties(crc16 PROPERTIES LINKER_LANGUAGE C)

set(INS_TARGETS
    crc16
)

# Install
install(TARGETS ${INS_TARGETS}
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)
