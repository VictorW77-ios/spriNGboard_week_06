if(NOT EXISTS "/home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0/install_manifest.txt")
  message(FATAL_ERROR "Cannot find install manifest: \"/home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0/install_manifest.txt\"")
endif()

file(READ "/home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0/install_manifest.txt" files)
string(REPLACE "\n" ";" files "${files}")
foreach(file ${files})
  message(STATUS "Uninstalling \"$ENV{DESTDIR}${file}\"")
  if(EXISTS "$ENV{DESTDIR}${file}")
    exec_program(
      "/home/victor/week6/spriNGboard_week_06/cmake_installer/installer_source_files/cmake-3.18.0/Bootstrap.cmk/cmake" ARGS "-E rm -f \"$ENV{DESTDIR}${file}\""
      OUTPUT_VARIABLE rm_out
      RETURN_VALUE rm_retval
      )
    if("${rm_retval}" STREQUAL 0)
    else()
      message(FATAL_ERROR "Problem when removing \"$ENV{DESTDIR}${file}\"")
    endif()
  else()
    message(STATUS "File \"$ENV{DESTDIR}${file}\" does not exist.")
  endif()
endforeach()
