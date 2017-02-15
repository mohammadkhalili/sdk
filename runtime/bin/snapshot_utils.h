// Copyright (c) 2017, the Dart project authors.  Please see the AUTHORS file
// for details. All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.

#ifndef RUNTIME_BIN_SNAPSHOT_UTILS_H_
#define RUNTIME_BIN_SNAPSHOT_UTILS_H_

#include "platform/globals.h"

namespace dart {
namespace bin {

class Snapshot {
 public:
  static void GenerateScript(const char* snapshot_filename);
  static void GenerateAppJIT(const char* snapshot_filename);
  static void GenerateAppAOTAsBlobs(const char* snapshot_filename);
  static void GenerateAppAOTAsAssembly(const char* snapshot_filename);

  static bool ReadAppSnapshot(const char* script_name,
                              const uint8_t** vm_data_buffer,
                              const uint8_t** vm_instructions_buffer,
                              const uint8_t** isolate_data_buffer,
                              const uint8_t** isolate_instructions_buffer);

 private:
  DISALLOW_ALLOCATION();
  DISALLOW_IMPLICIT_CONSTRUCTORS(Snapshot);
};

}  // namespace bin
}  // namespace dart

#endif  // RUNTIME_BIN_SNAPSHOT_UTILS_H_