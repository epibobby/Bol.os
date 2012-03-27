cmake_minimum_required (VERSION 2.6)

include_directories("../../common/src/sockets"
		    "../../common/src/protocol"
		    "../../common/src/utils"
		    "../../common/src/utils/unix"
		    "../../common/src/utils/win32"
		    "../../client/src/engine"
		    "../../client/src/entities"
		    "../../client/src/network"
		    "../../client/src/gui" 
		    "../../client/src/resourcemanager")

# libs
set(MY_DEPS)
set(MY_WIN32_DEPS ws2_32 sfml-graphics-s-d sfml-window-s-d sfml-system-s-d)
set(MY_UNIX_DEPS sfml-graphics sfml-window sfml-system)

# defines
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_CLIENT")

# common sources
set(MY_COMMON_SOURCES ../../common/src/utils/common_utils
		      ../../client/src/engine/AGame
		      ../../client/src/engine/Input
		      ../../client/src/gui/Display
		      ../../client/src/gui/MenuDisplay
		      ../../client/src/resourcemanager/ResourceManager
		      ../../client/src/resourcemanager/Resource
		      ../../client/src/resourcemanager/Image
		      ../../client/src/resourcemanager/Font
		      ../../client/src/resourcemanager/Music
		      ../../client/src/resourcemanager/SoundBuffer
		      main)
# unix sources
set(MY_UNIX_SOURCES ../../common/src/utils/unix/UnixClock)

# win32 sources
set(MY_WIN32_SOURCES ../../common/src/utils/win32/Win32Clock)

# platform dependant resolutions
if (WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /DWIN32 /MDd")

    set(MY_COMMON_SOURCES ${MY_COMMON_SOURCES}
   		       	  ${MY_WIN32_SOURCES})
    set(MY_DEPS ${MY_DEPS} ${MY_WIN32_DEPS})
endif (WIN32)
if (UNIX)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -ggdb")
    set(MY_COMMON_SOURCES ${MY_COMMON_SOURCES}
   		  	  ${MY_UNIX_SOURCES})
    set(MY_DEPS ${MY_DEPS} ${MY_UNIX_DEPS})
endif (UNIX)

# executables
set(EXECUTABLE_OUTPUT_PATH .)

add_executable(client ${MY_CLT_SOURCES} ${MY_COMMON_SOURCES})
target_link_libraries(client ${MY_DEPS})
