function(find_source_group LINES NAME)
  set(foundFileFilter 0)
  set(foundFilter 0)
  foreach(line IN LISTS LINES)
    if(line MATCHES "<Filter>${NAME}</Filter>")
      if(foundFileFilter)
        set(RunCMake_TEST_FAILED "Multiple files listed with filter for ${NAME}." PARENT_SCOPE)
        set(FILTER_FOUND 0 PARENT_SCOPE)
        return()
      endif()
      set(foundFileFilter 1)
    endif()
    if(line MATCHES "<Filter.*Include=\"${NAME}\"")
      if(foundFilter)
        set(RunCMake_TEST_FAILED "Multiple copies of ${NAME} filter listed." PARENT_SCOPE)
        set(FILTER_FOUND 0 PARENT_SCOPE)
        return()
      endif()
      set(foundFilter 1)
    endif()
  endforeach()

  if(NOT foundFileFilter)
    set(RunCMake_TEST_FAILED "File filter for ${NAME} not found." PARENT_SCOPE)
    set(FILTER_FOUND 0 PARENT_SCOPE)
    return()
  endif()
  if(NOT foundFilter)
    set(RunCMake_TEST_FAILED "Filter ${NAME} not found." PARENT_SCOPE)
    set(FILTER_FOUND 0 PARENT_SCOPE)
    return()
  endif()

  set(FILTER_FOUND 1 PARENT_SCOPE)
endfunction()
