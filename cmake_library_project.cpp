/*
 * Copyright 2021 ReliaSolve, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Implements the C-interface library functions that are described in the
// cmake_library_project.h header file.

#ifdef _WIN32
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "cmake_library_project.h"

//===================================================================================
// C++ objects and methods as needed to implement the functions.  Anything in this section
// should be declared static to avoid leaking outside of the library.

//===================================================================================
// Function definitions go here.

extern "C" {
  const char* cmake_library_project_ErrorMessage(int status)
  {
    switch (status) {
    case CMAKE_LIBRARY_PROJECT_STATUS_OK:
      return "No Error";
    default:
      return "Unrecognized status";
    }
  }

  int cmake_library_project_init()
  {
    return CMAKE_LIBRARY_PROJECT_STATUS_OK;
  }

  int cmake_library_project_destroy()
  {
    return CMAKE_LIBRARY_PROJECT_STATUS_OK;
  }

  const char* cmake_library_project_get_version()
  {
    return "1.0.0";
  }

  const char* cmake_library_project_test()
  {
    return "";
  }
}