# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/serg/ProcessExplorer/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/serg/ProcessExplorer/obj

# Include any dependencies generated for this target.
include host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/depend.make

# Include the progress variables for this target.
include host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/progress.make

# Include the compile flags for this target's objects.
include host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/flags.make

host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o: host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/flags.make
host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o: /home/serg/ProcessExplorer/src/host/process.explorer.daemon/server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/serg/ProcessExplorer/obj/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o"
	cd /home/serg/ProcessExplorer/obj/host/process.explorer.daemon && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/process.explorer.daemon.dir/server.cpp.o -c /home/serg/ProcessExplorer/src/host/process.explorer.daemon/server.cpp

host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/process.explorer.daemon.dir/server.cpp.i"
	cd /home/serg/ProcessExplorer/obj/host/process.explorer.daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/serg/ProcessExplorer/src/host/process.explorer.daemon/server.cpp > CMakeFiles/process.explorer.daemon.dir/server.cpp.i

host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/process.explorer.daemon.dir/server.cpp.s"
	cd /home/serg/ProcessExplorer/obj/host/process.explorer.daemon && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/serg/ProcessExplorer/src/host/process.explorer.daemon/server.cpp -o CMakeFiles/process.explorer.daemon.dir/server.cpp.s

host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o.requires:

.PHONY : host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o.requires

host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o.provides: host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o.requires
	$(MAKE) -f host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/build.make host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o.provides.build
.PHONY : host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o.provides

host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o.provides.build: host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o


# Object files for target process.explorer.daemon
process_explorer_daemon_OBJECTS = \
"CMakeFiles/process.explorer.daemon.dir/server.cpp.o"

# External object files for target process.explorer.daemon
process_explorer_daemon_EXTERNAL_OBJECTS =

/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/build.make
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libboost_system.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libboost_filesystem.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libboost_thread.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libboost_program_options.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libboost_iostreams.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libboost_chrono.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libboost_date_time.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libboost_atomic.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libboost_regex.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /opt/grpc/lib/libgrpc++.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /opt/grpc/lib/libgrpc.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /opt/grpc/lib/libgpr.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /opt/grpc/lib/libprotobuf.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libz.so
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /home/serg/ProcessExplorer/lib/Debug/libGeneratedRpc.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /opt/grpc/lib/libgrpc++.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /opt/grpc/lib/libgrpc.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /opt/grpc/lib/libgpr.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /opt/grpc/lib/libprotobuf.a
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: /usr/lib/x86_64-linux-gnu/libz.so
/home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon: host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/serg/ProcessExplorer/obj/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon"
	cd /home/serg/ProcessExplorer/obj/host/process.explorer.daemon && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/process.explorer.daemon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/build: /home/serg/ProcessExplorer/bin/Debug/process.explorer.daemon

.PHONY : host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/build

host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/requires: host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/server.cpp.o.requires

.PHONY : host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/requires

host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/clean:
	cd /home/serg/ProcessExplorer/obj/host/process.explorer.daemon && $(CMAKE_COMMAND) -P CMakeFiles/process.explorer.daemon.dir/cmake_clean.cmake
.PHONY : host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/clean

host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/depend:
	cd /home/serg/ProcessExplorer/obj && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/serg/ProcessExplorer/src /home/serg/ProcessExplorer/src/host/process.explorer.daemon /home/serg/ProcessExplorer/obj /home/serg/ProcessExplorer/obj/host/process.explorer.daemon /home/serg/ProcessExplorer/obj/host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : host/process.explorer.daemon/CMakeFiles/process.explorer.daemon.dir/depend

