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

#include <memory>
#include <string>

#include "common/sharded_task.h"
#include "common/task_desc/task_desc.h"

namespace axe {
namespace common {

class ResourceUsageEstimator {
 public:
  static std::unique_ptr<ResourceUsageEstimator> GetResourceEstimator(const std::string& type);

  virtual void SetNetworkTaskResourceUsage(TaskDesc* desc, const ShardedTask& sharded_task, double stage_input_size, int parallelism) const;
  virtual void SetLocalTaskResourceUsage(TaskDesc* desc, const ShardedTask& sharded_task, double stage_input_size, int parallelism) const;
};

}  // namespace common
}  // namespace axe