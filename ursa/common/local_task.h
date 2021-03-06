// Copyright 2018 H-AXE
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <string>

#include "common/constants.h"
#include "common/task_base.h"

namespace axe {
namespace common {

class LocalTask : public TaskBase {
 public:
  LocalTask(TaskIdType id, const std::string& name, int shard_id);

 private:
  int shard_id_;
};

}  // namespace common
}  // namespace axe
