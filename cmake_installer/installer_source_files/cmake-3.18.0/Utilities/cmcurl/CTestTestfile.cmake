# CMake generated Testfile for 
# Source directory: /home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0/Utilities/cmcurl
# Build directory: /home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0/Utilities/cmcurl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("curl" "curltest" "http://open.cdash.org/user.php")
set_tests_properties(curl PROPERTIES  _BACKTRACE_TRIPLES "/home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0/Utilities/cmcurl/CMakeLists.txt;1425;add_test;/home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0/Utilities/cmcurl/CMakeLists.txt;0;")
subdirs("lib")
